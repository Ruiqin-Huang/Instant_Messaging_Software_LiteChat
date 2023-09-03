#include"friendlist_handler.h"
#include"Utilities/qbytearraylistutility.h"
#include"Controller/clientcontroller.h"
#include <QDebug>

FriendListHandler::FriendListHandler(QObject *parent) : MsgHandler(parent)
{
}


void FriendListHandler::parse(Msg& msg) {
	QByteArray content = msg.getContent();
	QList<QByteArray> bytelist = QByteArrayListUtility::fromQByteArray(content);

    auto friendList = ClientController::GetClientInstance()->getFriendList();
    auto chatMsgMap = ClientController::GetClientInstance()->getChatMsgMap();
    friendList->clear();
	for (auto x : bytelist) {
        friendList->append(UserInfo::fromQByteArray(x));
	}
    chatMsgMap->clear();
    for (auto x : *friendList) {
        (*chatMsgMap)[x.getID()] = new QList<ChatMessage>;
    }
    qDebug()<<"emit sigFriendListGotcha";
    emit sigFriendListGotcha(ClientController::GetClientInstance()->getMyInfo());
}
