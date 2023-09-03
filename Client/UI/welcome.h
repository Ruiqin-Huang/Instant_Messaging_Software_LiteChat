#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Welcome; }
QT_END_NAMESPACE

class Welcome : public QWidget
{
    Q_OBJECT

    public:
        explicit Welcome(QWidget *parent = nullptr);
        ~Welcome();

    private slots:

    void on_go_login_clicked();

    void on_go_register_clicked();

    void on_minimize_clicked();

    void on_close_clicked();

private:
        Ui::Welcome *ui;
        QPoint m_point;
protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件
};

#endif // Welcome

