#include "frirelists.h"
#include "ui_frirelists.h"
#include <QList>
#include <QString>
#include <QListWidget>
#include <QCheckBox>
#include <QDebug>
#include <QMessageBox>

void friReLists::InitialFrilists(const QList<QString> &newlist) // const QList<QString>& newlist
{
    frilists = newlist;
}

void friReLists::InitialFrilists()
{
    frilists.append("1234567");
    frilists.append("1512522");
    frilists.append("1215152");
    frilists.append("1928172");
}
void friReLists::clearFrilists()
{
    frilists.clear();
    qDebug() << frilists.count();

}
friReLists::friReLists(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::friReLists)
{
    ui->setupUi(this);
    InitialFrilists();
    // 获得好友列表
    ui->friendsList->clear();

    for(int i=0;i<frilists.size();i++)
    {
        QWidget *newWidget = new QWidget;
        QHBoxLayout *innerLayout = new QHBoxLayout;
        innerLayout->addWidget(new QLabel(frilists[i]));
        innerLayout->addWidget(new QCheckBox("同意",this));
        newWidget->setLayout(innerLayout);

        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(newWidget->sizeHint()); // 设置项目的大小
        ui->friendsList->addItem(item);
        ui->friendsList->setItemWidget(item, newWidget);
    }
}

/*
readyShowFriendRequest(UserInfo info)
{}
*/

friReLists::~friReLists()
{
    delete ui;
}

void friReLists::on_pushButton_clicked()
{
    QList<bool> checked;
    QListWidget* listWidget = ui->friendsList;
    for (int row = 0; row < listWidget->count(); ++row) {
        QListWidgetItem *item = listWidget->item(row);
        if (item) {
            QWidget *widget = listWidget->itemWidget(item);
            if (widget) {
                QCheckBox *checkBox = widget->findChild<QCheckBox*>(); // 假设 QCheckBox 是 widget 的子部件
                if (checkBox->isChecked()) {
                    checked.append(true);
                }
                else{
                    checked.append(false);
                }
                qDebug() << checked.last();
            }
        }
    }
    ui->friendsList->clear(); // 清空列表
    QMessageBox::about(this, tr("操作成功"), tr("操作成功"));
    clearFrilists();
    accept();
}

void friReLists::on_pushButton_2_clicked()
{
    accept();
}
