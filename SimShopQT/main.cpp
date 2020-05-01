#include "stdafx.h"
#include "simshopqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SimShopQT w;
	w.show();
	return a.exec();
}
