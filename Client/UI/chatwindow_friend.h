#ifndef CHATWINDOW_FRIEND_H
#define CHATWINDOW_FRIEND_H

#include <QWidget>
#include <QMouseEvent>
#include "DataModel/chatmessage.h"
#include "DataModel/userinfo.h"

namespace Ui {
class chatwindow_friend;
}

class chatwindow_friend : public QWidget
{
    Q_OBJECT

public:
    explicit chatwindow_friend(QWidget *parent = nullptr);
    void set_receiver_id(quint32 id_);
    ~chatwindow_friend();

private slots:
    void on_close_clicked();

    void on_send_clicked();

    void on_pushButton_5_clicked();

    void set_receiver_info(UserInfo info);

    void receiveMessage(ChatMessage msg);

    void readyFriendHistoryMsg();
    void on_minimized_clicked();

private:
    Ui::chatwindow_friend *ui;
    QPoint m_point;
    quint32 receiver_id;
    UserInfo receiver_info;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // CHATWINDOW_FRIEND_H
