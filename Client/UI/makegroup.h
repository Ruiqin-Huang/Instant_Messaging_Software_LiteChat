#ifndef MAKEGROUP_H
#define MAKEGROUP_H

#include <QDialog>
#include "DataModel/groupinfo.h"

namespace Ui {
class makegroup;
}

class makegroup : public QDialog
{
    Q_OBJECT

public:
    explicit makegroup(QWidget *parent = nullptr);
    ~makegroup();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_groupid_textChanged(const QString &arg1);

    void sigRegGroupSuccessful(GroupInfo info);

    void sigRegGroupFailed();

    void refreshGroupList();


    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::makegroup *ui;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // MAKEGROUP_H
