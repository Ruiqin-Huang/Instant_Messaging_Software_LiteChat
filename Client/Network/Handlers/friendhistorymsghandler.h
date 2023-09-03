#ifndef FRIENDHISTORYMSGHANDLER_H
#define FRIENDHISTORYMSGHANDLER_H

#include <QObject>
#include "msghandler.h"

class FriendHistoryMsgHandler : public MsgHandler
{
    Q_OBJECT
public:
    explicit FriendHistoryMsgHandler(QObject *parent = nullptr);

    void parse(Msg & );

signals:
    void readyFriendHistoryMsg();
};
#endif // FRIEND_REQUEST_RESULT_HANDLER_H
