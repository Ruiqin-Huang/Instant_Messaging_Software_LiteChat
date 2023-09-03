#include"clientcontroller.h"
#include "Network/ResAssist/res.h"

#include <QFile>
#include <QFileInfo>

//换用户名
void ClientController::requestModifyUserName(QString newUserName) {
	UserInfo OldUserInfo = getMyInfo();
	GetSocket()->sendMessage(new Msg(MsgType::MODIFY_USERNAME,
        UserInfo(OldUserInfo.getID(), newUserName, OldUserInfo.getPwd(),
            OldUserInfo.getSignal()).toQByteArray()));
}
