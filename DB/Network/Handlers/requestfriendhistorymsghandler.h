#ifndef REQUESTFRIENDHISTORYMSGHANDLER_H
#define REQUESTFRIENDHISTORYMSGHANDLER_H
#include "msghandler.h"

class RequestFriendHistoryMsgHandler :public MsgHandler
{
    Q_OBJECT
public:
    explicit RequestFriendHistoryMsgHandler(QObject* parent = nullptr);
    virtual void parse(Msg& msg, TcpClientSocket* socket = nullptr);
};

#endif // REQUESTFRIENDHISTORYMSGHANDLER_H
