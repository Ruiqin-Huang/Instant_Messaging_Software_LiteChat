#ifndef RECEIVEFRIREQ_H
#define RECEIVEFRIREQ_H

#include "DataModel/userinfo.h"
#include <QWidget>

namespace Ui {
class receivefrireq;
}

class receivefrireq : public QWidget
{
    Q_OBJECT

public:
    explicit receivefrireq(QWidget *parent = nullptr);
    ~receivefrireq();
    void set_sender_info(UserInfo Sender);
    void set_my_info(UserInfo Sender);

private slots:
    void on_agree_clicked();

    void on_refuse_clicked();

    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::receivefrireq *ui;
    UserInfo my_userinfo;
    UserInfo sender;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // RECEIVEFRIREQ_H
