#ifndef USERINFO_H
#define USERINFO_H

#include <QObject>

class UserInfo
{

public:
    explicit UserInfo(
    quint32 id = 0x0000,
    QString name = "",
    QString pwd = "",
    QString signal=""
        );
    //getters
    quint32 getID() const;
    QString getName() const;
    QString getPwd() const;
    QString getSignal() const;
    //static from method

signals:

protected:
    quint32 id;
    QString name;
    QString pwd;
    QString signal;

public:

    //对于UserInfo的QByteArray编码方式
    // | quint32 id | quint32 name size | name | quint32 pwd size | pwd | quint32 signal size | signal |

    static UserInfo fromQByteArray(QByteArray chat_msg);
    QByteArray toQByteArray();
};

#endif // USERINFO_H
