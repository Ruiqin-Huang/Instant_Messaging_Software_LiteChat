#include "chat_msg_handler.h"
#include "Utilities/utilities.h"
#include "Controller/clientcontroller.h"
#include "QDebug"
ChatMsgHandler::ChatMsgHandler(QObject *parent) : MsgHandler(parent)
{

}

void ChatMsgHandler::parse(Msg & msg){

    Log::GetLogObj()->writeLog("[ClientMsgHandler] received msg");
    ChatMessage chat_msg = ChatMessage::fromQByteArray(msg.getContent());
    QList<ChatMessage> * list = ClientController::GetClientInstance()->getChatMsg(chat_msg.getSender());
    if(list) {//只有是好友的时候才收消息
        list->append(chat_msg);
        if(msg.getType() == MsgType::MSG_PLAIN_TEXT){
            emit readyShowChatMsg(chat_msg);
            return;
        }
        if(msg.getType() == MsgType::MSG_FILE){
            qDebug()<<"MsgType::MSG_FILE";
            emit readyShowChatFile(chat_msg);
            return;
        }

    }else{
        Log::GetLogObj()->writeLog("[ClientMsgHandler] received msg but the sender is not your friend.");
    }
}
