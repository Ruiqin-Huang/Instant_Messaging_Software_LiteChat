#include "receivefrireq.h"
#include "ui_receivefrireq.h"
#include "Controller/clientcontroller.h"
#include <QMouseEvent>

receivefrireq::receivefrireq(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::receivefrireq)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
}

receivefrireq::~receivefrireq()
{
    delete ui;
}

//鼠标按下
void receivefrireq::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void receivefrireq::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void receivefrireq::set_sender_info(UserInfo Sender)
{
    this->sender = Sender;
    ui->label->setText(sender.getName() + "请求加您为好友");
}

void receivefrireq::set_my_info(UserInfo my_info)
{
    this->my_userinfo = my_info;
}

void receivefrireq::on_agree_clicked()
{
    ClientController::GetClientInstance()->agreeFriendRequest(my_userinfo.getID(), sender.getID(), "");
    ClientController::GetClientInstance()->requestFriendList(my_userinfo);
    this->close();
}

void receivefrireq::on_refuse_clicked()
{
    ClientController::GetClientInstance()->declineFriendRequest(my_userinfo.getID(), sender.getID(), "");
    ClientController::GetClientInstance()->requestGroupList(my_userinfo);
    this->close();
}

void receivefrireq::on_minimize_clicked()
{
    this->showMinimized();
}

void receivefrireq::on_close_clicked()
{
    this->close();
}
