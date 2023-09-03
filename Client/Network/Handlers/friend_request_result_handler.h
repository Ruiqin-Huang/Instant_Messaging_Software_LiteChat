#ifndef FRIEND_REQUEST_RESULT_HANDLER_H
#define FRIEND_REQUEST_RESULT_HANDLER_H
#include <QObject>

#include "msghandler.h"
#include "DataModel/userinfo.h"

class FriendRequestResultHandler : public MsgHandler
{
    Q_OBJECT
public:
    explicit FriendRequestResultHandler(QObject *parent = nullptr);

    void parse(Msg & );

signals:
    void sigAddFriendFailed(MsgType type,UserInfo sender);
    void sigAddFriendSuccessful(UserInfo sender);
    void refreshFriendList();

};
#endif // FRIEND_REQUEST_RESULT_HANDLER_H
