#include "simshop.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimShop w;
    w.show();
    return a.exec();
}
