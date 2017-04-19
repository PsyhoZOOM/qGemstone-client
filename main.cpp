#include "loginwindow.h"
#include <QApplication>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();
    qDebug() << "W SHOW "+ w.loggedIn;
     if(w.loggedIn){
        MainWindow mainWin;
        mainWin.show();
    }

    return a.exec();
}
