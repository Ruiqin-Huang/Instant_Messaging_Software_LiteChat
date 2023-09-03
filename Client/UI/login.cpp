#include "login.h"
#include "ui_login.h"
#include "register.h"
#include "Controller/clientcontroller.h"
#include "Network/handlers.h"
#include "Network/handlerreg.h"
#include "Utilities/log.h"
#include "mainwindow.h"
#include "interface.h"

#include <QMouseEvent>
#include <QMessageBox>

//MainWindow* login:: mw = NULL;
Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    ui->set_account->setPlaceholderText("在此输入您的账户名称");
    ui->set_password->setPlaceholderText("在此输入密码");
    //检查账号密码
    connect((LoginHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::LOGIN_SUCCESS),
            &LoginHandler::sigLoginSuccessful, this, &Login::jump_to_interface);
    connect((LoginHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::LOGIN_ERROR),
            &LoginHandler::sigLoginFailed, this, &Login::login_again);
}

Login::~Login()
{
    delete ui;
}


void Login::on_go_register_clicked()
{
    Register *r = new Register;
    r->show();
    this->close();
}

//鼠标按下
void Login::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void Login::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void Login::on_close_clicked()
{
    this->close();
}

void Login::on_minimize_clicked()
{
    this->showMinimized();
}

//MainWindow * login::GetMainWindowInstance(){
//    if(mw == nullptr){
//        mw = new MainWindow;
//    }
//    return mw;
//}

void Login::on_go_login_clicked()
{
    qDebug() << "Login successfully!";
    //通信函数
    quint32 id = ui->set_account->text().toUInt();
    QString pw = ui->set_password->text();
    ClientController::GetClientInstance()->requestLogin(id, pw);

}

void Login::jump_to_interface(UserInfo info)
{
    static Interface *i = nullptr;
    if (i)
    {
        i->close();
        i = nullptr;
    }

    i = new Interface(nullptr, info);
    connect(i, &Interface::interfaceClosed, [this]() {
        i = nullptr;
    });
    i->show();
    this->close();
}

void Login::login_again()
{
    QMessageBox::warning(this, "登录失败", "账号或密码有误，请您重新登录！");
}
