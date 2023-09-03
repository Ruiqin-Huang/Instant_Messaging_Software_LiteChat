
#include "RegisterHandler.h"
#include "db_utils.h"
#include <QtDebug>
#include <QString>

#include "Utilities/log.h"

RegisterHandler::RegisterHandler(QObject *parent) : MsgHandler(parent)
{

}
void RegisterHandler::parse(Msg& msg, TcpClientSocket* socket) {
    Log::GetLogObj()->writeLog("[RegisterHandler] Trying Parse");
    if (msg.getType() != MsgType::REQUEST_REGISTER) {
        Log::GetLogObj()->writeLog("[Register Handler] Register Msg Error.");
		return;
	}
    //把接收到的Msg转换成UserInfo对象
    UserInfo tmp = UserInfo::fromQByteArray(msg.getContent());
    //注册
    DataDB* db = DataDB::GetInstance();
    if(db->registerUser(tmp)){
        //把自己加为自己的好友
        db->addFriendship(tmp.getID(), tmp.getID());
        //重新作为Msg发送
        socket->sendMessage(new Msg(MsgType::REGISTER_SUCCESS, tmp.toQByteArray()));
        Log::GetLogObj()->writeLog("[Register Handler] Register REGISTER_SUCCESS");
    }else{
        socket->sendMessage(new Msg(MsgType::REGISTER_ERROR, ""));
        Log::GetLogObj()->writeLog("[Register Handler] Register Failed");
    }
}
