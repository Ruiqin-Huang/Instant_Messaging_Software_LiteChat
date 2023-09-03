#ifndef LOCALCACHE_H
#define LOCALCACHE_H

#include <QObject>
#include "DataModel/filemeta.h"
#include "DataModel/msgtype.h"

class LocalCache : public QObject
{
    Q_OBJECT
public:
    explicit LocalCache(QObject *parent = nullptr);

    static LocalCache * GetInstance();

    bool isExistFileByAbsolutePath(QString absolutePath);
    bool isExistFile(QString file_unique_name);
    bool isExistFile(FileMeta info);
    bool isExistImg(QString img_unique_name);

    QString getFileFullPath(QString file_unique_name);
    QString getImgFullPath(QString img_unique_name);

    void broadcastReceivedRes(MsgType type, FileMeta meta);

signals:
    void alreadyReceivedFile(FileMeta);
    void alreadyReceivedImg(QString Path, FileMeta info);
private:
    static LocalCache * obj;
};

#endif // LOCALCACHE_H
