#ifndef DB_UTILS_H
#define DB_UTILS_H

#include <QSqlDatabase>

#include "DataModel/userinfo.h"
#include "DataModel/groupinfo.h"
#include "DataModel/chatmessage.h"
#include "DataModel/msgtype.h"

#include<tuple>
typedef std::tuple<QList<MsgType>,QList<ChatMessage>> OfflineMsgTuple;

class DataDB
{
private:

    static DataDB* db;

public:
    QSqlDatabase sqldb;
    explicit DataDB();
    ~DataDB();

    //设置静态变量数据库，需要使用数据库的地方先使用这个函数：
    // DataDB* db = DataDB::GetInstance();
    static DataDB* GetInstance();

    //用户注册
    bool registerUser(const UserInfo& user);
    //登录功能数据库
    bool selectUserByIdAndPwd(const quint32 id, const QString pwd);//存在返回true，不存在返回false
    //获得用户不含密码的基本信息
    UserInfo selectUserById(const quint32 id);//存在返回true，不存在返回false


    //添加好友
    void addFriendship(quint32 Id1,quint32 Id2);
    //删除好友
    void deleteFriendship(quint32 Id1,quint32 Id2);
    //判断好友关系是否存在
    bool friendshipExist(quint32 Id1,quint32 Id2);
    //查询用户的全部好友
    QList<QByteArray> selectAllFriendsUser(quint32 UserId);
    QList<UserInfo> selectAllFriendsUser_UserInfo(quint32 UserId);


    //获取最大用户id
    //quint32 selectMaxId();

    //添加聊天信息
    void addMsg(quint32 Id1,quint32 Id2,QString Msg,QString Date);//发送者的Id，接收者的Id，聊天信息，标准日期xxxx-xx-xx xx:xx:xx使用库获取日期
    //添加离线消息
    void addOfflineMsg(ChatMessage &msg,MsgType type);
    //获取离线消息
    OfflineMsgTuple getOfflineMsg(quint32 ID);
    //删除离线消息
    void dropOfflineMsg(quint32 ID);


    //创建群聊
   void registerGroup(const GroupInfo& Group);
    //查找群聊
   GroupInfo selectGroupByID(quint32);
    //添加群聊关系
    void addGroupship(quint32 UserID,quint32 GroupID);

    //获取最大群id
    quint32 selectMaxGroupId();

    // Id1用户ID,Id2群聊ID，判断用户是否属于群聊
    bool groupshipExist(quint32 Id1, quint32 Id2);
    //获取一个群的全部用户
    QList<quint32> selectAllGroupMember(quint32 ID);
    //获取一个用户的全部群聊
    QList<QByteArray> selectAllGroup(quint32 ID);
    QList<GroupInfo> selectAllGroup_GroupInfo(quint32 ID);


    //修改用户名
    void updUsername(quint32 ID,QString Username);
    //修改头像
    void updSignal(quint32 ID,QString Signal);

    //根据传入的信息获得两位聊天者的历史记录
    QList<QByteArray> selectFriendHistoryMsg(ChatMessage &msg);
    //根据群id获得群聊历史记录
    QList<QByteArray> selectGroupHistoryMsg(quint32 ID);
};

#endif // DB_UTILS_H
