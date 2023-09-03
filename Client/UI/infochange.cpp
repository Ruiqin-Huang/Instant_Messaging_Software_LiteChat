#include "infochange.h"
#include "ui_infochange.h"
#include "Controller/clientcontroller.h"
#include "Network/handlerreg.h"
#include "Network/handlers.h"
#include <QDebug>
#include <QMessageBox>
#include <QMouseEvent>
InfoChange::InfoChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoChange)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    connect((ModifyUserNameResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::MODIFY_USERNAME_SUCCESS),
            &ModifyUserNameResultHandler::modifyUserNameSuccess, this, &InfoChange::modify_success);
    connect((ModifyUserNameResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::MODIFY_USERNAME_ERROR),
            &ModifyUserNameResultHandler::modifyUserNameFail, this, &InfoChange::modify_fail);

}

InfoChange::~InfoChange()
{
    delete ui;
}

//鼠标按下
void InfoChange::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void InfoChange::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void InfoChange::on_IsChanged_clicked()
{
    // 如果选择提交新信息，将所有信息收集提交，未修改的信息为空字符串
    // 返回一个字符串列表
    if(ui->newName->text() != "")
        ClientController::GetClientInstance()->requestModifyUserName(ui->newName->text());
    accept();
}

void InfoChange::modify_success(UserInfo newuser)
{
    QMessageBox::about(this,"成功", newuser.getName() + "修改成功！");
}

void InfoChange::modify_fail()
{
    QMessageBox::critical(this,tr("失败"), tr("修改失败！"));
}

void InfoChange::on_NoChange_clicked()
{
    reject();
}

void InfoChange::on_minimize_clicked()
{
    this->showMinimized();
}

void InfoChange::on_close_clicked()
{
    this->close();
}
