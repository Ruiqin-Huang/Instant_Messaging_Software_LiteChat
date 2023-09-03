#include "chatmessage.h"

#include <QtNetwork>
#include <QDateTime>

//构造函数
ChatMessage::ChatMessage(quint32 sender, quint32 receiver, const QString & content):
    sender_id(sender),receiver_id(receiver), content(content)
{
    DT = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
}
ChatMessage::ChatMessage():
    sender_id(0),receiver_id(0), content("")
{
    DT = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
}
//getters
quint32 ChatMessage::getSender() const{return sender_id;}
quint32 ChatMessage::getReceiver() const{return receiver_id;}
QString & ChatMessage::getContent(){ return content;}
QString ChatMessage::getDT(){return DT;}

ChatMessage ChatMessage::fromQByteArray(QByteArray chat_msg){
    QDataStream in(chat_msg);
    in.setVersion(QDataStream::Qt_5_12);
    ChatMessage recvChatMsg(0,0,"");
    //写入发送者 接收者
    in >> recvChatMsg.sender_id;
    in >> recvChatMsg.receiver_id;
    //写入时间戳
    quint32 tmpSize;
    in >> tmpSize;
    QByteArray tmpTimeBlock;
    tmpTimeBlock.resize(tmpSize);
    in >> tmpTimeBlock;
    recvChatMsg.DT = QString(tmpTimeBlock);
    //写入内容
    in >> tmpSize;
    QByteArray tmpContentBlock;
    tmpContentBlock.resize(tmpSize);
    in >> tmpContentBlock;
    recvChatMsg.content = QString(tmpContentBlock);

    return recvChatMsg;
}


QByteArray ChatMessage::toQByteArray(){
    QByteArray block;

    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_12);
    out << quint32(sender_id);
    out << quint32(receiver_id);
    //输出时间戳
    out << quint32(0);//预留给时间戳大小
    out << DT.toUtf8();
    out.device()->seek(8);
    out << (quint32)(block.size()-sizeof(quint32)*3);
    out.device()->seek(block.size());
    //输出内容
    QByteArray tmp = content.toUtf8();
    out << quint32(sizeof(tmp));
    out << tmp;

    return block;
}
