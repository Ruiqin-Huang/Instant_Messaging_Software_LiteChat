#include "requestfriendhistorymsghandler.h"
#include"Utilities/log.h"
#include"db_utils.h"
#include"Utilities/qbytearraylistutility.h"
#include"DataModel/chatmessage.h"

RequestFriendHistoryMsgHandler::RequestFriendHistoryMsgHandler(QObject* parent) : MsgHandler(parent)
{

}

void RequestFriendHistoryMsgHandler::parse(Msg& msg, TcpClientSocket* socket) {
    Log::GetLogObj()->writeLog("[RequestFriendHistoryMsgHandler] Trying Parse");
    if (msg.getType() != MsgType::REQUEST_FRIEND_HISTORY_MSG) {
        Log::GetLogObj()->writeLog("[RequestFriendHistoryMsgHandler] Request all friend list Msg Error.");
        return;
    }
    ChatMessage chatMsg = ChatMessage::fromQByteArray(msg.getContent());
    Log::GetLogObj()->writeLog("[RequestFriendHistoryMsgHandler] "+QString::number(chatMsg.getReceiver())+":"+QString::number(chatMsg.getSender()));

    DataDB* db = DataDB::GetInstance();
    QList<QByteArray> list = db->selectFriendHistoryMsg(chatMsg);
    Log::GetLogObj()->writeLog("[RequestFriendHistoryMsgHandler] Msg size="+QString::number(list.size()));
    QByteArray content = QByteArrayListUtility::toQByteArray(list);
    socket->sendMessage(new Msg(MsgType::FRIEND_HISTORY_MSG, content));
    Log::GetLogObj()->writeLog("[RequestFriendHistoryMsgHandler] ParseDone");
}
