QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DataModel/chatmessage.cpp \
    DataModel/filemeta.cpp \
    DataModel/filepackage.cpp \
    DataModel/groupinfo.cpp \
    DataModel/msg.cpp \
    DataModel/userinfo.cpp \
    Controller/clientcontroller.cpp \
    Controller/clientcontroller_chat.cpp \
    Controller/clientcontroller_file.cpp \
    Controller/clientcontroller_friend.cpp \
    Controller/clientcontroller_group.cpp \
    Controller/clientcontroller_modify.cpp \
    Controller/clientcontroller_reg_login.cpp \
    Network/Handlers/chat_msg_handler.cpp \
    Network/Handlers/friend_request_handler.cpp \
    Network/Handlers/friend_request_result_handler.cpp \
    Network/Handlers/friendhistorymsghandler.cpp \
    Network/Handlers/friendlist_handler.cpp \
    Network/Handlers/group_add_result_handler.cpp \
    Network/Handlers/group_msg_handler.cpp \
    Network/Handlers/grouphistorymsghandler.cpp \
    Network/Handlers/grouplist_handler.cpp \
    Network/Handlers/login_handler.cpp \
    Network/Handlers/modify_username_result_handler.cpp \
    Network/Handlers/register_group_handler.cpp \
    Network/Handlers/register_handler.cpp \
    Network/Handlers/userinfo_handler.cpp \
    Network/ResAssist/downloader.cpp \
    Network/ResAssist/localcache.cpp \
    Network/ResAssist/ressocket.cpp \
    Network/ResAssist/uploader.cpp \
    Network/handlerreg.cpp \
    Network/tcpclientsocket.cpp \
    UI/addfriend.cpp \
    UI/addgroup.cpp \
    UI/chatwindow_friend.cpp \
    UI/chatwindow_group.cpp \
    UI/file_receive.cpp \
    UI/infochange.cpp \
    UI/interface.cpp \
    UI/login.cpp \
    UI/makegroup.cpp \
    UI/receivefrireq.cpp \
    UI/register.cpp \
    UI/welcome.cpp \
    Utilities/log.cpp \
    Utilities/qbytearraylistutility.cpp \
    Utilities/safeutilities.cpp \
    Utilities/verifyutilities.cpp \
    main.cpp \

HEADERS += \
    DataModel/chatmessage.h \
    DataModel/filemeta.h \
    DataModel/filepackage.h \
    DataModel/groupinfo.h \
    DataModel/msg.h \
    DataModel/msgtype.h \
    DataModel/userinfo.h \
    Controller/clientcontroller.h \
    DataModel/chatmessage.h \
    DataModel/filemeta.h \
    DataModel/filepackage.h \
    DataModel/groupinfo.h \
    DataModel/userinfo.h \
    Network/Handlers/chat_msg_handler.h \
    Network/Handlers/friend_request_handler.h \
    Network/Handlers/friend_request_result_handler.h \
    Network/Handlers/friendhistorymsghandler.h \
    Network/Handlers/friendlist_handler.h \
    Network/Handlers/group_add_request_result.h \
    Network/Handlers/group_msg_handler.h \
    Network/Handlers/grouphistorymsghandler.h \
    Network/Handlers/grouplist_handler.h \
    Network/Handlers/modify_username_result_handler.h \
    Network/Handlers/register_group_handler.h \
    Network/Handlers/userinfo_handler.h \
    Network/ResAssist/downloader.h \
    Network/ResAssist/localcache.h \
    Network/ResAssist/res.h \
    Network/ResAssist/ressocket.h \
    Network/ResAssist/uploader.h \
    Network/handlers.h \
    Network/Handlers/login_handler.h \
    Network/Handlers/msghandler.h \
    Network/Handlers/register_handler.h \
    Network/handlerreg.h \
    Network/tcpclientsocket.h \
    UI/addfriend.h \
    UI/addgroup.h \
    UI/chatwindow_friend.h \
    UI/chatwindow_group.h \
    UI/css.h \
    UI/file_receive.h \
    UI/infochange.h \
    UI/interface.h \
    UI/login.h \
    UI/makegroup.h \
    UI/receivefrireq.h \
    UI/register.h \
    UI/welcome.h \
    Utilities/log.h \
    Utilities/qbytearraylistutility.h \
    Utilities/safeutilities.h \
    Utilities/standarddatetimeutilities.h \
    Utilities/utilities.h \
    Utilities/verifyutilities.h \

FORMS += \
    UI/addfriend.ui \
    UI/addgroup.ui \
    UI/chatwindow_friend.ui \
    UI/chatwindow_group.ui \
    UI/file_receive.ui \
    UI/infochange.ui \
    UI/interface.ui \
    UI/login.ui \
    UI/makegroup.ui \
    UI/receivefrireq.ui \
    UI/register.ui \
    UI/welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    developer.qrc\
    resource.qrc\

