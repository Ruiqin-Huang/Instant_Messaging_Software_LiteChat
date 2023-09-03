#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QMouseEvent>
#include <QRegularExpression>
#include <QDebug>
#include "DataModel/userinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Register; }
QT_END_NAMESPACE

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:

    void on_go_register_clicked();

    void on_go_login_clicked();

    void on_close_clicked();

    void on_minimize_clicked();

    void on_set_password_editingFinished();

    void on_retype_password_editingFinished();

    void on_set_account_editingFinished();

    void on_set_nickname_editingFinished();

    void on_set_signature_editingFinished();

    void jump_to_login(UserInfo info);

    void register_again();

private:
    Ui::Register *ui;
    QPoint m_point;
    quint32 account;
    QString account_string;
    QString password_input;
    QString password;
    QString retype_input;
    QString nickname_input;
    QString signature_input;
    bool isValidInput_pwd(const QString &input);
    bool isValidInput_acc(const quint32 &input_account);
    QString Hash_encryption(const QString &input);
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // Register
