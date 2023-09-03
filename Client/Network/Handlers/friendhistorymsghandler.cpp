#include "friendhistorymsghandler.h"
#include"Utilities/qbytearraylistutility.h"
#include"Controller/clientcontroller.h"
#include <QDebug>

FriendHistoryMsgHandler::FriendHistoryMsgHandler(QObject *parent) : MsgHandler(parent)
{

}

void FriendHistoryMsgHandler::parse(Msg& msg) {
    qDebug()<<"[FriendHistoryMsgHandler] start";
    QByteArray content = msg.getContent();
    QList<QByteArray> bytelist = QByteArrayListUtility::fromQByteArray(content);
    if(bytelist.size()==0){
        qDebug()<<"[FriendHistoryMsgHandler] noMsg";
        return;
    }
    quint32 friendId = 0;
    ChatMessage firstMsg = ChatMessage::fromQByteArray(bytelist.at(0));
    if(firstMsg.getReceiver()==ClientController::GetClientInstance()->getMyInfo().getID()){
        friendId = firstMsg.getSender();
    }else{
        friendId = firstMsg.getReceiver();
    }
    QList<ChatMessage> * list = ClientController::GetClientInstance()->getChatMsg(friendId);
    list->clear();
    for (auto x : bytelist) {
        list->append(ChatMessage::fromQByteArray(x));
    }
    qDebug()<<"[FriendHistoryMsgHandler] finish";
    emit readyFriendHistoryMsg();
}
