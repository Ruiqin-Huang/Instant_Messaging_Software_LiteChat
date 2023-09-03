#include "db_utils.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QVariant>
#include <QtDebug>
#include <QObject>
#include "Utilities/log.h"


//静态成员变量的类外初始化
DataDB* DataDB::db = NULL;
//析构函数
DataDB::~DataDB() {
    if (db != NULL) {
        delete db;
    }
}
//获取数据库实例
DataDB* DataDB::GetInstance() {
    if (db == NULL) {
        db = new DataDB;
    }
    return db;
}

//定义构造函数，打开数据库产生DB对象
DataDB::DataDB() {
    sqldb = QSqlDatabase::addDatabase("QSQLITE");
    sqldb.setDatabaseName("Server.db");
    if (!sqldb.open()) {
        QMessageBox::warning(NULL, "错误", "打开数据库时出现错误!", QMessageBox::Yes);
    }

    //初始化建表
    QSqlQuery query;

    //用户列表
    query.exec("CREATE TABLE User ("
        "Id INTEGER PRIMARY KEY, "
        "Username VARCHAR(40) NOT NULL, "
        "Pwd VARCHAR(40) NOT NULL, "
        "Signal VARCHAR(512) )");

    //群聊列表
    query.exec("CREATE TABLE GroupInfo ("
          "ID INTEGER PRIMARY KEY,"
          "GroupName VARCHAR(40) NOT NULL,"
          "GroupSignal VARCHAR(512) )");

    //好友关系表，单向好友
    query.exec("CREATE TABLE Friendship ("
               "MyId INTEGER, "
               "FriendId INTEGER, "
               "FOREIGN KEY (MyId) REFERENCES User(Id),"
               "FOREIGN KEY (FriendId) REFERENCES User(Id),"
               "PRIMARY KEY (MyId,FriendId))");

    //离线消息列表
    query.exec("CREATE TABLE OfflineMsg ("
        "Sender INTEGER, "
        "Reciever INTEGER, "
        "Msg VARCHAR(512),"
        "DT datetime NOT NULL,"
        "Type INTEGER,"
        "FOREIGN KEY (Sender) REFERENCES User(Id),"
        "FOREIGN KEY (Reciever) REFERENCES User(Id))");

    //消息列表
    query.exec("CREATE TABLE Msg ("
        "Sender INTEGER,"
        "Reciever INTEGER,"
        "Msg VARCHAR(512),"
        "DT datetime NOT NULL,"
        "FOREIGN KEY (Sender) REFERENCES User(Id),"
        "FOREIGN KEY (Reciever) REFERENCES User(Id))");

    // 群关系表
    query.exec("CREATE TABLE Groupship ("
               "UserID INTEGER,"
               "GroupID INTEGER,"
               "FOREIGN KEY (UserID) REFERENCES User(Id),"
               "FOREIGN KEY (GroupID) REFERENCES GroupInfo(ID),"
               "PRIMARY KEY (UserID,GroupID))");
}

    //用户注册
    bool DataDB::registerUser(const UserInfo& user) {
        QSqlQuery query;
        query.prepare("insert into User values(:Id,:Username,:pwd,:signal)");
        query.bindValue(":Id", user.getID());
        query.bindValue(":Username", user.getName());
        query.bindValue(":pwd", user.getPwd());
        query.bindValue(":signal", user.getSignal());
        return query.exec();
    }

    //查询所有好友的信息，返回一个包含User二进制类型的QList
    QList<QByteArray> DataDB::selectAllFriendsUser(quint32 UserId) {
        QSqlQuery query;
        query.prepare("select Id,Username,Signal from User where Id in (select FriendId from Friendship where MyId =:UserId)");
        query.bindValue(":UserId", QVariant(UserId));
        query.exec();
        QList<QByteArray> ListUser;
        ListUser.clear();
        while (query.next()) {
            ListUser.append(UserInfo(query.value("Id").toInt(), query.value("Username").toString(),"",query.value("Signal").toString()).toQByteArray());
        }
        return ListUser;
    }
    //查询所有好友的信息，返回一个包含User类型的QList
    QList<UserInfo> DataDB::selectAllFriendsUser_UserInfo(quint32 UserId) {
        QSqlQuery query;
        query.prepare("select Id,Username,Signal from User where Id in (select FriendId from Friendship where MyId =:UserId)");
        query.bindValue(":UserId", QVariant(UserId));
        query.exec();
        QList<UserInfo> ListUser;
        ListUser.clear();
        while (query.next()) {
            ListUser.append(UserInfo(query.value("Id").toInt(), query.value("Username").toString(),"",query.value("Signal").toString()));
        }
        return ListUser;
    }


    //登录验证
    bool DataDB::selectUserByIdAndPwd(const quint32 Id, const QString pwd) {
        QSqlQuery query;
        query.prepare("select * from User where Id =:Id and pwd =:pwd");
        query.bindValue(":Id", QVariant(Id));
        query.bindValue(":pwd", QVariant(pwd));
        query.exec();
        bool flag = query.next();
        return flag;
    }

    //获得不含密码的基本信息
    UserInfo DataDB::selectUserById(const quint32 id){
        QSqlQuery query;
        query.prepare("select * from User where Id =:Id");
        query.bindValue(":Id", QVariant(id));
        query.exec();
        UserInfo tmp;
        while(query.next()){
            tmp = UserInfo(query.value("Id").toUInt(),
                           query.value("Username").toString(),
                           "",
                           query.value("Signal").toString()
                           );
        }
        return tmp;
    }

    //添加好友，单向，相互添加好友需要两次调用此函数并互换参数
    void DataDB::addFriendship(quint32 Id1, quint32 Id2) {
        QSqlQuery query;
        query.prepare("insert into Friendship values(:Id1,:Id2)");
        query.bindValue(":Id1", QVariant(Id1));
        query.bindValue(":Id2", QVariant(Id2));
        query.exec();
    }
    //删除好友，单向，相互删除好友需要两次调用此函数并互换参数
    void DataDB::deleteFriendship(quint32 Id1, quint32 Id2) {
        QSqlQuery query;
        query.prepare("delete from Friendship where MyId =:Id1 and FriendId =:Id2");
        query.bindValue(":Id1", QVariant(Id1));
        query.bindValue(":Id2", QVariant(Id2));
        query.exec();
    }
    //判断单向好友关系是否存在
    bool DataDB::friendshipExist(quint32 Id1,quint32 Id2){
        QSqlQuery query;
        query.prepare("select * from Friendship where MyId =:Id1 and FriendId =:Id2");
        query.bindValue(":Id1", QVariant(Id1));
        query.bindValue(":Id2", QVariant(Id2));
        query.exec();
        bool flag = query.next();
        return flag;
    }

    //添加聊天信息
    void DataDB::addMsg(quint32 Id1, quint32 Id2, QString Msg, QString Date) {
        QSqlQuery query;
        query.prepare("insert into Msg values(:Id1,:Id2,:Msg,:Date)");
        query.bindValue(":Id1", QVariant(Id1));
        query.bindValue(":Id2", QVariant(Id2));
        query.bindValue(":Msg", Msg);
        query.bindValue(":Date", Date);
        query.exec();
    }

//    获取最大id
//    quint32 DataDB::selectMaxId() {
//        QSqlQuery query;
//        query.exec("select MAX(Id) as Id from User");
//        quint32 maxId = quint32(100000);
//        while (query.next()) {
//            maxId = query.value("Id").toUInt();
//        }
//        Log::GetLogObj()->writeLog("[CurrentMaxID]" + QString::number(maxId));
//        if(maxId>=quint32(100000)) return maxId;
//        else return quint32(100000);
//    }

    //添加离线消息
    void DataDB::addOfflineMsg(ChatMessage &msg, MsgType type){
        QSqlQuery query;
        query.prepare("insert into OfflineMsg values(:Sender,:Reciever,:Msg,:DT,:Type)");
        query.bindValue(":Sender",QVariant(msg.getSender()));
        query.bindValue(":Reciever",QVariant(msg.getReceiver()));
        query.bindValue(":Msg",QVariant(msg.getContent()));
        query.bindValue(":DT",QVariant(msg.getDT()));
        query.bindValue(":Type",QVariant(static_cast<quint16>(type)));
        query.exec();
    }
    //获取离线消息
    OfflineMsgTuple DataDB::getOfflineMsg(quint32 ID){
        QList<ChatMessage> msg;
        QList<MsgType> type;
        msg.clear();
        type.clear();

        QSqlQuery query;
        query.prepare("select * from OfflineMsg where Reciever = :ID");
        query.bindValue(":ID",QVariant(ID));
        query.exec();
        while (query.next()) {
            ChatMessage nowmsg(
                        query.value("Sender").toUInt(),
                        query.value("Reciever").toUInt(),
                        query.value("Msg").toString());
            nowmsg.DT = query.value("DT").toString();
            msg.append(nowmsg);

            type.append( static_cast<MsgType>(query.value("Type").toUInt()) );
        }

        OfflineMsgTuple tmp(type,msg);
        return tmp;
    }
    //删除离线消息
    void DataDB::dropOfflineMsg(quint32 ID){
        QSqlQuery query;
        query.prepare("delete from OfflineMsg where Reciever = :ID");
        query.bindValue(":ID",QVariant(ID));
        query.exec();
    }


    //创建群聊
    void DataDB::registerGroup(const GroupInfo& Group){
        QSqlQuery query;
        query.prepare("insert into GroupInfo values(:Id,:Username,:signal)");
        query.bindValue(":Id", QVariant(Group.getID()));
        query.bindValue(":Username", QVariant(Group.getName()));
        query.bindValue(":signal", QVariant(Group.getSignal()));
        query.exec();
    }
    //查找群聊
    GroupInfo DataDB::selectGroupByID(quint32 ID){
        QSqlQuery query;
        query.prepare("select * from GroupInfo where ID = :ID");
        query.bindValue(":ID",QVariant(ID));
        query.exec();
        GroupInfo tmp;
        while(query.next()){
            tmp = GroupInfo(query.value("Id").toUInt(),
                           query.value("GroupName").toString(),
                           "",
                           query.value("GroupSignal").toString()
                           );
        }
        return tmp;
    }
    //添加群聊关系
    void DataDB::addGroupship(quint32 UserID,quint32 GroupID){
        QSqlQuery query;
        query.prepare("insert into Groupship values(:UserID,:GroupID)");
        query.bindValue(":UserID", QVariant(UserID));
        query.bindValue(":GroupID", QVariant(GroupID));
        query.exec();
    }

//     获取最大群id
    quint32 DataDB::selectMaxGroupId() {
        QSqlQuery query;
        query.exec("select MAX(Id) as Id from GroupInfo");
        quint32 maxId=quint32(100);
        while (query.next()) {
            maxId = query.value("Id").toUInt();
        }
        if(maxId<100){
            maxId =quint32(100);
        }
        Log::GetLogObj()->writeLog("[CurrentMaxID]" + QString::number(maxId));
        return maxId;
    }

    // Id1用户ID,Id2群聊ID，判断用户是否属于群聊
    bool DataDB::groupshipExist(quint32 Id1, quint32 Id2){
        QSqlQuery query;
        query.prepare("select * from Groupship where UserId =:Id1 and GroupId =:Id2");
        query.bindValue(":Id1", QVariant(Id1));
        query.bindValue(":Id2", QVariant(Id2));
        query.exec();
        bool flag = query.next();
        return flag;
    }
    //获取一个群的全部用户
    QList<quint32> DataDB::selectAllGroupMember(quint32 ID){
        QSqlQuery query;
        query.prepare("select UserId from Groupship where GroupID = :ID");
        query.bindValue(":ID",QVariant(ID));
        QList<quint32> ListGroupMember;
        ListGroupMember.clear();
        query.exec();
        while(query.next()){
            ListGroupMember.append(query.value("UserId").toUInt());
        }

        return ListGroupMember;
    }
    //获取一个用户的全部群聊,注意返回值为 QList<QByteArray>
    QList<QByteArray> DataDB::selectAllGroup(quint32 ID){
        QSqlQuery query;
        query.prepare("select Id,GroupName,GroupSignal from GroupInfo where Id in (select GroupID from Groupship where UserId =:UserId)");
        query.bindValue(":UserId", QVariant(ID));
        query.exec();
        QList<QByteArray> ListGroup;
        ListGroup.clear();
        while (query.next()) {
            ListGroup.append(UserInfo(query.value("Id").toInt(), query.value("GroupName").toString(),"",query.value("GroupSignal").toString()).toQByteArray());
        }
        return ListGroup;
    }
    //获取一个用户的全部群聊,注意返回值为 QList<GroupInfo>
    QList<GroupInfo> DataDB::selectAllGroup_GroupInfo(quint32 ID){
        QSqlQuery query;
        query.prepare("select Id,GroupName,GroupSignal from GroupInfo where Id in (select GroupID from Groupship where UserId =:UserId)");
        query.bindValue(":UserId", QVariant(ID));
        query.exec();
        QList<GroupInfo> ListGroup;
        ListGroup.clear();
        while (query.next()) {
            ListGroup.append(UserInfo(query.value("Id").toInt(), query.value("GroupName").toString(),"",query.value("GroupSignal").toString()));
        }
        return ListGroup;
    }

    //修改用户名
    void DataDB::updUsername(quint32 ID, QString Username){
        QSqlQuery query;
        query.prepare("UPDATE User SET Username = :Username WHERE ID = :ID");
        query.bindValue(":ID",QVariant(ID));
        query.bindValue(":Username",QVariant(Username));
        query.exec();
    }
     //修改签名
    void DataDB::updSignal(quint32 ID, QString Signal){
        QSqlQuery query;
        query.prepare("UPDATE User SET Signal = :Signal WHERE ID = :ID");
        query.bindValue(":ID",QVariant(ID));
        query.bindValue(":Signal",QVariant(Signal));
        query.exec();
    }

    //根据传入的信息获得两位聊天者的历史记录
    QList<QByteArray> DataDB::selectFriendHistoryMsg(ChatMessage &msg){
        QSqlQuery query;
        query.prepare("select * from Msg where (Sender =:Id1 and Reciever =:Id2) or (Sender =:Id2 and Reciever =:Id1) order by DT");
        query.bindValue(":Id1",QVariant(msg.getSender()));
        query.bindValue(":Id2",QVariant(msg.getReceiver()));
        query.exec();

        QList<QByteArray> ListHistortyMsg;
        ListHistortyMsg.clear();
        while (query.next()) {
            ChatMessage tmp=ChatMessage(query.value("Sender").toInt(), query.value("Reciever").toInt(),query.value("Msg").toString());
            tmp.DT=query.value("DT").toString();
            ListHistortyMsg.append(tmp.toQByteArray());
        }
        return ListHistortyMsg;

    }
    //根据群id获得群聊历史记录
    QList<QByteArray> DataDB::selectGroupHistoryMsg(quint32 ID){
        QSqlQuery query;
        query.prepare("select * from Msg where Reciever =:id order by DT");
        query.bindValue(":id",ID);
        query.exec();

        QList<QByteArray> ListHistortyMsg;
        ListHistortyMsg.clear();
        while (query.next()) {
            ChatMessage tmp=ChatMessage(query.value("Sender").toInt(), query.value("Reciever").toInt(),query.value("Msg").toString());
            tmp.DT=query.value("DT").toString();
            ListHistortyMsg.append(tmp.toQByteArray());
        }
        return ListHistortyMsg;
    }





