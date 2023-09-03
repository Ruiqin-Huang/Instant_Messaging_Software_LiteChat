#include "db_interface_check.h"
#include "ui_db_interface_check.h"

db_interface_check::db_interface_check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::db_interface_check)
{
    ui->setupUi(this);
}

db_interface_check::~db_interface_check()
{
    delete ui;
}

void db_interface_check::on_pushButton_clicked()
{

}
