#include "file_receive.h"
#include "ui_file_receive.h"
#include "Controller/clientcontroller.h"
#include <QMessageBox>
#include "DataModel/filemeta.h"
#include <QThread>
#include <QMouseEvent>

file_receive::file_receive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::file_receive)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);//设置窗口背景透明
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);//去掉标题栏
}

file_receive::~file_receive()
{
    delete ui;
}

//鼠标按下
void file_receive::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_point = event->globalPos() - pos(); //计算移动量
        event->accept();
    }
}

//鼠标移动
void file_receive::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}

void file_receive::set_sender_id(quint32 id)
{
    qDebug()<<"1";
    FileMeta file = FileMeta::fromQByteArray(filemsg.getContent().toUtf8());
    qDebug()<<"1";
    this->sender_id = id;
    qDebug()<<"1";
    ui->label_3->setText(QString::number(sender_id) + "向您发送了一个文件:"+file.getBaseName());

    qDebug()<<"file_receive::set_sender_id:"+QString::number(sender_id) + "向您发送了一个文件:"+file.getBaseName();
}

void file_receive::set_filemsg(ChatMessage msg)
{
    this->filemsg = msg;
}

void file_receive::on_download_clicked()
{
    ui->progressBar->setValue(0);
    int targetValue = 100;
    int currentValue = 0;
    int delayMilliseconds = 5;  // 延迟时间（以毫秒为单位）

    for (currentValue = 0; currentValue <= targetValue; currentValue++)
    {
        ui->progressBar->setValue(currentValue);
        QCoreApplication::processEvents();  // 处理事件，以保持界面响应

        // 模拟延迟
        QThread::msleep(delayMilliseconds);
    }
    ClientController::GetClientInstance()->requestFileByRawMsg(filemsg);
    QMessageBox::information(this, "文件下载", "文件下载成功，请在/build/cache文件夹内查看");
    this->close();
}

void file_receive::on_reject_clicked()
{
    this->close();
}

void file_receive::on_minimize_clicked()
{
    this->showMinimized();
}

void file_receive::on_close_clicked()
{
    this->close();
}
