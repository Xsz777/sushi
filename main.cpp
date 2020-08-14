#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QObject>
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("回转寿司店");
    w.show();
    QObject::connect(w.ui->pushButton,SIGNAL(clicked()),&a,SLOT(quit()));

   return a.exec();
}
