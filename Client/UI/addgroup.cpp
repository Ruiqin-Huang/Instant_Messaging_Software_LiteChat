#include "addgroup.h"
#include "ui_addgroup.h"
#include <QRegularExpressionValidator>
#include "Network/handlers.h"
#include "Network/handlerreg.h"
#include "Controller/clientcontroller.h"
#include "Network/handlerreg.h"
#include "Network/handlers.h"

#include <QMessageBox>
#include <QMouseEvent>
addgroup::addgroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addgroup)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
}

addgroup::~addgroup()
{
    delete ui;
}

//鼠标按下
void addgroup::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void addgroup::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void addgroup::on_getGroupId_textChanged(const QString &arg1)
{
    ui->getGroupId->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]+$")));
    QRegularExpression regex("\\D"); // 或者 "[^0-9]"
    QRegularExpressionMatch match = regex.match(ui->getGroupId->text());

    if (match.hasMatch()) {
        ui->getGroupId->clear();
    }
}

void addgroup::on_canceled_clicked()
{
    accept();
}

void addgroup::on_groupAdded_clicked()
{
    QString addGroupId = ui->getGroupId->text();
    ClientController::GetClientInstance()->requestAddGroup(addGroupId.toUInt());
    ui->getGroupId->clear();
}

void addgroup::on_minimize_clicked()
{
    this->showMinimized();
}

void addgroup::on_close_clicked()
{
    this->close();
}
