#include "Controller/clientcontroller.h"

#include "Network/ResAssist/res.h"

#include <QFile>
#include <QFileInfo>
#include <QScreen>
#include <QGuiApplication>
#include <QDir>
#include "Utilities/utilities.h"
#include <QPixmap>


//请求发送文件
bool ClientController::requestSendFile(quint32 receiver, QString fileAbsolutePath){
    //如果文件存在
    if(LocalCache::GetInstance()->isExistFileByAbsolutePath(fileAbsolutePath)){
        //作为资源上传的部分(会保存到本地)
        FileMeta file_info = FileMeta( getMyInfo(), QFileInfo(QFile(fileAbsolutePath)).fileName() );
        Uploader::GetInstance()->uploadFile(file_info, fileAbsolutePath, receiver);
        return true;
    }
    return false;
}

//请求下载文件
void ClientController::requestFileByRawMsg(ChatMessage msg){
    //获得要请求的文件的元信息
    FileMeta info_to_request = FileMeta::fromQByteArray(msg.getContent().toUtf8());
    Log::GetLogObj()->writeLog("[requestFileByRawMsg] 正在请求文件" + info_to_request.getBaseName());
    Downloader::GetInstance()->requestFileResource(info_to_request);
}
