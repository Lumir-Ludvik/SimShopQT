#pragma once

#include <QtWidgets/QWidget>
#include "ui_simshopqt.h"

class SimShopQT : public QWidget
{
	Q_OBJECT

public:
	SimShopQT(QWidget *parent = Q_NULLPTR);

private:
	Ui::SimShopQTClass ui;
};
