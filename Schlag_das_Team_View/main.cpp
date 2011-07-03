#include <QtGui/QApplication>
#include <iostream>

#include "view.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View w;
    w.show();
    //connect(server,SIGNAL(message(QString)),w,SLOT(ShowMessage(QString)))
    //QObject::connect(server.socket,SIGNAL(connected()),w,SLOT(Connected()));
    /**/
    return a.exec();
}
