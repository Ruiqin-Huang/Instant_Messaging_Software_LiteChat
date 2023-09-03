#include "chatwindow_friend.h"
#include "ui_chatwindow_friend.h"
#include "Controller/clientcontroller.h"
#include "DataModel/chatmessage.h"
#include "Network/handlerreg.h"
#include "file_receive.h"

#include <QTextCursor>
#include <QMovie>
#include <QImage>
#include <QScrollBar>
#include <QMenu>
#include <QPainter>
#include <QTimer>
#include <QDebug>
#include <QFontDatabase>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QMouseEvent>

chatwindow_friend::chatwindow_friend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chatwindow_friend)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    ui->chatwindow->verticalScrollBar();
    ui->chatwindow->clearHistory();

    //connect(&chatwindow_friend::newMessageReceived, &chatwindow_friend::receiveMessage);
    connect((ChatMsgHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::MSG_PLAIN_TEXT),
            &ChatMsgHandler::readyShowChatMsg, this, &chatwindow_friend::receiveMessage);

    connect((UserInfoHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::USERINFO),
            &UserInfoHandler::readyShowUserInfo, this, &chatwindow_friend::set_receiver_info);

    connect((FriendHistoryMsgHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::FRIEND_HISTORY_MSG),
            &FriendHistoryMsgHandler::readyFriendHistoryMsg, this, &chatwindow_friend::readyFriendHistoryMsg);

}

void chatwindow_friend::set_receiver_id(quint32 id_)
{
    this->receiver_id = id_;
    ClientController::GetClientInstance()->requestUserInfoByID(receiver_id);
    ClientController::GetClientInstance()->requestFriendHistoryMsg(receiver_id);
}

void chatwindow_friend::set_receiver_info(UserInfo info)
{
    this->receiver_info = info;
    ui->lineEdit->setText(QString::number(info.getID()));
    ui->lineEdit_2->setText(info.getName());
    ui->lineEdit_3->setText(info.getSignal());
}

//鼠标按下
void chatwindow_friend::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void chatwindow_friend::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

chatwindow_friend::~chatwindow_friend()
{
    delete ui;
}

void chatwindow_friend::on_close_clicked()
{
    this->close();
}

void chatwindow_friend::on_send_clicked()
{
    QString content = ui->input_text->toPlainText();
    ClientController::GetClientInstance()->sendChatMessage(receiver_id, content);
    // 获取当前日期和时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString DT = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    DT = "我: " + DT;
             QString styledDT = "<span style='font-size: 15px; white-space: pre-wrap; font-family: \"Microsoft YaHei\", sans-serif; color: green;'>" + DT + "</span><br>";
    QString styledContent = "<span style='font-size: 20px; white-space: pre-wrap;font-family: \"Microsoft YaHei\", sans-serif;'>" + content + "</span><br>";
    ui->chatwindow->insertHtml(styledDT);
    ui->chatwindow->insertHtml(styledContent);
    ui->input_text->clear();
}

void chatwindow_friend::on_pushButton_5_clicked()
{
    QString FileDirectory = QFileDialog::getOpenFileName(this, tr("open a file."),"D:/", tr("All files(*.*)"));
    if(FileDirectory.isEmpty())
        QMessageBox::warning(this, "提示", "打开文件失败，请重新选择文件");
    else
        ClientController::GetClientInstance()->requestSendFile(receiver_id, FileDirectory);
}

void chatwindow_friend::receiveMessage(ChatMessage msg)
{
    QString content = msg.getContent();
    QString DT = msg.getDT();
    QString sender = QString::number(msg.getSender());
    QString styledDT;
    QString styledContent;
    if(msg.getSender()==ClientController::GetClientInstance()->getMyInfo().getID()){
        DT = "我: " + DT;
                 styledDT = "<span style='font-size: 15px; white-space: pre-wrap; font-family: \"Microsoft YaHei\", sans-serif; color: green;'>" + DT + "</span><br>";
        styledContent = "<span style='font-size: 20px; white-space: pre-wrap;font-family: \"Microsoft YaHei\", sans-serif;'>" + content + "</span><br>";
    }else{
        styledDT = "<span style='font-size: 15px; white-space: pre-wrap; font-family: \"Microsoft YaHei\", sans-serif; color: blue;'>" + sender + ": " + DT + "</span><br>";
        styledContent = "<span style='font-size: 20px; white-space: pre-wrap;font-family: \"Microsoft YaHei\", sans-serif;'>" + content + "</span><br>";
    }
    ui->chatwindow->insertHtml(styledDT);
    ui->chatwindow->insertHtml(styledContent);
}

void chatwindow_friend::readyFriendHistoryMsg(){
    qDebug()<<"readyFriendHistoryMsg";
    QList<ChatMessage>* chatList = ClientController::GetClientInstance()->getChatMsg(receiver_id);
    for(auto x: *chatList){
        receiveMessage(x);
    }
}



void chatwindow_friend::on_minimized_clicked()
{
    this->showMinimized();
}
