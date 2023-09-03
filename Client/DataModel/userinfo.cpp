#include "userinfo.h"

#include <QtNetwork>

UserInfo::UserInfo(quint32 id,
            QString name,
            QString pwd,
            QString signal
        ): id(id), name(name), pwd(pwd), signal(signal)
{

}

// | quint32 id | quint32 name size | name | quint32 pwd size | pwd |

quint32 UserInfo::getID() const{
    return id;
}

QString UserInfo::getName() const{
    return name;
}

QString UserInfo::getPwd() const{
    return pwd;
}

QString UserInfo::getSignal() const{
    return signal;
}


UserInfo UserInfo::fromQByteArray(QByteArray chat_msg){

    QDataStream in(chat_msg);
    in.setVersion(QDataStream::Qt_5_12);

    UserInfo tmp;
    //write id
    in >> tmp.id;

    //write name
    quint32 size;
    in >> size;
    QByteArray tmpName;
    tmpName.resize(size);
    in >> tmpName;
    tmp.name = QString(tmpName);

    //write pwd
    in >> size;
    QByteArray tmpPwd;
    tmpPwd.resize(size);
    in >> tmpPwd;
    tmp.pwd = QString(tmpPwd);

    //write signal
    in >> size;
    QByteArray tmpSignal;
    tmpSignal.resize(size);
    in >> tmpSignal;
    tmp.signal = QString(tmpSignal);

    return tmp;
}

// | quint32 id | quint32 name size | name | quint32 pwd size | pwd | quint32 signal size | signal |

QByteArray UserInfo::toQByteArray(){

    QByteArray block;

    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_12);

    //输出id
    out << quint32(id);

    //输出name
    out << quint32(0);//预留给name的大小
    out << name.toUtf8();
    out.device()->seek(4);
    out << (quint32)(block.size()-sizeof(quint32)*2);
    out.device()->seek(block.size());

    //输出pwd
    int size_index = block.size();
    out << quint32(0);
    out << pwd.toUtf8();

    out.device()->seek(size_index);
    out << (quint32)(block.size() - size_index - sizeof(quint32));
    out.device()->seek(block.size());

    //输出signal
    size_index = block.size();
    out << quint32(0);
    out << signal.toUtf8();

    out.device()->seek(size_index);
    out << (quint32)(block.size() - size_index - sizeof(quint32));
    out.device()->seek(block.size());

    return block;
}

