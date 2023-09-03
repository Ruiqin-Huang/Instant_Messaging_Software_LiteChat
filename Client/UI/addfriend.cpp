#include "addfriend.h"
#include "ui_addfriend.h"
#include "Controller/clientcontroller.h"
#include "Network/Handlers/friend_request_result_handler.h"
#include "Network/handlerreg.h"

#include <QMessageBox>
#include <QDebug>
#include <QRegularExpressionValidator>
#include <QMouseEvent>
AddFriend::AddFriend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFriend)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
}

AddFriend::~AddFriend()
{
    delete ui;
}

//鼠标按下
void AddFriend::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void AddFriend::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void AddFriend::on_cancel_clicked()
{
    accept();
}

void AddFriend::on_addfriend_clicked()
{
    qDebug() << "请求的好友ID:"+ request_id;
    ClientController::GetClientInstance()->requestAddFriend(request_id_int,"");
    ui->getuserid->clear();
}



// 给输入框加了限制，使得只能输入数字
void AddFriend::on_getuserid_textChanged(const QString &arg1)
{
    ui->getuserid->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]+$")));
    QRegularExpression regex("\\D"); // 或者 "[^0-9]"
    QRegularExpressionMatch match = regex.match(ui->getuserid->text());

    if (match.hasMatch()) {
        ui->getuserid->clear();
    }
}
/*
void AddFriend::on_deletefriend_clicked()
{

}
*/
void AddFriend::on_getuserid_editingFinished()
{
    request_id = ui->getuserid->text();
    request_id_int = request_id.toUInt();
}

void AddFriend::on_minimize_clicked()
{
    this->showMinimized();
}

void AddFriend::on_close_clicked()
{
    this->close();
}
