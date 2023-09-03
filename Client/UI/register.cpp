#include "register.h"
#include "ui_register.h"
#include "login.h"
#include "css.h"
#include "Controller/clientcontroller.h"
#include "Network/handlerreg.h"
#include "Network/handlers.h"

#include <QMouseEvent>
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QtCore>
#include <QCryptographicHash>

Register::Register(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
    ui->set_account->setPlaceholderText("在此输入您的账户");
    ui->set_password->setPlaceholderText("在此输入密码");
    ui->retype_password->setPlaceholderText("重新输入你的密码");
    ui->set_nickname->setPlaceholderText("选填，在此设置你的昵称");
    ui->set_signature->setPlaceholderText("选填，在此设置你的个性签名");

    connect((RegisterHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_SUCCESS),
            &RegisterHandler::sigRegSuccessful, this, &Register::jump_to_login);
    connect((RegisterHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_ERROR),
            &RegisterHandler::sigRegFailed, this, &Register::register_again);
}

Register::~Register()
{
    delete ui;
}

void Register::on_go_login_clicked()
{
    Login *l = new Login;
    l->show();
    this->close();
}

void Register::on_close_clicked()
{
    this->close();
}

void Register::on_minimize_clicked()
{
    this->showMinimized();
}

//鼠标按下
void Register::mousePressEvent(QMouseEvent *event)
{
   if(event->button() == Qt::LeftButton)
   {
       m_point = event->globalPos() - pos(); //计算移动量
       event->accept();
   }
}

//鼠标移动
void Register::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

bool Register::isValidInput_pwd(const QString &input) //检查密码格式是否正确，使用正则表达式匹配
{
    QRegularExpression regex("^(?=.*[A-Za-z])(?=.*\\d)[A-Za-z\\d]{4,16}$");
    QRegularExpressionMatch match = regex.match(input);
    return match.hasMatch();
}

bool Register::isValidInput_acc(const quint32 &input_account) //检查账号格式是否正确
{
    return (input_account >= 1000) && (input_account <= 999999999);
}

void Register::on_set_password_editingFinished() //用户每次在输入框完成编辑后都检查一次格式，下同
{
    password_input = ui->set_password->text();
    // 检查用户输入是否满足要求
    if (isValidInput_pwd(password_input)) {
        ui->set_password->setStyleSheet(LINE_EDIT_STYLE_CORRECT);
        qDebug() << "此密码有效！ :-)";
    } else {
        ui->set_password->setStyleSheet(LINE_EDIT_STYLE_INCORRECT);
        qDebug() << "此密码无效！请输入4~16位英文字母与数字的组合！ :-(";
    }
}

void Register::on_retype_password_editingFinished()
{
    retype_input = ui->retype_password->text();
    if(password_input != retype_input)
    {
        ui->retype_password->setStyleSheet(LINE_EDIT_STYLE_INCORRECT);
        qDebug() << "两次输入的密码不相同！ :-(";
    }
    else
    {
        if(isValidInput_pwd(retype_input))
        {
            ui->retype_password->setStyleSheet(LINE_EDIT_STYLE_CORRECT);
            qDebug() << "两次输入的密码相同！ :-)";
        }
        else
        {
            ui->retype_password->setStyleSheet(LINE_EDIT_STYLE_INCORRECT);
            qDebug() << "此密码无效！请输入4~16位英文字母与数字的组合！ :-(";
        }
    }
}

void Register::on_set_account_editingFinished()
{
    account = ui->set_account->text().toUInt();
    if(isValidInput_acc(account))
    {
        ui->set_account->setStyleSheet(LINE_EDIT_STYLE_CORRECT);
        qDebug() << "此账号有效！ :-)";
    }
    else
    {
        ui->set_account->setStyleSheet(LINE_EDIT_STYLE_INCORRECT);
        qDebug() << "此账号无效！请输入4~9位数字！ :-(";
    }
}

void Register::on_set_nickname_editingFinished()
{
    nickname_input = ui->set_nickname->text();
    ui->set_nickname->setStyleSheet(LINE_EDIT_STYLE_CORRECT);
}

void Register::on_set_signature_editingFinished()
{
    signature_input = ui->set_signature->text();
    ui->set_signature->setStyleSheet(LINE_EDIT_STYLE_CORRECT);
}

void Register::on_go_register_clicked() // 按下注册按钮，将再进行一次输入检查，输入不合规内容的将弹出相应提示框并清空不合规的输入
{
    password = password_input;
    if(nickname_input == "")
    {
        nickname_input = "用户" + QString::number(account); //设置默认昵称
    }
    if(signature_input == "")
    {
        signature_input = "这个人很懒，还没有设置个性签名。"; //设置默认签名
    }
    qDebug() << "账号:"+ QString::number(account);
    qDebug() << "密码:"+ password_input;
    qDebug() << "重新输入密码:"+ retype_input;
    qDebug() << "昵称:"+ nickname_input;
    qDebug() << "个性签名:" + signature_input;
    if(isValidInput_acc(account) && isValidInput_pwd(password_input) && (password_input == retype_input))
    {
        //发送用户数据至服务器端
        ClientController::GetClientInstance()->requestRegister(account, nickname_input, password, signature_input);
    }
    else if(!isValidInput_acc(account) && !isValidInput_pwd(password_input))
    {
        ui->set_account->clear();
        ui->set_password->clear();
        QMessageBox::warning(this, "注册失败", "账号和密码格式不正确!\n请重新设置账号和密码！");
    }
    else if(!isValidInput_acc(account))
    {
        ui->set_account->clear();
        QMessageBox::warning(this, "注册失败", "账号格式不正确!\n请重新设置账号！");
    }
    else if(!isValidInput_pwd(password_input))
    {
        ui->set_password->clear();
        QMessageBox::warning(this, "注册失败", "密码格式不正确!\n请重新设置密码！");
    }
    else if(password_input != retype_input)
    {
        ui->retype_password->clear();
        QMessageBox::warning(this, "注册失败", "两次输入的密码不一致!\n请重新输入！");
    }
}

void Register::jump_to_login(UserInfo info)
{
    QMessageBox::information(this, "注册成功", "注册成功,帐号id为:"+QString::number(info.getID()));
    qDebug() << info.getID() << "注册成功";
    Login *l = new Login;
    l->show();
    this->close();
}

void Register::register_again()
{
    QMessageBox::warning(this, "注册失败", "账户已存在，请您重新注册！");
}
