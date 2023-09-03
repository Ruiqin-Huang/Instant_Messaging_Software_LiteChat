/********************************************************************************
** Form generated from reading UI file 'infochange.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOCHANGE_H
#define UI_INFOCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_InfoChange
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QToolButton *minimize;
    QToolButton *close;
    QLineEdit *newName;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *newSignature;
    QPushButton *IsChanged;
    QPushButton *NoChange;

    void setupUi(QDialog *InfoChange)
    {
        if (InfoChange->objectName().isEmpty())
            InfoChange->setObjectName(QString::fromUtf8("InfoChange"));
        InfoChange->resize(850, 550);
        label = new QLabel(InfoChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 40, 471, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(30);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(InfoChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 150, 461, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(InfoChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 850, 550));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/background.png);"));
        label_5 = new QLabel(InfoChange);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 161, 161));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/theychat-mini.png);"));
        minimize = new QToolButton(InfoChange);
        minimize->setObjectName(QString::fromUtf8("minimize"));
        minimize->setGeometry(QRect(720, 20, 41, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(14);
        minimize->setFont(font2);
        minimize->setCursor(QCursor(Qt::PointingHandCursor));
        minimize->setAutoRaise(true);
        close = new QToolButton(InfoChange);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(780, 20, 41, 41));
        close->setFont(font2);
        close->setCursor(QCursor(Qt::PointingHandCursor));
        close->setAutoRaise(true);
        newName = new QLineEdit(InfoChange);
        newName->setObjectName(QString::fromUtf8("newName"));
        newName->setGeometry(QRect(430, 220, 270, 42));
        newName->setFont(font2);
        newName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_3 = new QLabel(InfoChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 200, 251, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(20);
        label_3->setFont(font3);
        label_6 = new QLabel(InfoChange);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 270, 281, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font4.setPointSize(19);
        label_6->setFont(font4);
        newSignature = new QLineEdit(InfoChange);
        newSignature->setObjectName(QString::fromUtf8("newSignature"));
        newSignature->setGeometry(QRect(430, 290, 271, 41));
        newSignature->setFont(font2);
        newSignature->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        IsChanged = new QPushButton(InfoChange);
        IsChanged->setObjectName(QString::fromUtf8("IsChanged"));
        IsChanged->setGeometry(QRect(220, 390, 171, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        IsChanged->setFont(font5);
        IsChanged->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        NoChange = new QPushButton(InfoChange);
        NoChange->setObjectName(QString::fromUtf8("NoChange"));
        NoChange->setGeometry(QRect(460, 390, 171, 61));
        NoChange->setFont(font5);
        NoChange->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_4->raise();
        newName->raise();
        label_3->raise();
        label_6->raise();
        newSignature->raise();
        IsChanged->raise();
        NoChange->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        minimize->raise();
        close->raise();

        retranslateUi(InfoChange);

        QMetaObject::connectSlotsByName(InfoChange);
    } // setupUi

    void retranslateUi(QDialog *InfoChange)
    {
        InfoChange->setWindowTitle(QCoreApplication::translate("InfoChange", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoChange", "\344\270\252\344\272\272\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label_2->setText(QCoreApplication::translate("InfoChange", "tips: \345\217\252\351\234\200\350\246\201\345\241\253\345\206\231\351\234\200\350\246\201\344\277\256\346\224\271\347\232\204\345\206\205\345\256\271\345\215\263\345\217\257", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        minimize->setText(QCoreApplication::translate("InfoChange", "-", nullptr));
        close->setText(QCoreApplication::translate("InfoChange", "\303\227", nullptr));
        label_3->setText(QCoreApplication::translate("InfoChange", "\346\230\265\347\247\260(\346\226\260):", nullptr));
        label_6->setText(QCoreApplication::translate("InfoChange", "\344\270\252\346\200\247\347\255\276\345\220\215(\346\226\260):", nullptr));
        IsChanged->setText(QCoreApplication::translate("InfoChange", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        NoChange->setText(QCoreApplication::translate("InfoChange", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoChange: public Ui_InfoChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOCHANGE_H
