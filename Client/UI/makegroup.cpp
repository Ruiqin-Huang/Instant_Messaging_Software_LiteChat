#include "makegroup.h"
#include "ui_makegroup.h"
#include <QRegularExpressionValidator>
#include "Controller/clientcontroller.h"
#include "Network/handlers.h"
#include "Network/handlerreg.h"
#include "DataModel/groupinfo.h"
#include <QMessageBox>
#include <QDebug>
#include <QMouseEvent>

makegroup::makegroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::makegroup)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    connect((RegisterGroupHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_GROUP_SUCCESS),
            &RegisterGroupHandler::sigRegGroupSuccessful, this, &makegroup::sigRegGroupSuccessful);
    connect((RegisterGroupHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_GROUP_SUCCESS),
            &RegisterGroupHandler::sigRegGroupFailed, this, &makegroup::sigRegGroupFailed);
    connect((RegisterGroupHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_GROUP_SUCCESS),
            &RegisterGroupHandler::refreshGroupList, this, &makegroup::refreshGroupList);
}

makegroup::~makegroup()
{
    delete ui;
}

//鼠标按下
void makegroup::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void makegroup::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void makegroup::on_pushButton_2_clicked()
{
    accept();
}

void makegroup::on_pushButton_clicked()
{
    // 返回值格式{群昵称}
    QList<QString> makeGroupInfo;
    makeGroupInfo.append(ui->groupname->text());    
    ClientController::GetClientInstance()->registerGroup(ui->groupname->text());
    ui->groupname->clear();
}

void makegroup::sigRegGroupSuccessful(GroupInfo info)
{
    QMessageBox::information(this, "创建群聊", "群聊创建成功,群聊id:"+QString::number(info.getID()));
}

void makegroup::sigRegGroupFailed()
{
    QMessageBox::warning(this, "创建群聊", "您输入的信息无法创建新的群聊，请重新输入！");
}

void makegroup::refreshGroupList()
{
    //重新刷新ui
}

void makegroup::on_groupid_textChanged(const QString &arg1)
{

}

void makegroup::on_minimize_clicked()
{
    this->showMinimized();
}

void makegroup::on_close_clicked()
{
    this->close();
}
