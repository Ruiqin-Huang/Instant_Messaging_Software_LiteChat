#include "requestgrouphistorymsghandler.h"
#include"Utilities/log.h"
#include"db_utils.h"
#include"Utilities/qbytearraylistutility.h"

RequestGroupHistoryMsgHandler::RequestGroupHistoryMsgHandler(QObject* parent) : MsgHandler(parent)
{

}

void RequestGroupHistoryMsgHandler::parse(Msg& msg, TcpClientSocket* socket) {
    Log::GetLogObj()->writeLog("[RequestGroupHistoryMsgHandler] Trying Parse");
    if (msg.getType() != MsgType::REQUEST_GROUP_HISTORY_MSG) {
        Log::GetLogObj()->writeLog("[RequestGroupHistoryMsgHandler] Request all friend list Msg Error.");
        return;
    }
    quint32 id = msg.getContent().toUInt();
    Log::GetLogObj()->writeLog("[RequestGroupHistoryMsgHandler] "+QString::number(id));
    DataDB* db = DataDB::GetInstance();
    QList<QByteArray> list = db->selectGroupHistoryMsg(id);
    Log::GetLogObj()->writeLog("[RequestGroupHistoryMsgHandler] Msg size="+QString::number(list.size()));
    QByteArray content = QByteArrayListUtility::toQByteArray(list);
    socket->sendMessage(new Msg(MsgType::GROUP_HISTORY_MSG, content));
    Log::GetLogObj()->writeLog("[RequestGroupHistoryMsgHandler] ParseDone");
}
