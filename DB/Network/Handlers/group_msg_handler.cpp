#include"group_msg_handler.h"
#include"DataModel/chatmessage.h"
#include"db_utils.h"
#include"servercontroller.h"
#include"Utilities/log.h"

GroupMsgHandler::GroupMsgHandler(QObject* parent) :MsgHandler(parent) {

}

void GroupMsgHandler::parse(Msg& msg, TcpClientSocket* socket) {
	Log::GetLogObj()->writeLog("[GroupMsgHandler] Trying Parse");
    ChatMessage chatmsg = ChatMessage::fromQByteArray(msg.getContent());
    quint32 senderId = chatmsg.getSender();
	quint32 groupId = chatmsg.getReceiver();
	DataDB* db = DataDB::GetInstance();
	QList<quint32> list = db->selectAllGroupMember(groupId);

    db->addMsg(senderId,groupId,chatmsg.getContent(),chatmsg.getDT());

	for (auto& member : list) {
        Log::GetLogObj()->writeLog("[GroupMsgHandler] "+ QString::number(member));
        if (member == senderId) continue;
        if (ServerController::GetClient(member) == nullptr){
            continue;
        }
		ServerController::GetClient(member)->sendMessage(&msg);
		Log::GetLogObj()->writeLog("[GroupMsgHandler] "+ QString::number(member)+" groupMsg sent");
	}
	Log::GetLogObj()->writeLog("[GroupMsgHandler] Parse down");
}
