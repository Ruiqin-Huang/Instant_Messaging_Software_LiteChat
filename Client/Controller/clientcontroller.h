#ifndef CLIENTCONTROLLER_H
#define CLIENTCONTROLLER_H

#include <QObject>

#include "DataModel/chatmessage.h"
#include "Network/tcpclientsocket.h"
#include "DataModel/userinfo.h"
#include "DataModel/groupinfo.h"

class ClientController : public QObject
{
	Q_OBJECT
public:
	explicit ClientController(QObject* parent = nullptr);
	~ClientController();

	//有关客户端自己
	static ClientController* GetClientInstance();

    //获取用户信息
	UserInfo& getMyInfo();
    void requestUserInfoByID(quint32 ID);

    //获取好友/群聊列表
    void requestFriendList(UserInfo info);
    void requestGroupList(UserInfo info);

	//发送消息的函数
	void sendChatMessage(ChatMessage& chat_msg);
    void sendChatMessage(quint32 receiver, QString content);
    //发送群聊消息
	void sendGroupChatMessage(quint32 groupId, QString content);

    //获取历史聊天记录
    QList<ChatMessage>* getChatMsg(quint32 id);
    QList<ChatMessage>* getGroupMsg(quint32 id);
    void requestFriendHistoryMsg(quint32 id);
    void requestGroupHistoryMsg(quint32 id);

    //请求发送文件
    bool requestSendFile(quint32 receiver, QString fileAbsolutePath);

	//请求下载文件
    void requestFileByRawMsg(ChatMessage);

    //登录与注册的请求
	void requestLogin(quint32 id, QString password);
    void requestRegister(quint32 id, QString username, QString password, QString signature);

	//好友相关
	void requestAddFriend(quint32 receiver, QString verifyMsg = "");
	void agreeFriendRequest(quint32 sender, quint32 receiver, QString s = "");
	void declineFriendRequest(quint32 sender, quint32 receiver, QString s = "");

	QList<UserInfo>* getFriendList(); //获得好友列表
	QList<GroupInfo>* getGroupList();//获得群聊列表

    //修改昵称
    void requestModifyUserName(QString newUserName);

    //新建/加入群聊
	void registerGroup(QString groupName);
	void requestAddGroup(quint32 id);

    //获得IP设置
    static QString GetServerIP(){return IP;}

	//友元
	friend class FriendListHandler;
	friend class ChatMsgHandler;
	friend class FriendRequestResultHandler;
	friend class GroupListHandler;
	friend class AddGroupResultHandler;
	friend class RegisterGroupHandler;
	friend class GroupMsgHandler;
	friend class UserInfoHandler;
    friend class MainWindow;
    friend class addfriendalert;
    friend class FriendHistoryMsgHandler;
    friend class GroupHistoryMsgHandler;

public slots:
    void requestOfflineMsg();
private slots:

	void requestAllFriendListUserInfo();

	void dynamicAppendFriend(UserInfo _friend); //动态append好友
    void dynamicAppendGroup(GroupInfo _group); //动态append group


    //debug
    void requestChatFile(ChatMessage chat_msg);

private:

	QMap<quint32, QList<ChatMessage>*>* getChatMsgMap() { return &chatMsgMap; }
	QMap<quint32, QList<ChatMessage>*> chatMsgMap;

	QList<UserInfo> friendList;

	QMap<quint32, UserInfo>& getIdToUserInfoMap() { return idToUserInfoMap; }
	QMap<quint32, UserInfo>  idToUserInfoMap;

	//群聊相关
    QMap<quint32, QList<ChatMessage>*>* getChatMsgMapGroup() { return &chatMsgMapGroup; }
    QMap<quint32, QList<ChatMessage>*> chatMsgMapGroup;

    QMap<QString, quint32> chatImg;
	QList<GroupInfo> groupList;

	static ClientController* obj; //自己的实例

    //ClientController负责控制Socket
    static QString IP;
	static void ConnectToServer();
	static TcpClientSocket* GetSocket();
	static TcpClientSocket* socket;
};

#endif // CLIENTCONTROLLER_H
