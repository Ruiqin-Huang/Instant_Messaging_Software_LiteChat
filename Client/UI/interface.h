#ifndef INTERFACE_H
#define INTERFACE_H


#include <QWidget>
#include <QLabel>
#include <QMovie>
#include <QMouseEvent>
#include <QDebug>
#include <QPropertyAnimation>
#include <QImage>
#include <QDesktopServices>
#include <QPropertyAnimation>
#include <QPainter>
#include <QRect>
#include <QStackedLayout>
#include <QRect>
#include <QHideEvent>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QListWidgetItem>
#include "DataModel/groupinfo.h"
#include "DataModel/msgtype.h"
#include "DataModel/userinfo.h"
#include "DataModel/chatmessage.h"


namespace Ui {
class Interface;
}

class Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = nullptr, const UserInfo &userInfo = UserInfo(0,"","",""));
    ~Interface();

signals:
    void interfaceClosed();

private slots:



    void on_friend_list_itemDoubleClicked(QListWidgetItem *item);

    void on_group_list_itemDoubleClicked(QListWidgetItem *item);

    void on_info_set_clicked();

    void on_add_delete_friend_clicked();

    //void on_friend_application_clicked();

    void on_create_group_clicked();

    void on_join_group_clicked();

    void on_minimized_clicked();

    void on_close_clicked();

    void on_change_account_clicked();

    void show_friend_request(UserInfo sender);

    void addFriendSuccess(UserInfo sender);

    void addFriendFailed(MsgType type,UserInfo sender);

    void sigAddGroupSuccessful();

    void sigAddGroupFailed(MsgType type);

    void refreshGroupList();

    void refreshFriendList();

    void receiveFile(ChatMessage msg);

private:
    Ui::Interface *ui;
    QPoint m_point;
    void Initialize_UserInfo(UserInfo info);
    void Initialize_FriendList();
    void Initialize_GroupList();
    UserInfo my_userInfo;
    //    quint32 my_account;
    //    QString IP;

    //    本地段存储的好友列表和群组列表
    //    QList<UserInfo> my_friend_list;
    //    QList<GroupInfo> my_group_list;

protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
    void closeEvent(QCloseEvent *event) override
    {
        emit interfaceClosed(); // 发出自定义信号
        QWidget::closeEvent(event);
    }
};

#endif // INTERFACE_H
