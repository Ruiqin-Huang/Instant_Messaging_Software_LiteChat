#include"group_msg_handler.h"
#include"DataModel/chatmessage.h"
#include"Utilities/log.h"
#include"Controller/clientcontroller.h"
#include"QDebug"

GroupMsgHandler::GroupMsgHandler(QObject* parent) : MsgHandler(parent) {

}

void GroupMsgHandler::parse(Msg& msg) {
    qDebug()<<"[GroupMsgHandler] Tring Parse";
	Log::GetLogObj()->writeLog("[GroupMsgHandler] Tring Parse");
	if (msg.getType() != MsgType::GROUP_MSG_PLAIN_TEXT) {
		Log::GetLogObj()->writeLog("[GroupMsgHandler] MsgType Error");
		return;
	}
	ChatMessage chatmsg = ChatMessage::fromQByteArray(msg.getContent());
	ClientController* cc = ClientController::GetClientInstance();
    QMap<quint32, QList<ChatMessage>*>* chatMsgMapGroup = cc->getChatMsgMapGroup();
    QList<ChatMessage>* list = (*chatMsgMapGroup)[chatmsg.getReceiver()];
	quint32 senderId = chatmsg.getSender();
	QMap<quint32, UserInfo>& idtouserinfomap = cc->getIdToUserInfoMap();
	if (!idtouserinfomap.contains(senderId)) {
		//request UserInfo by senderId
		cc->requestUserInfoByID(senderId);
	}
    ChatMessage groupchatmsg = chatmsg;
	list->append(groupchatmsg);
    qDebug()<<"emit groupMsgReceiveSuccess";
	emit groupMsgReceiveSuccess(groupchatmsg);
}
