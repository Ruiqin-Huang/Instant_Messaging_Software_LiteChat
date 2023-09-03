#include "interface.h"
#include "ui_interface.h"
#include "chatwindow_friend.h"
#include "chatwindow_group.h"
#include "infochange.h"
#include "addfriend.h"
#include "makegroup.h"
#include "addgroup.h"
#include "login.h"
#include "receivefrireq.h"
#include "DataModel/userinfo.h"
#include "Network/Handlers/userinfo_handler.h"
#include "Network/handlerreg.h"
#include "Controller/clientcontroller.h"
#include <QMessageBox>
#include "UI/file_receive.h"
#include "DataModel/filemeta.h"
#include <QMouseEvent>

//完整的初始化函数
//Interface::Interface(QWidget *parent, const UserInfo &userInfo, const quint32 &account, const QString &IP)
Interface::Interface(QWidget *parent, const UserInfo &userInfo):
    QWidget(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏

    my_userInfo = userInfo;
    Initialize_UserInfo(userInfo);

    connect((FriendListHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ALL_FRIEND_LIST),
            &FriendListHandler::sigFriendListGotcha, this, &Interface::Initialize_FriendList);

    connect((GroupListHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ALL_GROUP_LIST),
            &GroupListHandler::sigGroupListGotcha, this, &Interface::Initialize_GroupList);

    connect((ModifyUserNameResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::MODIFY_USERNAME_SUCCESS),
            &ModifyUserNameResultHandler::modifyUserNameSuccess, this, &Interface::Initialize_UserInfo);

    connect((FriendRequestHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REQUEST_ADD_FRIEND),
            &FriendRequestHandler::readyShowFriendRequest, this, &Interface::show_friend_request);

    connect((FriendRequestResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REQUEST_ADD_FRIEND_AGREED),
            &FriendRequestResultHandler::sigAddFriendSuccessful, this, &Interface::addFriendSuccess);
    connect((FriendRequestResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REQUEST_ADD_FRIEND_DECLINED),
            &FriendRequestResultHandler::sigAddFriendFailed, this, &Interface::addFriendFailed);
    connect((FriendRequestResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REQUEST_ADD_FRIEND_AGREED),
            &FriendRequestResultHandler::refreshFriendList, this, &Interface::refreshFriendList);


    connect((AddGroupResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ADD_GROUP_SUCCESS),
            &AddGroupResultHandler::sigAddGroupSuccessful, this, &Interface::sigAddGroupSuccessful);
    connect((AddGroupResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ADD_GROUP_SUCCESS),
            &AddGroupResultHandler::sigAddGroupFailed, this, &Interface::sigAddGroupFailed);
    connect((AddGroupResultHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ADD_GROUP_SUCCESS),
            &AddGroupResultHandler::refreshGroupList, this, &Interface::refreshGroupList);

    connect((RegisterGroupHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_GROUP_SUCCESS),
            &RegisterGroupHandler::refreshGroupList, this, &Interface::refreshGroupList);

    // 文件接收
    connect((ChatMsgHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::MSG_FILE),
            &ChatMsgHandler::readyShowChatFile, this, &Interface::receiveFile);


    ClientController::GetClientInstance()->requestFriendList(userInfo);
    ClientController::GetClientInstance()->requestGroupList(userInfo);
    ClientController::GetClientInstance()->requestOfflineMsg();
}

Interface::~Interface()
{
    delete ui;
}

void Interface::Initialize_UserInfo(UserInfo info)
{
    //获取当前用户信息
    quint32 my_id = info.getID();
    QString my_nickname = info.getName();
    QString my_signature = info.getSignal();

    ui->account->setText(QString::number(my_id));
    ui->nickname->setText(my_nickname);
    ui->ip->setText(my_signature);
}

void Interface::Initialize_FriendList()
{
    QList<UserInfo> *my_friend_list = ClientController::GetClientInstance()->getFriendList();
    //将好友列表中的数据一一加入friend_list中
    ui->friend_list->clear();
    for(const UserInfo& item : *my_friend_list) {
        ui->friend_list->addItem(QString::number(item.getID()));
    }
}

void Interface::Initialize_GroupList()
{
    QList<GroupInfo> *my_group_list = ClientController::GetClientInstance()->getGroupList();
    //将好友列表中的数据一一加入group_list中
    ui->group_list->clear();
    for(const GroupInfo& item : *my_group_list) {
        ui->group_list->addItem(QString::number(item.getID()));
    }
}

//鼠标按下
void Interface::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void Interface::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}


void Interface::on_friend_list_itemDoubleClicked(QListWidgetItem *item)
{
    chatwindow_friend * chat_f = new chatwindow_friend;
    quint32 chater_id = item->text().toUInt();
    chat_f->set_receiver_id(chater_id);
    chat_f->show();

}

void Interface::on_group_list_itemDoubleClicked(QListWidgetItem *item)
{
    chatwindow_group * chat_g = new chatwindow_group;
    quint32 group_id = item->text().toUInt();
    chat_g->set_group_id(group_id);
    chat_g->show();
}

void Interface::on_info_set_clicked()
{
    InfoChange* ic = new InfoChange;
    ic->show();
}

void Interface::on_add_delete_friend_clicked()
{
    AddFriend* af = new AddFriend;
    af->show();
}
/*
void Interface::on_friend_application_clicked()
{
    friReLists * fr = new friReLists;
    fr->show();
}
*/
void Interface::on_create_group_clicked()
{
    makegroup * mg = new makegroup;
    mg->show();
}

void Interface::on_join_group_clicked()
{
    addgroup * ag = new addgroup;
    ag->info = ClientController::GetClientInstance()->getMyInfo();
    ag->show();
}

void Interface::on_minimized_clicked()
{
    this->showMinimized();
}

void Interface::on_close_clicked()
{
    this->close();
}

void Interface::on_change_account_clicked()
{
    Login * l = new Login;
    l->show();
    this->close();
}

void Interface::show_friend_request(UserInfo sender)
{
    receivefrireq * rfr = new receivefrireq;
    qDebug()<<"好友请求："+sender.getName();
    rfr->set_sender_info(sender);
    rfr->set_my_info(my_userInfo);
    rfr->show();
}

// 添加好友成功
void Interface::addFriendSuccess(UserInfo sender)
{
    ClientController::GetClientInstance()->requestFriendList(my_userInfo);
    QMessageBox::information(this, "好友申请", "您已成功添加" + sender.getName() + "为好友");
}

// 添加好友失败
void Interface::addFriendFailed(MsgType type, UserInfo sender)
{
    switch(type)
    {
        case MsgType::REQUEST_ADD_FRIEND_DECLINED:
            QMessageBox::information(this, "好友申请", sender.getName() + "已拒绝您的好友申请");break;
        case MsgType::REQUEST_ADD_FRIEND_ERROR_FRIEND_OFFLINE:
            QMessageBox::information(this, "好友申请", sender.getName() + "目前不在线，请您稍后重试");break;
        case MsgType::REQUEST_ADD_FRIEND_ERROR:
            QMessageBox::information(this, "好友申请", "添加好友失败");break;
        case MsgType::REQUEST_ADD_FRIEND_ERROR_FRIEND_NOT_EXIST:
            QMessageBox::information(this, "好友申请", "该用户不存在");break;
        case MsgType::REQUEST_ADD_FRIEND_ERROR_FRIENDSHIP_EXIST:
            QMessageBox::information(this, "好友申请", sender.getName() + "已是您的好友");break;
        default:
            break;
    }
}

void Interface::refreshFriendList(){
    Initialize_FriendList();
}

void Interface::sigAddGroupSuccessful(){
    QMessageBox::information(this, "添加群聊", "添加群聊成功");
}

void Interface::sigAddGroupFailed(MsgType type){
    QMessageBox::warning(this, "添加群聊", "您输入的id有问题，请重新输入");
}

void Interface::refreshGroupList(){
    ClientController::GetClientInstance()->requestGroupList(my_userInfo);
}
// 接收文件
void Interface::receiveFile(ChatMessage msg)
{
    FileMeta file = FileMeta::fromQByteArray(msg.getContent().toUtf8());
    qDebug()<<"receiveFile:"+QString::number(msg.getSender())+":"+QString::number(msg.getReceiver())+":"+file.getBaseName();
    file_receive *fr = new file_receive;
    quint32 sender_id = msg.getSender();
    fr->set_filemsg(msg);
    fr->set_sender_id(sender_id);
    fr->show();
}



