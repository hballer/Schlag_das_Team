#include <QtGui/QApplication>
#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller w;
    w.show();

    return a.exec();
}
