#include <QtDebug>
#include <QString>
#include "db_utils.h"
#include "Network/Handlers/LoginHandler.h"

#include "servercontroller.h"

#include "Utilities/log.h"

LoginHandler::LoginHandler(QObject *parent) : MsgHandler(parent)
{

}
void LoginHandler::parse(Msg& msg, TcpClientSocket* socket){
    Log::GetLogObj()->writeLog("[LoginHandler] Trying Parse");
    if (msg.getType() != MsgType::REQUEST_LOGIN) {
        Log::GetLogObj()->writeLog("Login msg error");
        return;
    }

    //userinfo中只有id和password
    UserInfo userinfo = UserInfo::fromQByteArray(msg.getContent());

	DataDB* db = DataDB::GetInstance();

    bool isLoginSuccess = db->selectUserByIdAndPwd(userinfo.getID(), userinfo.getPwd());
	MsgType type = isLoginSuccess ? MsgType::LOGIN_SUCCESS : MsgType::LOGIN_ERROR;

    if(isLoginSuccess){
        //如果登录成功了再将某客户端对应的socket添加到Server中.
        ServerController::getServerInstance()->addClient(userinfo.getID(), socket);
        Log::GetLogObj()->writeLog("[LoginHandler] User " + QString::number(userinfo.getID()) + " Successfully Logged in!");
        //还要返回用户的其他信息
        UserInfo all_userinfo = db->selectUserById(userinfo.getID());
        userinfo = UserInfo(all_userinfo.getID(),all_userinfo.getName(),userinfo.getPwd(),all_userinfo.getSignal());
    }else{
        Log::GetLogObj()->writeLog("[LoginHandler] User " + QString::number(userinfo.getID()) + " Logged Failed!");
    }
    socket->sendMessage(new Msg(type,userinfo.toQByteArray()));
    Log::GetLogObj()->writeLog("[LoginHandler] Sent");
}
