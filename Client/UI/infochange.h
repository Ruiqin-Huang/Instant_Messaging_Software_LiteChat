#ifndef INFOCHANGE_H
#define INFOCHANGE_H

#include <QDialog>
#include "DataModel/userinfo.h"
namespace Ui {
class InfoChange;
}

class InfoChange : public QDialog
{
    Q_OBJECT

public:
    explicit InfoChange(QWidget *parent = nullptr);
    ~InfoChange();

private slots:
    void on_IsChanged_clicked();

    void on_NoChange_clicked();

    void modify_success(UserInfo newuser);
    void modify_fail();

    void on_minimize_clicked();

    void on_close_clicked();

private:
    Ui::InfoChange *ui;
    QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};


#endif // INFOCHANGE_H
