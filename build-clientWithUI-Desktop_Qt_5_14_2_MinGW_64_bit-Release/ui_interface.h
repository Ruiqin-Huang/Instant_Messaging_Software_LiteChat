/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *personal_information;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *ip;
    QLineEdit *account;
    QLabel *account_label;
    QLabel *nickname_label;
    QLineEdit *nickname;
    QLabel *ip_label;
    QToolButton *info_set;
    QLabel *label;
    QLabel *label_4;
    QToolButton *minimized;
    QToolButton *close;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *create_group;
    QToolButton *join_group;
    QListWidget *group_list;
    QHBoxLayout *horizontalLayout;
    QToolButton *add_delete_friend;
    QLabel *label_5;
    QLabel *label_3;
    QListWidget *friend_list;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *change_account;
    QLabel *label_2;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(650, 850);
        personal_information = new QWidget(Interface);
        personal_information->setObjectName(QString::fromUtf8("personal_information"));
        personal_information->setGeometry(QRect(30, 80, 591, 141));
        gridLayoutWidget = new QWidget(personal_information);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 411, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ip = new QLineEdit(gridLayoutWidget);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
"QLineEdit {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-style: hidden;\n"
"    border-width: 0px;\n"
"    border-color: transparent;\n"
"    selection-background-color: transparent;\n"
"    selection-color: black;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\351\274\240\346\240\207\347\274\226\350\276\221 */\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    /* \345\246\202\346\236\234\345\270\214\346\234\233\346\234\211\344\270\200\344\272\233\350\247\206\350\247\211\344\270\212\347\232\204\346\214\207\347\244\272\357\274\214\345\217\257\344\273\245\346\267\273\345\212\240\345\205\266\344\273\226\346\240\267\345\274\217\357\274\214\344\276\213\345\246\202\350\203\214\346\231\257\350\211\262 */\n"
"    background-color: #FFFFFF; /* \347\224\250\344\272\216\345\217\252\350\257\273\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257\350\211\262 "
                        "*/\n"
"}\n"
""));

        gridLayout->addWidget(ip, 2, 1, 1, 1);

        account = new QLineEdit(gridLayoutWidget);
        account->setObjectName(QString::fromUtf8("account"));
        account->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
"QLineEdit {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-style: hidden;\n"
"    border-width: 0px;\n"
"    border-color: transparent;\n"
"    selection-background-color: transparent;\n"
"    selection-color: black;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\351\274\240\346\240\207\347\274\226\350\276\221 */\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    /* \345\246\202\346\236\234\345\270\214\346\234\233\346\234\211\344\270\200\344\272\233\350\247\206\350\247\211\344\270\212\347\232\204\346\214\207\347\244\272\357\274\214\345\217\257\344\273\245\346\267\273\345\212\240\345\205\266\344\273\226\346\240\267\345\274\217\357\274\214\344\276\213\345\246\202\350\203\214\346\231\257\350\211\262 */\n"
"    background-color: #FFFFFF; /* \347\224\250\344\272\216\345\217\252\350\257\273\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257\350\211\262 "
                        "*/\n"
"}\n"
""));

        gridLayout->addWidget(account, 0, 1, 1, 1);

        account_label = new QLabel(gridLayoutWidget);
        account_label->setObjectName(QString::fromUtf8("account_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        account_label->setFont(font);

        gridLayout->addWidget(account_label, 0, 0, 1, 1);

        nickname_label = new QLabel(gridLayoutWidget);
        nickname_label->setObjectName(QString::fromUtf8("nickname_label"));
        nickname_label->setFont(font);

        gridLayout->addWidget(nickname_label, 1, 0, 1, 1);

        nickname = new QLineEdit(gridLayoutWidget);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
"QLineEdit {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-style: hidden;\n"
"    border-width: 0px;\n"
"    border-color: transparent;\n"
"    selection-background-color: transparent;\n"
"    selection-color: black;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\351\274\240\346\240\207\347\274\226\350\276\221 */\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    /* \345\246\202\346\236\234\345\270\214\346\234\233\346\234\211\344\270\200\344\272\233\350\247\206\350\247\211\344\270\212\347\232\204\346\214\207\347\244\272\357\274\214\345\217\257\344\273\245\346\267\273\345\212\240\345\205\266\344\273\226\346\240\267\345\274\217\357\274\214\344\276\213\345\246\202\350\203\214\346\231\257\350\211\262 */\n"
"    background-color: #FFFFFF; /* \347\224\250\344\272\216\345\217\252\350\257\273\347\212\266\346\200\201\347\232\204\350\203\214\346\231\257\350\211\262 "
                        "*/\n"
"}\n"
""));

        gridLayout->addWidget(nickname, 1, 1, 1, 1);

        ip_label = new QLabel(gridLayoutWidget);
        ip_label->setObjectName(QString::fromUtf8("ip_label"));
        ip_label->setFont(font);

        gridLayout->addWidget(ip_label, 2, 0, 1, 1);

        info_set = new QToolButton(personal_information);
        info_set->setObjectName(QString::fromUtf8("info_set"));
        info_set->setGeometry(QRect(430, 50, 151, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        info_set->setFont(font1);
        info_set->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"QToolButton:hover\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211"
                        "\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda085, stop: 1 #fee140);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda0"
                        "85, stop: 1 #43e97b);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/personinfo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        info_set->setIcon(icon);
        info_set->setIconSize(QSize(20, 20));
        info_set->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        label = new QLabel(personal_information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 591, 141));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background_2.png);"));
        label_4 = new QLabel(personal_information);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 591, 131));
        label_4->raise();
        label->raise();
        gridLayoutWidget->raise();
        info_set->raise();
        minimized = new QToolButton(Interface);
        minimized->setObjectName(QString::fromUtf8("minimized"));
        minimized->setGeometry(QRect(520, 20, 41, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        minimized->setFont(font2);
        close = new QToolButton(Interface);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(580, 20, 41, 41));
        close->setFont(font2);
        gridLayoutWidget_2 = new QWidget(Interface);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 250, 591, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        create_group = new QToolButton(gridLayoutWidget_2);
        create_group->setObjectName(QString::fromUtf8("create_group"));
        create_group->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"QToolButton:hover\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211"
                        "\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda085, stop: 1 #fee140);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda0"
                        "85, stop: 1 #43e97b);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/makegroup.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        create_group->setIcon(icon1);
        create_group->setIconSize(QSize(20, 20));
        create_group->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(create_group);

        join_group = new QToolButton(gridLayoutWidget_2);
        join_group->setObjectName(QString::fromUtf8("join_group"));
        join_group->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"QToolButton:hover\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211"
                        "\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda085, stop: 1 #fee140);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda0"
                        "85, stop: 1 #43e97b);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/addgroup.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        join_group->setIcon(icon2);
        join_group->setIconSize(QSize(20, 20));
        join_group->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(join_group);


        gridLayout_2->addLayout(horizontalLayout_2, 10, 0, 1, 1);

        group_list = new QListWidget(gridLayoutWidget_2);
        group_list->setObjectName(QString::fromUtf8("group_list"));
        group_list->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QListWidget\346\225\264\344\275\223\346\240\267\345\274\217 */\n"
"QListWidget {\n"
"    background-color: #ffffff; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid #ccc; /* \350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\240\267\345\274\217 */\n"
"QListWidget::item {\n"
"    background-color: #EED8AE; /* \345\210\227\350\241\250\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\210\227\350\241\250\351\241\271\345\206\205\350\276\271\350\267\235 */\n"
"    border-bottom: 1px solid #ddd; /* \345\272\225\351\203\250\350\276\271\346\241\206\345\210\206\351\232\224\347\272\277 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\240\267\345\274\217 */\n"
""
                        "QListWidget::item:selected {\n"
"    background-color: #EEAD0E; /* \350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #2B2B2B; /* \350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\351\274\240\346\240\207\346\202\254\345\201\234\345\234\250\345\210\227\350\241\250\351\241\271\344\270\212\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QListWidget::item:hover {\n"
"    background-color: #EEC591;\n"
" /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #2B2B2B;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\347\232\204\346\263\250\351\207\212\346\240\267\345\274\217 */\n"
"QListWidget::item::icon {\n"
"    margin-right: 5px; /* \345\233\276\346\240\207\344\270\216\346\226\207"
                        "\346\234\254\344\271\213\351\227\264\347\232\204\351\227\264\350\267\235 */\n"
"    font-size: 12px; /* \345\233\276\346\240\207\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #2B2B2B; /* \345\233\276\346\240\207\347\232\204\351\242\234\350\211\262 */\n"
"}"));
        group_list->setSpacing(4);

        gridLayout_2->addWidget(group_list, 12, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add_delete_friend = new QToolButton(gridLayoutWidget_2);
        add_delete_friend->setObjectName(QString::fromUtf8("add_delete_friend"));
        add_delete_friend->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"QToolButton:hover\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211"
                        "\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda085, stop: 1 #fee140);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda0"
                        "85, stop: 1 #43e97b);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 17px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/addFri.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        add_delete_friend->setIcon(icon3);
        add_delete_friend->setIconSize(QSize(20, 20));
        add_delete_friend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(add_delete_friend);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(12);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background_2.png);\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background_2.png);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 7, 0, 1, 1);

        friend_list = new QListWidget(gridLayoutWidget_2);
        new QListWidgetItem(friend_list);
        new QListWidgetItem(friend_list);
        new QListWidgetItem(friend_list);
        friend_list->setObjectName(QString::fromUtf8("friend_list"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(friend_list->sizePolicy().hasHeightForWidth());
        friend_list->setSizePolicy(sizePolicy);
        friend_list->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QListWidget\346\225\264\344\275\223\346\240\267\345\274\217 */\n"
"QListWidget {\n"
"    background-color: #ffffff; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid #ccc; /* \350\276\271\346\241\206 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\240\267\345\274\217 */\n"
"QListWidget::item {\n"
"    background-color: #EED8AE; /* \345\210\227\350\241\250\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\210\227\350\241\250\351\241\271\345\206\205\350\276\271\350\267\235 */\n"
"    border-bottom: 1px solid #ddd; /* \345\272\225\351\203\250\350\276\271\346\241\206\345\210\206\351\232\224\347\272\277 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\240\267\345\274\217 */\n"
""
                        "QListWidget::item:selected {\n"
"    background-color: #EEAD0E; /* \350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #2B2B2B; /* \350\242\253\351\200\211\344\270\255\347\232\204\345\210\227\350\241\250\351\241\271\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\351\274\240\346\240\207\346\202\254\345\201\234\345\234\250\345\210\227\350\241\250\351\241\271\344\270\212\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QListWidget::item:hover {\n"
"    background-color: #EEC591;\n"
" /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #2B2B2B;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QListWidget\344\270\255\347\232\204\346\263\250\351\207\212\346\240\267\345\274\217 */\n"
"QListWidget::item::icon {\n"
"    margin-right: 5px; /* \345\233\276\346\240\207\344\270\216\346\226\207"
                        "\346\234\254\344\271\213\351\227\264\347\232\204\351\227\264\350\267\235 */\n"
"    font-size: 12px; /* \345\233\276\346\240\207\347\232\204\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: #2B2B2B; /* \345\233\276\346\240\207\347\232\204\351\242\234\350\211\262 */\n"
"}"));
        friend_list->setSpacing(4);

        gridLayout_2->addWidget(friend_list, 5, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/line_1.png);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label_8 = new QLabel(Interface);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 650, 850));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background.png);"));
        change_account = new QPushButton(Interface);
        change_account->setObjectName(QString::fromUtf8("change_account"));
        change_account->setGeometry(QRect(40, 20, 141, 41));
        change_account->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211"
                        "\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda085, stop: 1 #fee140);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #fda0"
                        "85, stop: 1 #43e97b);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/changeAccount.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        change_account->setIcon(icon4);
        change_account->setIconSize(QSize(20, 20));
        label_2 = new QLabel(Interface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, -10, 101, 101));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/theychat-mini.png);"));
        label_8->raise();
        personal_information->raise();
        minimized->raise();
        close->raise();
        gridLayoutWidget_2->raise();
        change_account->raise();
        label_2->raise();

        retranslateUi(Interface);

        change_account->setDefault(false);


        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "Form", nullptr));
        ip->setText(QString());
        account->setText(QString());
        account_label->setText(QCoreApplication::translate("Interface", "\346\210\221\347\232\204\350\264\246\345\217\267", nullptr));
        nickname_label->setText(QCoreApplication::translate("Interface", "\346\210\221\347\232\204\346\230\265\347\247\260", nullptr));
        nickname->setText(QString());
        ip_label->setText(QCoreApplication::translate("Interface", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        info_set->setText(QCoreApplication::translate("Interface", " \344\270\252\344\272\272\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label->setText(QString());
        label_4->setText(QString());
        minimized->setText(QCoreApplication::translate("Interface", "-", nullptr));
        close->setText(QCoreApplication::translate("Interface", "X", nullptr));
        create_group->setText(QCoreApplication::translate("Interface", " \345\210\233\345\273\272\347\276\244\350\201\212", nullptr));
        join_group->setText(QCoreApplication::translate("Interface", " \345\212\240\345\205\245\347\276\244\350\201\212", nullptr));
        add_delete_friend->setText(QCoreApplication::translate("Interface", " \346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label_5->setText(QCoreApplication::translate("Interface", "\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("Interface", "\347\276\244\350\201\212\345\210\227\350\241\250", nullptr));

        const bool __sortingEnabled = friend_list->isSortingEnabled();
        friend_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = friend_list->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Interface", "123124123", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = friend_list->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Interface", "12312412", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = friend_list->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Interface", "21123124", nullptr));
        friend_list->setSortingEnabled(__sortingEnabled);

        label_6->setText(QString());
        label_8->setText(QString());
        change_account->setText(QCoreApplication::translate("Interface", " \345\210\207\346\215\242\350\264\246\345\217\267", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
