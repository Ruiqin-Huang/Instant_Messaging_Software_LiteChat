#include "welcome.h"
#include "ui_welcome.h"
#include "login.h"
#include "register.h"

#include <QMouseEvent>

Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_go_login_clicked()
{
    Login *l = new Login;
    l->show();
    this->close();
}

void Welcome::on_go_register_clicked()
{
    Register *r = new Register;
    r->show();
    this->close();
}

//鼠标按下
void Welcome::mousePressEvent(QMouseEvent *event)
{
   if(event->button() == Qt::LeftButton)
   {
       m_point = event->globalPos() - pos(); //计算移动量
       event->accept();
   }
}

//鼠标移动
void Welcome::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void Welcome::on_close_clicked()
{
    this->close();
}

void Welcome::on_minimize_clicked()
{
    this->showMinimized();
}

