#ifndef DB_INTERFACE_CHECK_H
#define DB_INTERFACE_CHECK_H

#include <QWidget>

namespace Ui {
class db_interface_check;
}

class db_interface_check : public QWidget
{
    Q_OBJECT

public:
    explicit db_interface_check(QWidget *parent = nullptr);
    ~db_interface_check();

private slots:
    void on_pushButton_clicked();

private:
    Ui::db_interface_check *ui;
};

#endif // DB_INTERFACE_CHECK_H
