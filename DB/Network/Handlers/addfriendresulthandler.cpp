#include "addfriendresulthandler.h"

#include "DataModel/msgtype.h"
#include "DataModel/chatmessage.h"
#include "db_utils.h"
#include "servercontroller.h"
#include "Utilities/log.h"

AddFriendResultHandler::AddFriendResultHandler(QObject* parent) : MsgHandler(parent)
{

}

void AddFriendResultHandler::parse(Msg &msg, TcpClientSocket *socket)
{
    Log::GetLogObj()->writeLog("[AddFriendResult Handler] Trying Parse");
    MsgType addFriendResultType = msg.getType();
    if(addFriendResultType != MsgType::REQUEST_ADD_FRIEND_AGREED
            && addFriendResultType != MsgType::REQUEST_ADD_FRIEND_DECLINED){
        Log::GetLogObj()->writeLog("[AddFriendResult Handler] AddFriendResult Error.");
        return;
    }

    ChatMessage nowMsg = ChatMessage::fromQByteArray(msg.getContent());
    TcpClientSocket * receiverSocket = ServerController::GetClient(nowMsg.getReceiver());
    DataDB *db = DataDB::GetInstance();

    if(addFriendResultType == MsgType::REQUEST_ADD_FRIEND_AGREED){
        db->addFriendship(nowMsg.getSender(), nowMsg.getReceiver());
        db->addFriendship(nowMsg.getReceiver(),nowMsg.getSender());
    }
    //对方不在线则存入数据库
    if(receiverSocket == nullptr){
        Log::GetLogObj()->writeLog("[AddFriendResult Handler] FRIEND_OFFLINE");
        db->addOfflineMsg(nowMsg,addFriendResultType);
        return;
    }
    UserInfo info = db->selectUserById(nowMsg.getSender());
    receiverSocket->sendMessage(new Msg(addFriendResultType, info.toQByteArray()));
}
