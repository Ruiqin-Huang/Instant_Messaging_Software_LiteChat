#ifndef FILEMETA_H
#define FILEMETA_H

#include <QObject>

#include "userinfo.h"
class FileMeta
{
public:
    //在生成文件时指定user
    explicit FileMeta();
    explicit FileMeta(UserInfo user, QString original_name = "");

    QString toQString();
    static FileMeta fromQByteArray(QByteArray msg_content);

    QString getUniqueName(){ return unique_name;};
    QString getBaseName(){return original_name;};

private:
    QString unique_name;
    QString original_name;

};

#endif // FILEMETA_H
