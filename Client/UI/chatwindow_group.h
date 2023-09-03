#ifndef CHATWINDOW_GROUP_H
#define CHATWINDOW_GROUP_H

#include <QWidget>
#include <QMouseEvent>
#include "DataModel/chatmessage.h"

namespace Ui {
class chatwindow_group;
}

class chatwindow_group : public QWidget
{
    Q_OBJECT

public:
    explicit chatwindow_group(QWidget *parent = nullptr,quint32 id = 0);
    void set_group_id(quint32 group_id);
    ~chatwindow_group();

signals:
    void newMessageReceived(const QString &message);

private slots:
    void on_close_clicked();

    void on_minimize_clicked();

    void on_send_clicked();

    void on_pushButton_5_clicked();

    void receiveMessage(ChatMessage info);

    void readyGroupHistoryMsg();

private:
    Ui::chatwindow_group *ui;
    QPoint m_point;
    quint32 id;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // CHATWINDOW_GROUP_H
