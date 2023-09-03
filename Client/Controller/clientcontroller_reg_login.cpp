#include "clientcontroller.h"
#include "Utilities/safeutilities.h"
#include "Network/handlerreg.h"
#include "Utilities/utilities.h"
#include "Network/handlers.h"

UserInfo& ClientController::getMyInfo(){
    LoginHandler * tmp = (LoginHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::LOGIN_SUCCESS);
    return tmp->getMyInfo();
}
//登录
void ClientController::requestLogin(quint32 id, QString password){

    password = SafeUtilities::GetPasswordHash(password);
    //密码做一次哈希

    UserInfo tmp(id, "", password, "");
    Log::GetLogObj()->writeLog(StdDatetimeUtilities::GetDateTime()+QString::number(id)+":"+password);

    ConnectToServer();

    GetSocket()->sendMessage(new Msg(MsgType::REQUEST_LOGIN,tmp.toQByteArray()));
}

//注册
void ClientController::requestRegister(quint32 id, QString username, QString password, QString signature){

    password = SafeUtilities::GetPasswordHash(password);

    UserInfo tmp = UserInfo(id, username, password, signature);

    ConnectToServer();

    GetSocket()->sendMessage(new Msg(MsgType::REQUEST_REGISTER,tmp.toQByteArray()));
}


