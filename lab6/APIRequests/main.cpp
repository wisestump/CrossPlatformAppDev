#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qDebug() << QSslSocket::supportsSsl();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
