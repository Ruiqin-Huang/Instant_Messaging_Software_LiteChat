#include "Network/Handlers/RegisterHandler.h"
#include "Network/Handlers/LoginHandler.h"
#include "Network/Handlers/chatmsghandler.h"
#include "Network/Handlers/FriendshipHandler.h"
#include "Network/Handlers/requestallfriendlisthandler.h"
#include "Network/Handlers/addfriendresulthandler.h"
#include "Network/Handlers/requestUserInfoHandler.h"
#include "Network/Handlers/offlinemsghandler.h"
#include "Network/Handlers/registerGroupHandler.h"
#include "Network/Handlers/modifyUsernameHandler.h"
#include "Network/Handlers/addGroupHandler.h"
#include "Network/Handlers/requestAllGroupListHandler.h"
#include "Network/Handlers/group_msg_handler.h"
#include "Network/Handlers/requestgrouphistorymsghandler.h"
#include "Network/Handlers/requestfriendhistorymsghandler.h"
#include "serverhandlerreg.h"

QMap<MsgType, MsgHandler * > ServerHandlerReg::handler_regs;
ServerHandlerReg * ServerHandlerReg::regObj = nullptr;

ServerHandlerReg::ServerHandlerReg(QObject * parent):
    QObject(parent)
{
    initialize();
}

ServerHandlerReg * ServerHandlerReg::GetRegObj(){
    if(!regObj){
        regObj = new ServerHandlerReg();
    }
    return regObj;
}

MsgHandler * ServerHandlerReg::getHandler(MsgType type){
//    qDebug() << "Fetching Handler Type:" << QString::number(quint16(type));
    if(handler_regs.contains(type)){
        return handler_regs[type];
    }else{
        qDebug() << "未找到对应类型的handler! 请检查是否忘记注册消息类型";
    }
    return nullptr;
}

void ServerHandlerReg::regHandler(MsgType type, MsgHandler *msg_handler){
    handler_regs[type] = msg_handler;
}

void ServerHandlerReg::initialize(){
    MsgHandler * msghandler = new ChatMsgHandler(this);
    regHandler(MsgType::MSG_PLAIN_TEXT,msghandler);
    regHandler(MsgType::MSG_FILE, msghandler);
    regHandler(MsgType::MSG_PIC, msghandler);

    MsgHandler * loginhandler = new LoginHandler(this);
    regHandler(MsgType::REQUEST_LOGIN, loginhandler );

    MsgHandler * reghandler = new RegisterHandler(this);
    regHandler(MsgType::REQUEST_REGISTER, reghandler);

    MsgHandler * friendshiphandler = new FriendshipHandler(this);
    regHandler(MsgType::REQUEST_ADD_FRIEND, friendshiphandler);

    MsgHandler * requestallfriendlisthandler = new RequestAllFriendListHandler(this);
    regHandler(MsgType::REQUEST_ALL_FRIEND_LIST,requestallfriendlisthandler);

    MsgHandler * addfriendresulthandler = new AddFriendResultHandler(this);
    regHandler(MsgType::REQUEST_ADD_FRIEND_AGREED, addfriendresulthandler);
    regHandler(MsgType::REQUEST_ADD_FRIEND_DECLINED, addfriendresulthandler);

    MsgHandler * requestUserInfoHandler = new RequsetUserInfoHandler(this);
    regHandler(MsgType::REQUEST_USERINFO, requestUserInfoHandler);

    MsgHandler* offLineMsgHandler = new OffLineMsgHandler(this);
    regHandler(MsgType::REQUEST_OFFLINE_MSG, offLineMsgHandler);

    MsgHandler * registerGroupHandler = new RegisterGroupHandler(this);
    regHandler(MsgType::REQUEST_REGISTER_GROUP,registerGroupHandler);

    MsgHandler * modifyUsernameHandler = new ModifyUsernameHandler(this);
    regHandler(MsgType::MODIFY_USERNAME, modifyUsernameHandler);

    MsgHandler * addGroupHandler = new AddGroupHandler(this);
    regHandler(MsgType::REQUEST_ADD_GROUP, addGroupHandler);

    MsgHandler * requestAllGroupListHandler = new RequestAllGroupListHandler(this);
    regHandler(MsgType::REQUEST_ALL_GROUP_LIST, requestAllGroupListHandler);

    MsgHandler* groupMsgHandler = new GroupMsgHandler(this);
    regHandler(MsgType::GROUP_MSG_PLAIN_TEXT, groupMsgHandler);

    MsgHandler*  requestFriendHistoryMsgHandler = new RequestFriendHistoryMsgHandler(this);
    regHandler(MsgType::REQUEST_FRIEND_HISTORY_MSG, requestFriendHistoryMsgHandler);

    MsgHandler*  requestGroupHistoryMsgHandler = new RequestGroupHistoryMsgHandler(this);
    regHandler(MsgType::REQUEST_GROUP_HISTORY_MSG, requestGroupHistoryMsgHandler);

}
