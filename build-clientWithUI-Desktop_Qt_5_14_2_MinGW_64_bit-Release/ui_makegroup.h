/********************************************************************************
** Form generated from reading UI file 'makegroup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEGROUP_H
#define UI_MAKEGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_makegroup
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QToolButton *minimize;
    QToolButton *close;
    QLabel *label_3;
    QLineEdit *groupname;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *makegroup)
    {
        if (makegroup->objectName().isEmpty())
            makegroup->setObjectName(QString::fromUtf8("makegroup"));
        makegroup->resize(850, 550);
        label_2 = new QLabel(makegroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 30, 511, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(30);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(makegroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 850, 550));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background.png);"));
        label_4 = new QLabel(makegroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 161, 161));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/theychat-mini.png);"));
        minimize = new QToolButton(makegroup);
        minimize->setObjectName(QString::fromUtf8("minimize"));
        minimize->setGeometry(QRect(720, 30, 41, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(14);
        minimize->setFont(font1);
        minimize->setCursor(QCursor(Qt::PointingHandCursor));
        minimize->setAutoRaise(true);
        close = new QToolButton(makegroup);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(780, 30, 41, 41));
        close->setFont(font1);
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setAutoRaise(true);
        label_3 = new QLabel(makegroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 240, 191, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(17);
        label_3->setFont(font2);
        groupname = new QLineEdit(makegroup);
        groupname->setObjectName(QString::fromUtf8("groupname"));
        groupname->setGeometry(QRect(360, 240, 301, 51));
        groupname->setFont(font1);
        groupname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid #404040; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #FFFFFF; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #0A0A0A; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #298DFF; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 14pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
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
"\n"
"QLineEdit.long-width {\n"
"	border-width: 8px 12px; /* \347\254\254\344\270\200\344\270\252\345\200\274\346\230\257\345\236\202\347\233\264\350\276\271\346\241\206\345\256\275\345\272\246\357\274\214\347\254\254\344\272\214\344\270\252\345\200\274\346\230\257\346\260\264\345\271\263\350\276\271\346\241\206\345\256\275\345\272\246 */\n"
"}\n"
""));
        pushButton_2 = new QPushButton(makegroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 360, 171, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton = new QPushButton(makegroup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 360, 171, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label->raise();
        label_3->raise();
        groupname->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_2->raise();
        label_4->raise();
        minimize->raise();
        close->raise();

        retranslateUi(makegroup);

        QMetaObject::connectSlotsByName(makegroup);
    } // setupUi

    void retranslateUi(QDialog *makegroup)
    {
        makegroup->setWindowTitle(QCoreApplication::translate("makegroup", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("makegroup", "\345\210\233\345\273\272\347\276\244\350\201\212", nullptr));
        label->setText(QString());
        label_4->setText(QString());
        minimize->setText(QCoreApplication::translate("makegroup", "-", nullptr));
        close->setText(QCoreApplication::translate("makegroup", "\303\227", nullptr));
        label_3->setText(QCoreApplication::translate("makegroup", "\347\276\244\350\201\212\346\230\265\347\247\260\357\274\232", nullptr));
        groupname->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("makegroup", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QCoreApplication::translate("makegroup", "\347\253\213\345\215\263\345\210\233\345\273\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class makegroup: public Ui_makegroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEGROUP_H
