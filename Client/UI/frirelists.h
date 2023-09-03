#ifndef FRIRELISTS_H
#define FRIRELISTS_H

#include <QDialog>

namespace Ui {
class friReLists;
}

class friReLists : public QDialog
{
    Q_OBJECT

public:
    explicit friReLists(QWidget *parent = nullptr);
    ~friReLists();

    QList<QString> frilists;
    void InitialFrilists(const QList<QString>& newlist);
    void InitialFrilists();
    void clearFrilists();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::friReLists *ui;
    // 获得好友列表

};

#endif // FRIRELISTS_H
