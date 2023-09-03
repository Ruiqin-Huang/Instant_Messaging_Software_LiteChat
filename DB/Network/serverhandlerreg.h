#ifndef SERVERHANDLERREG_H
#define SERVERHANDLERREG_H

#include <QObject>
#include <QMap>

#include "DataModel/msgtype.h"
#include "Network/Handlers/msghandler.h"

class ServerHandlerReg:public QObject
{
    Q_OBJECT
public:
    ServerHandlerReg(QObject * parent = nullptr);

    static ServerHandlerReg * GetRegObj();
    MsgHandler * getHandler(MsgType);
protected:
    void initialize();
private:
    void regHandler(MsgType type, MsgHandler * msg_handler);

    static QMap<MsgType, MsgHandler *> handler_regs;
    static ServerHandlerReg * regObj;
};

#endif // SERVERHANDLERREG_H
