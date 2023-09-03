/********************************************************************************
** Form generated from reading UI file 'chatwindow_friend.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_FRIEND_H
#define UI_CHATWINDOW_FRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatwindow_friend
{
public:
    QToolButton *minimized;
    QWidget *gridLayoutWidget;
    QGridLayout *Friend_Info;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Chat_Window;
    QLabel *label;
    QTextBrowser *chatwindow;
    QLabel *background;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *Tool_Bar;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_8;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Text_Editer;
    QTextEdit *input_text;
    QPushButton *send;
    QToolButton *close;
    QLabel *logo;

    void setupUi(QWidget *chatwindow_friend)
    {
        if (chatwindow_friend->objectName().isEmpty())
            chatwindow_friend->setObjectName(QString::fromUtf8("chatwindow_friend"));
        chatwindow_friend->resize(950, 650);
        minimized = new QToolButton(chatwindow_friend);
        minimized->setObjectName(QString::fromUtf8("minimized"));
        minimized->setGeometry(QRect(820, 20, 41, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        minimized->setFont(font);
        gridLayoutWidget = new QWidget(chatwindow_friend);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(630, 80, 301, 155));
        Friend_Info = new QGridLayout(gridLayoutWidget);
        Friend_Info->setObjectName(QString::fromUtf8("Friend_Info"));
        Friend_Info->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
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

        Friend_Info->addWidget(lineEdit_3, 6, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        Friend_Info->addWidget(label_2, 2, 1, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_20, 2, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_5, 3, 3, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        Friend_Info->addWidget(label_4, 6, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_6, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
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

        Friend_Info->addWidget(lineEdit_2, 4, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_4, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_9, 5, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer, 2, 2, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256QLineEdit\344\270\272\351\200\217\346\230\216\357\274\214\351\232\220\350\227\217\350\276\271\346\241\206 */\n"
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

        Friend_Info->addWidget(lineEdit, 2, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_3, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        Friend_Info->addWidget(label_3, 4, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_18, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_16, 4, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        Friend_Info->addWidget(label_8, 0, 3, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_22, 6, 4, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_17, 6, 0, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_21, 4, 4, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Friend_Info->addItem(verticalSpacer_10, 5, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_4, 6, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_13, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Friend_Info->addItem(horizontalSpacer_3, 4, 2, 1, 1);

        verticalLayoutWidget = new QWidget(chatwindow_friend);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 50, 591, 361));
        Chat_Window = new QVBoxLayout(verticalLayoutWidget);
        Chat_Window->setObjectName(QString::fromUtf8("Chat_Window"));
        Chat_Window->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        Chat_Window->addWidget(label);

        chatwindow = new QTextBrowser(verticalLayoutWidget);
        chatwindow->setObjectName(QString::fromUtf8("chatwindow"));

        Chat_Window->addWidget(chatwindow);

        background = new QLabel(chatwindow_friend);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 950, 650));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background_1.png);"));
        horizontalLayoutWidget = new QWidget(chatwindow_friend);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 420, 278, 41));
        Tool_Bar = new QHBoxLayout(horizontalLayoutWidget);
        Tool_Bar->setObjectName(QString::fromUtf8("Tool_Bar"));
        Tool_Bar->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"QPushButton:hover\n"
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
"QPushButton:pressed\n"
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

        Tool_Bar->addWidget(pushButton_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Tool_Bar->addItem(horizontalSpacer_8);

        verticalLayoutWidget_2 = new QWidget(chatwindow_friend);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 470, 591, 121));
        Text_Editer = new QVBoxLayout(verticalLayoutWidget_2);
        Text_Editer->setObjectName(QString::fromUtf8("Text_Editer"));
        Text_Editer->setContentsMargins(0, 0, 0, 0);
        input_text = new QTextEdit(verticalLayoutWidget_2);
        input_text->setObjectName(QString::fromUtf8("input_text"));

        Text_Editer->addWidget(input_text);

        send = new QPushButton(chatwindow_friend);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(490, 600, 121, 32));
        send->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"QPushButton:hover\n"
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
"QPushButton:pressed\n"
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
        close = new QToolButton(chatwindow_friend);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(880, 20, 41, 41));
        close->setFont(font);
        logo = new QLabel(chatwindow_friend);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(790, 500, 131, 131));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/theychat-mini.png);"));
        background->raise();
        minimized->raise();
        gridLayoutWidget->raise();
        verticalLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        verticalLayoutWidget_2->raise();
        send->raise();
        close->raise();
        logo->raise();

        retranslateUi(chatwindow_friend);

        QMetaObject::connectSlotsByName(chatwindow_friend);
    } // setupUi

    void retranslateUi(QWidget *chatwindow_friend)
    {
        chatwindow_friend->setWindowTitle(QCoreApplication::translate("chatwindow_friend", "Form", nullptr));
        minimized->setText(QCoreApplication::translate("chatwindow_friend", "-", nullptr));
        label_2->setText(QCoreApplication::translate("chatwindow_friend", "\345\245\275\345\217\213ID", nullptr));
        label_4->setText(QCoreApplication::translate("chatwindow_friend", "\345\245\275\345\217\213\347\255\276\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("chatwindow_friend", "\345\245\275\345\217\213\346\230\265\347\247\260", nullptr));
        label_8->setText(QCoreApplication::translate("chatwindow_friend", "\345\245\275\345\217\213\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("chatwindow_friend", "\350\201\212\345\244\251\346\266\210\346\201\257\347\252\227\345\217\243", nullptr));
        chatwindow->setHtml(QCoreApplication::translate("chatwindow_friend", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        background->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("chatwindow_friend", "\346\226\207\344\273\266\345\217\221\351\200\201", nullptr));
        input_text->setHtml(QCoreApplication::translate("chatwindow_friend", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        send->setText(QCoreApplication::translate("chatwindow_friend", "\345\217\221\351\200\201", nullptr));
        close->setText(QCoreApplication::translate("chatwindow_friend", "X", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chatwindow_friend: public Ui_chatwindow_friend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_FRIEND_H
