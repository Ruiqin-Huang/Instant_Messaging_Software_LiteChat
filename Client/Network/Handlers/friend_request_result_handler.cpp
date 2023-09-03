#include "friend_request_result_handler.h"
#include "DataModel/msgtype.h"
#include "Utilities/log.h"

#include "Controller/clientcontroller.h"

FriendRequestResultHandler::FriendRequestResultHandler(QObject *parent) : MsgHandler(parent)
{

}


void FriendRequestResultHandler::parse(Msg & msg){
    Log::GetLogObj()->writeLog("[FriendRequestResultHandler] 正在返回好友请求结果");
    UserInfo u = UserInfo::fromQByteArray(msg.getContent());
    if(msg.getType() == MsgType::REQUEST_ADD_FRIEND_AGREED){
        ClientController::GetClientInstance()->dynamicAppendFriend(u);
        Log::GetLogObj()->writeLog(QString::number(u.getID()) + "现在是你的好友了.");
        //这样只需要缓存头像就行了.
        emit sigAddFriendSuccessful(u);
        emit refreshFriendList();
    }
    else{
        emit sigAddFriendFailed(msg.getType(),u);
    }

}
