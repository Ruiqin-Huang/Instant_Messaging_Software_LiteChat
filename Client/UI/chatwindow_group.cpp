#include "chatwindow_group.h"
#include "ui_chatwindow_group.h"

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
#include "Controller/clientcontroller.h"
#include <QDateTime>
#include <QMouseEvent>
#include "Network/handlerreg.h"

chatwindow_group::chatwindow_group(QWidget *parent,quint32 _id)
    : QWidget(parent)
    , id(_id)
    , ui(new Ui::chatwindow_group)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    ui->chatwindow->verticalScrollBar();

    connect((GroupHistoryMsgHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::GROUP_HISTORY_MSG),
            &GroupHistoryMsgHandler::readyGroupHistoryMsg, this, &chatwindow_group::readyGroupHistoryMsg);

    connect((GroupMsgHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::GROUP_MSG_PLAIN_TEXT),
            &GroupMsgHandler::groupMsgReceiveSuccess, this, &chatwindow_group::receiveMessage);
}

void chatwindow_group::set_group_id(quint32 group_id)
{
    this->id = group_id;
    ui->lineEdit->setText(QString::number(id));
    ClientController::GetClientInstance()->requestGroupHistoryMsg(id);
}

//鼠标按下
void chatwindow_group::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void chatwindow_group::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

chatwindow_group::~chatwindow_group()
{
    delete ui;
}

void chatwindow_group::on_close_clicked()
{
    this->close();
}

void chatwindow_group::on_minimize_clicked()
{
    this->showMinimized();
}

void chatwindow_group::on_send_clicked()
{
    QString content = ui->input_text->toPlainText();
    ClientController::GetClientInstance()->sendGroupChatMessage(this->id, content);
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

// 文件
void chatwindow_group::on_pushButton_5_clicked()
{
    QString FileDirectory = QFileDialog::getOpenFileName(this, tr("open a file."),"D:/", tr("All files(*.*)"));
    if(FileDirectory.isEmpty())
        QMessageBox::warning(this, "提示", "打开文件失败，请重新选择文件");
    else
        ClientController::GetClientInstance()->requestSendFile(id, FileDirectory);
}


void chatwindow_group::receiveMessage(ChatMessage msg)
{
    qDebug()<<"receiveMessage";
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

void chatwindow_group::readyGroupHistoryMsg(){
    qDebug()<<"readyGroupHistoryMsg";
    QList<ChatMessage>* chatList = ClientController::GetClientInstance()->getGroupMsg(id);
    for(auto x: *chatList){
        receiveMessage(x);
    }
}
