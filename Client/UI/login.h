#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QMouseEvent>
#include "DataModel/userinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:

    void on_go_register_clicked();

    void on_minimize_clicked();

    void on_close_clicked();

    void on_go_login_clicked();

    void jump_to_interface(UserInfo info);

    void login_again();
private:
    Ui::Login *ui;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // Login

