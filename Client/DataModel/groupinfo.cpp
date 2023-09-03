#include "groupinfo.h"
#include <QtNetwork>

GroupInfo::GroupInfo(quint32 id,
            QString name,
            QString pwd,
            QString signal
        ):UserInfo(id,name,pwd,signal)
{
}

GroupInfo::GroupInfo(const UserInfo &Group){
    this->id = Group.getID(); this->name = Group.getName();
    this->pwd = Group.getPwd(); this->signal = Group.getSignal();
}
