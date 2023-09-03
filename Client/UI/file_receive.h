#ifndef FILE_RECEIVE_H
#define FILE_RECEIVE_H

#include <QDialog>
#include "DataModel/chatmessage.h"

namespace Ui {
class file_receive;
}

class file_receive : public QDialog
{
    Q_OBJECT

public:
    explicit file_receive(QWidget *parent = nullptr);
    ~file_receive();
    void set_sender_id(quint32 id);
    void set_filemsg(ChatMessage msg);

private slots:
    void on_download_clicked();

    void on_reject_clicked();

    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::file_receive *ui;
    quint32 sender_id;
    ChatMessage filemsg;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // FILE_RECEIVE_H
