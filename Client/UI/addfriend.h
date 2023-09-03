#ifndef ADDFRIEND_H
#define ADDFRIEND_H

#include <QDialog>
#include "DataModel/msgtype.h"

namespace Ui {
class AddFriend;
}

class AddFriend : public QDialog
{
    Q_OBJECT

public:
    explicit AddFriend(QWidget *parent = nullptr);
    ~AddFriend();

private slots:
    void on_cancel_clicked();

    void on_addfriend_clicked();

    void on_getuserid_textChanged(const QString &arg1);

    //void on_deletefriend_clicked();

    void on_getuserid_editingFinished();

    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::AddFriend *ui;
    QString request_id;
    quint32 request_id_int;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件

};

#endif // ADDFRIEND_H
