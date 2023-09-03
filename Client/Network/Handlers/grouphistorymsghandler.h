#ifndef GROUPHISTORYMSGHANDLER_H
#define GROUPHISTORYMSGHANDLER_H

#include <QObject>
#include "msghandler.h"

class GroupHistoryMsgHandler : public MsgHandler
{
    Q_OBJECT
public:
    explicit GroupHistoryMsgHandler(QObject *parent = nullptr);

    void parse(Msg & );

signals:
    void readyGroupHistoryMsg();
};
#endif // FRIEND_REQUEST_RESULT_HANDLER_H
