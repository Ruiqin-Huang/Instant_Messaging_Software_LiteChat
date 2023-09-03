#ifndef ADDFRIENDRESULTHANDLER_H
#define ADDFRIENDRESULTHANDLER_H

#include "msghandler.h"
#include "DataModel/msg.h"

class AddFriendResultHandler : public MsgHandler
{
    Q_OBJECT
public:
    AddFriendResultHandler(QObject* parent = nullptr);

    virtual void parse(Msg& msg, TcpClientSocket* socket = nullptr);
};

#endif // ADDFRIENDRESULTHANDLER_H
