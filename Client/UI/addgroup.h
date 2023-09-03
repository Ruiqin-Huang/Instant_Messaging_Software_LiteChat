#ifndef ADDGROUP_H
#define ADDGROUP_H

#include <QDialog>
#include <DataModel/groupinfo.h>
#include "DataModel/msgtype.h"

namespace Ui {
class addgroup;
}

class addgroup : public QDialog
{
    Q_OBJECT

public:
    explicit addgroup(QWidget *parent = nullptr);
    ~addgroup();
    UserInfo info;

private slots:
    void on_getGroupId_textChanged(const QString &arg1);

    void on_canceled_clicked();

    void on_groupAdded_clicked();

    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::addgroup *ui;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件

};

#endif // ADDGROUP_H
