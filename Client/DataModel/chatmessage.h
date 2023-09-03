#ifndef CHATMESSAGE_H
#define CHATMESSAGE_H

#include <QObject>
//聊天信息类
class ChatMessage
{

public:
    explicit ChatMessage(quint32 sender, quint32 receiver, const QString & content);
    ChatMessage();
    //getters
    quint32 getSender() const;
    quint32 getReceiver() const;
    QString & getContent();
    QString getDT(); //获得消息发送时间

    QString DT; //发送时间

signals:
private:
    friend class DataDB;
    quint32 sender_id;
    quint32 receiver_id;
    QString content;

public:
    //对于ChatMessage的QByteArray编码方式
    // | quint32 sender | quint32 receiver |  quint32 time_stamp size | DT | quint32 content size | content |

    //消息与ByteArray间相互转换
    static ChatMessage fromQByteArray(QByteArray chat_msg);
    QByteArray toQByteArray();
};

#endif // CHATMESSAGE_H
