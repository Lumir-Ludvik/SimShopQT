#include "shoppingcart.h"
#include "ui_shoppingcart.h"

shoppingCart::shoppingCart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shoppingCart)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

shoppingCart::~shoppingCart()
{
    delete ui;
}

void shoppingCart::on_mainPageButton_clicked()
{
    emit MainClicked();
}

void shoppingCart::on_shippmentButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void shoppingCart::on_shoppingCartButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void shoppingCart::on_customerInfoButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void shoppingCart::on_payAndShipButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void shoppingCart::on_mainOrderButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    emit MainClicked();
}

void shoppingCart::on_submitButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
