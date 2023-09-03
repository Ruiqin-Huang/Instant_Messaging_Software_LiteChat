#include "widget.h"
#include "ui_widget.h"

#include "servercontroller.h"
#include "Utilities/log.h"
#include "db_utils.h"
#include <QSqlError>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlField>
#include <QStandardItemModel>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("DBMananger");
    DataDB* db = DataDB::GetInstance();

    //数据模型初始化
    model = new QSqlTableModel(this, db->sqldb);

    ServerController::getResServerInstance()->start(6666);

    //获得日志并写入
    connect(Log::GetLogObj(), &Log::readyShowLog, this, &Widget::showLog);
    //自动滚动日志区域
    connect(ui->textBrowser, SIGNAL(cursorPositionChanged()), this, SLOT(autoScroll()));
    DataDB::GetInstance();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_comboBox_currentTextChanged(const QString &table)
{
    //指定数据源表
    model->setTable(table);
    //默认排序
    model->setSort(0, Qt::AscendingOrder);

    //设置数据更新模式(行/列某值更新时立即更新到数据库)
    //! QSqlTableModel::OnFieldChange 字段值变化时立即更新到数据库中
    //! QSqlTableModel::OnRowChange 当前行变化时才将修改值更新到数据库中
    //! QSqlTableModel::OnManualSubmit 修改是数据暂存，需要手动提交
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    if(!model->select())
    {
        qDebug() << "查询失败" << model->lastError().text();
        return;
    }

    //清空下拉选框
    ui->comboBox_2->clear();
    ui->comboBox_3->clear();

    //将表的属性加入下拉选框
    QSqlRecord record = model->record();
    for(int i=0;i<record.count();i++)
    {
            ui->comboBox_2->addItem(record.fieldName(i));
            ui->comboBox_3->addItem(record.fieldName(i));
    }

    //将数据模型设置到tableView控件上
    ui->tableView->setModel(model);
}


void Widget::on_pushButton_clicked()
{
        //增加一行空记录
        QSqlRecord record = model->record();
        int row = model->rowCount();
        qDebug()<<"row:"<<row;
        model->insertRecord(row,record);
}

void Widget::on_pushButton_2_clicked()
{
        if(model->rowCount() == 0)
            return;
        model->removeRow(lastClickRow);
        lastClickRow = 0;
}

void Widget::on_pushButton_3_clicked()
{
    model->revertAll();
}

void Widget::on_pushButton_4_clicked()
{
    model->submitAll();
}

void Widget::on_tableView_clicked(const QModelIndex &index)
{
    lastClickRow = index.row();
}

void Widget::on_pushButton_5_clicked()
{
    QString field = ui->comboBox_2->currentText();
    QString val = ui->lineEdit->text();
    model->setFilter(QString("%1 = '%2'").arg(field).arg(val));
}

void Widget::on_pushButton_6_clicked()
{
        Qt::SortOrder sortFlag = ui->radioButton->isChecked()? Qt::AscendingOrder: Qt::DescendingOrder;
        model->setSort(model->fieldIndex(ui->comboBox_3->currentText()), sortFlag);
        model->select();
}

void Widget::showLog(QString str){
        ui->textBrowser->append(str);
}

void Widget::autoScroll() {
        QTextCursor cursor =  ui->textBrowser->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textBrowser->setTextCursor(cursor);
}

void Widget::on_pushButton_listen_clicked()
{
        ServerController::getServerInstance()->stop();
        quint16 port = ui->lineEdit_port->text().toInt();  //获取服务器端口
        ServerController::getServerInstance()->start(port);
}
