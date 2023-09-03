#include "offlinemsghandler.h"
#include <QString>
#include "Utilities/log.h"
#include "servercontroller.h"
#include "db_utils.h"

OffLineMsgHandler::OffLineMsgHandler(QObject* parent) :MsgHandler(parent) {

}

void OffLineMsgHandler::parse(Msg& msg, TcpClientSocket* socket) {
    Log::GetLogObj()->writeLog("[OfflineMsg Handler] Trying Parse");
    if (msg.getType() != MsgType::REQUEST_OFFLINE_MSG) {
        Log::GetLogObj()->writeLog("[OfflineMsg Handler] Register Msg Error.");
        return;
    }
    quint32 id = msg.getContent().toUInt();
    DataDB* db = DataDB::GetInstance();

//    QList<ChatMessage> list = db->getOfflineMsg(id);
//    if (!list.isEmpty()) {
//        for (auto& x : list) {
//            Log::GetLogObj()->writeLog("["+x.getContent()+"]");
//			socket->sendMessage(new Msg(MsgType::MSG_PLAIN_TEXT, x.toQByteArray()));
//        }
//        db->dropOfflineMsg(id);
//    }
//    else Log::GetLogObj()->writeLog("[OfflineMsg Handler] NO_OFFLINE_MSG");

    std::tuple<QList<MsgType>, QList<ChatMessage>> offLineMsg = db->getOfflineMsg(id);
    QList<MsgType> type_list = std::get<0>(offLineMsg);
    QList<ChatMessage> chatMsg_list = std::get<1>(offLineMsg);

    for(int i=0; i<type_list.size(); ++i){
        ChatMessage msg = chatMsg_list.at(i);
        Log::GetLogObj()->writeLog("["+msg.getContent()+"]");
        if(msg.getSender()<1000000000){
            sendOffLineMsg(type_list.at(i), msg, socket);
            continue;
        }
        Log::GetLogObj()->writeLog("offline msg of a group");
        // 发送者为群
        int colonIndex = msg.getContent().indexOf(':');
        if (colonIndex != -1) { // 确保找到了冒号
            // 提取冒号前面的原发送id
            QString beforeColon = msg.getContent().left(colonIndex);
            bool conversionOK;
            quint32 senderId = beforeColon.toUInt(&conversionOK);
            if (conversionOK) {
                qDebug() << "Conversion to quint32 failed.";
            }
            // 提取冒号后面的原内容
            QString afterColon = msg.getContent().mid(colonIndex + 1);
            ChatMessage newMsg = ChatMessage(senderId,msg.getSender(),afterColon);

            ServerController::GetClient(id)->sendMessage(new Msg(type_list.at(i), newMsg.toQByteArray()));

//            socket->sendMessage(new Msg(type_list.at(i), newMsg.toQByteArray()));
        } else {
            qDebug() << "Colon not found in the input string.";
        }
    }
    db->dropOfflineMsg(id);
    Log::GetLogObj()->writeLog("[OfflineMsg Handler] ParseDone");
}

void OffLineMsgHandler::sendOffLineMsg(MsgType type,ChatMessage chatMsg,TcpClientSocket* socket){
    DataDB *db = DataDB::GetInstance();
    if(type == MsgType::REQUEST_ADD_FRIEND_AGREED
        || type == MsgType::REQUEST_ADD_FRIEND_DECLINED){
        UserInfo info = db->selectUserById(chatMsg.getSender());
        socket->sendMessage(new Msg(type, info.toQByteArray()));
    }else if(type == MsgType::REQUEST_ADD_FRIEND){
        UserInfo user = db->selectUserById(chatMsg.getSender());
        socket -> sendMessage(new Msg(type,user.toQByteArray()));
    }else{
        socket->sendMessage(new Msg(type,chatMsg.toQByteArray()));
    }
}
