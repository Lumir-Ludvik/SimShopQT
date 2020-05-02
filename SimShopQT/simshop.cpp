#include "simshop.h"
#include "ui_simshop.h"

SimShop::SimShop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SimShop)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &aboutPage);
    ui->stackedWidget->insertWidget(2, &mainPage);
    ui->stackedWidget->insertWidget(3, &shoppingCart);
    ui->stackedWidget->setCurrentIndex(2);

    connect(&shoppingCart, SIGNAL(MainClicked()), this, SLOT(moveMain()));
    connect(&aboutPage, SIGNAL(MainClicked()),  this, SLOT(moveMain()));
}

SimShop::~SimShop()
{
    delete ui;
}

void SimShop::on_aboutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SimShop::on_simShopButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void SimShop::on_shoppingCartButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void SimShop::moveMain()
{
    ui->stackedWidget->setCurrentIndex(2);
}
