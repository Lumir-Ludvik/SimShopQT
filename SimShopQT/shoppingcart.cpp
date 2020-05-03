#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include <QStringListModel>

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
    CountPrice();
}

void shoppingCart::FillShoppingCart()
{
    QStringListModel *model = new QStringListModel(this);
    QStringList list;
    for (uint i = 0; i < Cart::cartVector.size(); i++)
    {
        list << Cart::cartVector[i];
    }
    model->setStringList(list);
    ui->shoppingCartView->setModel(model);
    ui->shoppingCartView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void shoppingCart::SetCart(QString item)
{
    std::vector<QString>::iterator it = std::find(Cart::cartVector.begin(), Cart::cartVector.end(), item);
    if(it != Cart::cartVector.end())
    {
        int index = std::distance(Cart::cartVector.begin(), it);
        QStringList itemSplit = item.split(" ");
        int count = itemSplit[2].toInt();
        double price = itemSplit[4].toDouble();
        count++;
        price *= count;
        itemSplit.replace(2, QString::number(count));
        itemSplit.replace(4, QString::number(price));
        QString itemRestructured = itemSplit[0] + " " + itemSplit[1] + " " + itemSplit[2] + " " + itemSplit[3] + " " + itemSplit[4];
        Cart::cartVector[index] = itemRestructured;
    }
    else
    {
        Cart::cartVector.push_back(item);
    }
}

void shoppingCart::CountPrice()
{
    double price = 0;
    for (uint i = 0; i < Cart::cartVector.size(); i++)
    {
        double itemPrice = Cart::cartVector[i].split(" ")[4].toDouble();
        price += itemPrice;
    }
    ui->priceLabel->setText("Celkova cena: " + QString::number(price) + " SimCoin");
}
