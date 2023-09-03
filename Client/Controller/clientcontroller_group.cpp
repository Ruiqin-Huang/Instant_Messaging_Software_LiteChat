#include "clientcontroller.h"

#include "DataModel/msg.h"
#include "Utilities/log.h"
#include <Qdebug>

QList<GroupInfo> * ClientController::getGroupList(){
    return &groupList;
}
void ClientController::requestGroupList(UserInfo info){
    GetSocket()->sendMessage(new Msg(MsgType::REQUEST_ALL_GROUP_LIST, QString::number(info.getID()).toUtf8()));
    Log::GetLogObj()->writeLog("[SendGroupListRequest] Sent.");
}

void ClientController::dynamicAppendGroup(GroupInfo _group) {
    //将群聊添加到群聊列表中
    groupList.append(_group);
    //为群聊新建消息List
    chatMsgMapGroup[_group.getID()] = new QList<ChatMessage>;
}

void ClientController::registerGroup(QString groupName) {//发送注册群聊的请求
	UserInfo tmp(getMyInfo().getID(), groupName);
	GetSocket()->sendMessage(new Msg(MsgType::REQUEST_REGISTER_GROUP, tmp.toQByteArray()));
}

void ClientController::requestAddGroup(quint32 id) {
	ChatMessage tmp(getMyInfo().getID(), id, "");
	GetSocket()->sendMessage(new Msg(MsgType::REQUEST_ADD_GROUP, tmp.toQByteArray()));
}

void ClientController::sendGroupChatMessage(quint32 groupId, QString content) {
	ChatMessage chatmsg = ChatMessage(getMyInfo().getID(), groupId, content);
    qDebug()<<"[GroupChatMessage 正在发送] " + chatmsg.getContent();
	GetSocket()->sendMessage(
		new Msg(MsgType::GROUP_MSG_PLAIN_TEXT, chatmsg.toQByteArray())
	);
}
