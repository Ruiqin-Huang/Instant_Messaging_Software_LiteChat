#include "server.h"
#include <QTcpServer>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <Utilities/log.h>
#include "tcpserver.h"

Server::Server(QObject *parent) :
    QObject(parent),
    _tcpServer(new TcpServer)
{
    _connectionCheckTimer = new QTimer(this);
    connect(_connectionCheckTimer, &QTimer::timeout, this, &Server::checkClientConnections);
}

void Server::start(int port)
{
    if( false == _tcpServer->listen(QHostAddress::Any,port) )
    {
        QMessageBox::warning(NULL,"错误","无法监听端口, 请检查是否在该端口上启动了其他服务器");
        qDebug()<<_tcpServer->errorString();
        return;
    }
    _connectionCheckTimer->start(500); // 每隔500ms检查一次连接状态，可以根据需要调整间隔
    Log::GetLogObj()->writeLog("开始监听端口号："+QString::number(port));
}

void Server::stop()
{
    Log::GetLogObj()->writeLog("结束server服务");
    _connectionCheckTimer->stop();
    _clients.clear();
    _tcpServer->close();
}

void Server::addClient(quint32 id,TcpClientSocket* c)
{
    _clients[id] = c;
}

TcpClientSocket* Server::getClients(quint32 Id)
{
    if(_clients.find(Id) == _clients.end()) return NULL;
    return _clients[Id];
}
void Server::deleteClient(quint32 id){
    _clients.remove(id);
}

// 在 Server 类中实现定时器的槽函数，检查客户端连接状态
void Server::checkClientConnections()
{
    QList<quint32> disconnectedClients;

    for (auto it = _clients.begin(); it != _clients.end(); ++it)
    {
        quint32 clientId = it.key();
        TcpClientSocket* client = it.value();

        if (client->state() == QAbstractSocket::UnconnectedState)
        {
            disconnectedClients.append(clientId);
        }
    }

    // 移除已断开连接的客户端
    for (quint32 clientId : disconnectedClients)
    {
        _clients.remove(clientId);
        qDebug() << "Client with ID" << clientId << "disconnected and removed.";
    }
}
