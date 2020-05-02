#ifndef SIMSHOP_H
#define SIMSHOP_H

#include <QWidget>
#include "about.h"
#include "mainpage.h"
#include "shoppingcart.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SimShop; }
QT_END_NAMESPACE

class SimShop : public QWidget
{
    Q_OBJECT

public:
    SimShop(QWidget *parent = nullptr);
    ~SimShop();

private slots:
    void on_aboutButton_clicked();

    void on_simShopButton_clicked();

    void on_shoppingCartButton_clicked();

    void moveMain();

private:
    Ui::SimShop *ui;
    about aboutPage;
    mainPage mainPage;
    shoppingCart shoppingCart;
};
#endif // SIMSHOP_H
