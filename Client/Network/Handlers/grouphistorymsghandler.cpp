#include "grouphistorymsghandler.h"
#include"Utilities/qbytearraylistutility.h"
#include"Controller/clientcontroller.h"
#include <QDebug>

GroupHistoryMsgHandler::GroupHistoryMsgHandler(QObject *parent) : MsgHandler(parent)
{

}

void GroupHistoryMsgHandler::parse(Msg& msg) {
    qDebug()<<"[GroupHistoryMsgHandler] start";
    QByteArray content = msg.getContent();
    QList<QByteArray> bytelist = QByteArrayListUtility::fromQByteArray(content);
    if(bytelist.size()==0){
        qDebug()<<"[GroupHistoryMsgHandler] list size=0";
        return;
    }
    quint32 groupId = ChatMessage::fromQByteArray(bytelist.at(0)).getReceiver();

    QList<ChatMessage> * list = ClientController::GetClientInstance()->getGroupMsg(groupId);
    list->clear();

    qDebug()<<"[GroupHistoryMsgHandler] list size"+QString::number(bytelist.size());
    for (auto x : bytelist) {
        list->append(ChatMessage::fromQByteArray(x));
    }
    qDebug()<<"[GroupHistoryMsgHandler] finish";
    emit readyGroupHistoryMsg();
}
