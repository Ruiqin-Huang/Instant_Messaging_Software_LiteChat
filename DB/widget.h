#ifndef DB_WIDGET_H
#define DB_WIDGET_H

#include <QWidget>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_listen_clicked(); //开始监听

    void showLog(QString);

    void autoScroll();

private:
    Ui::Widget *ui;
    QSqlTableModel  *model;      //数据模型对象

    int      lastClickRow; //最后点击行的行号变量
};
#endif // DB_WIDGET_H


