#include "UI/welcome.h"

#include <QApplication>
#include <QMouseEvent>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Welcome w;
    w.show();
    return a.exec();
}
