/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *title;
    QLabel *account;
    QLineEdit *set_account;
    QLineEdit *set_password;
    QLabel *password;
    QLabel *nickname;
    QLineEdit *set_nickname;
    QLabel *signature;
    QLineEdit *set_signature;
    QPushButton *go_register;
    QPushButton *go_login;
    QLabel *login;
    QLineEdit *retype_password;
    QLabel *retype;
    QToolButton *close;
    QToolButton *minimize;
    QLabel *background;
    QLabel *logo;
    QLabel *hint_1;
    QLabel *hint_2;
    QLabel *hint_3;
    QLabel *hint_4;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(850, 550);
        Register->setMaximumSize(QSize(850, 550));
        title = new QLabel(Register);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(160, -20, 511, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\350\207\264\351\273\221\357\274\210\351\235\236\345\225\206\347\224\250\357\274\211\345\270\270\350\247\204\344\275\223"));
        font.setPointSize(36);
        font.setBold(false);
        font.setWeight(50);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        account = new QLabel(Register);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(220, 110, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\350\207\264\351\273\221\357\274\210\351\235\236\345\225\206\347\224\250\357\274\211\345\270\270\350\247\204\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        account->setFont(font1);
        set_account = new QLineEdit(Register);
        set_account->setObjectName(QString::fromUtf8("set_account"));
        set_account->setGeometry(QRect(370, 110, 291, 41));
        set_account->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 2px solid #00EE76;\n"
"	border-radius: 8px;\n"
"	background-color: #FFFFFF;\n"
"        color: #0A0A0A;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
""));
        set_password = new QLineEdit(Register);
        set_password->setObjectName(QString::fromUtf8("set_password"));
        set_password->setGeometry(QRect(370, 180, 291, 41));
        set_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 2px solid #00EE76;\n"
"	border-radius: 8px;\n"
"	background-color: #FFFFFF;\n"
"        color: #0A0A0A;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
""));
        set_password->setEchoMode(QLineEdit::Password);
        password = new QLabel(Register);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(220, 180, 141, 41));
        password->setFont(font1);
        nickname = new QLabel(Register);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setGeometry(QRect(220, 320, 141, 41));
        nickname->setFont(font1);
        set_nickname = new QLineEdit(Register);
        set_nickname->setObjectName(QString::fromUtf8("set_nickname"));
        set_nickname->setGeometry(QRect(370, 320, 291, 41));
        set_nickname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 2px solid #00EE76;\n"
"	border-radius: 8px;\n"
"	background-color: #FFFFFF;\n"
"        color: #0A0A0A;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
""));
        signature = new QLabel(Register);
        signature->setObjectName(QString::fromUtf8("signature"));
        signature->setGeometry(QRect(180, 380, 141, 51));
        signature->setFont(font1);
        set_signature = new QLineEdit(Register);
        set_signature->setObjectName(QString::fromUtf8("set_signature"));
        set_signature->setGeometry(QRect(370, 390, 291, 41));
        set_signature->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 2px solid #00EE76;\n"
"	border-radius: 8px;\n"
"	background-color: #FFFFFF;\n"
"        color: #0A0A0A;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
""));
        go_register = new QPushButton(Register);
        go_register->setObjectName(QString::fromUtf8("go_register"));
        go_register->setGeometry(QRect(350, 440, 121, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        go_register->setFont(font2);
        go_register->setContextMenuPolicy(Qt::DefaultContextMenu);
        go_register->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 25px; /*\345\255\227\344\275\223*/\n"
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
"    font:bold 25px; /*\345\255\227\344\275\223*/\n"
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
"    font:bold 25px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        go_login = new QPushButton(Register);
        go_login->setObjectName(QString::fromUtf8("go_login"));
        go_login->setGeometry(QRect(30, 480, 131, 51));
        go_login->setFont(font2);
        go_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color:#ffffff; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 #f6d365, stop: 1 #fda085);/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:#FFCC66; /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:Bold 25px; /*\345\255\227\344\275\223*/\n"
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
"    font:bold 25px; /*\345\255\227\344\275\223*/\n"
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
"    font:bold 25px; /*\345\255\227\344\275\223*/\n"
"    font-family: \"Microsoft YaHei\";\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
"\n"
"\n"
"\n"
""));
        login = new QLabel(Register);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(180, 490, 291, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\200\240\345\255\227\345\267\245\346\210\277\350\207\264\351\273\221\357\274\210\351\235\236\345\225\206\347\224\250\357\274\211\345\270\270\350\247\204\344\275\223"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        login->setFont(font3);
        retype_password = new QLineEdit(Register);
        retype_password->setObjectName(QString::fromUtf8("retype_password"));
        retype_password->setGeometry(QRect(370, 250, 291, 41));
        retype_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 2px solid #00EE76;\n"
"	border-radius: 8px;\n"
"	background-color: #FFFFFF;\n"
"        color: #0A0A0A;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
""));
        retype_password->setEchoMode(QLineEdit::Password);
        retype = new QLabel(Register);
        retype->setObjectName(QString::fromUtf8("retype"));
        retype->setGeometry(QRect(150, 250, 311, 41));
        retype->setFont(font1);
        close = new QToolButton(Register);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(790, 10, 41, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(14);
        close->setFont(font4);
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setAutoRaise(true);
        minimize = new QToolButton(Register);
        minimize->setObjectName(QString::fromUtf8("minimize"));
        minimize->setGeometry(QRect(740, 10, 41, 41));
        minimize->setFont(font4);
        minimize->setCursor(QCursor(Qt::PointingHandCursor));
        minimize->setAutoRaise(true);
        background = new QLabel(Register);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 850, 550));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background.png);"));
        logo = new QLabel(Register);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(15, 15, 161, 161));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/theychat-mini.png);"));
        hint_1 = new QLabel(Register);
        hint_1->setObjectName(QString::fromUtf8("hint_1"));
        hint_1->setGeometry(QRect(360, 150, 461, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(8);
        hint_1->setFont(font5);
        hint_2 = new QLabel(Register);
        hint_2->setObjectName(QString::fromUtf8("hint_2"));
        hint_2->setGeometry(QRect(360, 220, 461, 21));
        hint_2->setFont(font5);
        hint_3 = new QLabel(Register);
        hint_3->setObjectName(QString::fromUtf8("hint_3"));
        hint_3->setGeometry(QRect(360, 290, 461, 21));
        hint_3->setFont(font5);
        hint_4 = new QLabel(Register);
        hint_4->setObjectName(QString::fromUtf8("hint_4"));
        hint_4->setGeometry(QRect(360, 360, 461, 21));
        hint_4->setFont(font5);
        background->raise();
        title->raise();
        account->raise();
        set_account->raise();
        set_password->raise();
        password->raise();
        nickname->raise();
        set_nickname->raise();
        signature->raise();
        set_signature->raise();
        go_register->raise();
        go_login->raise();
        login->raise();
        retype_password->raise();
        retype->raise();
        close->raise();
        minimize->raise();
        logo->raise();
        hint_1->raise();
        hint_2->raise();
        hint_3->raise();
        hint_4->raise();

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "LiteChat-\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        title->setText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        account->setText(QCoreApplication::translate("Register", "\350\264\246\345\217\267", nullptr));
        set_account->setText(QString());
        password->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        nickname->setText(QCoreApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        signature->setText(QCoreApplication::translate("Register", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        go_register->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        go_login->setText(QCoreApplication::translate("Register", "\347\231\273\345\275\225", nullptr));
        login->setText(QCoreApplication::translate("Register", "<< \345\267\262\346\234\211\350\264\246\346\210\267\357\274\237\345\211\215\345\276\200\347\231\273\345\275\225 ", nullptr));
        retype->setText(QCoreApplication::translate("Register", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        close->setText(QCoreApplication::translate("Register", "\303\227", nullptr));
        minimize->setText(QCoreApplication::translate("Register", "-", nullptr));
        background->setText(QString());
        logo->setText(QString());
        hint_1->setText(QCoreApplication::translate("Register", "*\350\257\267\350\276\223\345\205\2454~9\344\275\215\346\225\260\345\255\227", nullptr));
        hint_2->setText(QCoreApplication::translate("Register", "*\350\257\267\350\276\223\345\205\2454~16\344\275\215\350\213\261\346\226\207\345\255\227\346\257\215\344\270\216\346\225\260\345\255\227\347\232\204\347\273\204\345\220\210", nullptr));
        hint_3->setText(QCoreApplication::translate("Register", "*\350\257\267\345\206\215\346\254\241\347\241\256\350\256\244\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        hint_4->setText(QCoreApplication::translate("Register", "*\351\273\230\350\256\244\346\230\265\347\247\260\344\270\216\350\264\246\345\217\267\347\233\270\345\220\214\357\274\214\345\217\257\344\273\245\350\276\223\345\205\245\346\261\211\345\255\227\357\274\214\345\255\227\346\257\215\357\274\214\347\254\246\345\217\267\346\210\226\345\256\203\344\273\254\347\232\204\347\273\204\345\220\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
