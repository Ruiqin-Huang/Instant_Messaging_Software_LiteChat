#ifndef REQUESTGROUPHISTORYMSGHANDLER_H
#define REQUESTGROUPHISTORYMSGHANDLER_H
#include "msghandler.h"

class RequestGroupHistoryMsgHandler :public MsgHandler
{
    Q_OBJECT
public:
    explicit RequestGroupHistoryMsgHandler(QObject* parent = nullptr);
    virtual void parse(Msg& msg, TcpClientSocket* socket = nullptr);
};

#endif // REQUESTGROUPHISTORYMSGHANDLER_H
