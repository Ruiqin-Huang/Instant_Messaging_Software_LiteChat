#include"grouplist_handler.h"
#include"Utilities/qbytearraylistutility.h"
#include"Controller/clientcontroller.h"
#include"Utilities/log.h"

GroupListHandler::GroupListHandler(QObject *parent) : MsgHandler(parent){}


void GroupListHandler::parse(Msg& msg) {
    QByteArray content = msg.getContent();
    QList<QByteArray> bytelist = QByteArrayListUtility::fromQByteArray(content);

    auto groupList = ClientController::GetClientInstance()->getGroupList();
    auto chatMsgMap = ClientController::GetClientInstance()->getChatMsgMapGroup();
    groupList->clear();
    for (auto x : bytelist) {
        groupList->append(GroupInfo::fromQByteArray(x));
    }
    chatMsgMap->clear();
    for (auto x : *groupList) {
        Log::GetLogObj()->writeLog("["+QString::number(x.getID())+"]");
        (*chatMsgMap)[x.getID()] = new QList<ChatMessage>;
    }
    emit sigGroupListGotcha(ClientController::GetClientInstance()->getMyInfo());
}
