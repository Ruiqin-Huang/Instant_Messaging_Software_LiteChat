#pragma once
#include"msghandler.h"
#include "DataModel/chatmessage.h"

class OffLineMsgHandler :public MsgHandler {
    Q_OBJECT
public:
    explicit OffLineMsgHandler(QObject* parent = nullptr);
    void sendOffLineMsg(MsgType type,ChatMessage chatMsg,TcpClientSocket* socket);
    virtual void parse(Msg& msg, TcpClientSocket* socket = nullptr);
};
