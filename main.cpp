#include "mainwindow.h"
#include "dialog_login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    dialog_login d ;
    d.exec();
    MainWindow w;
    w.show();
    return a.exec();
}
