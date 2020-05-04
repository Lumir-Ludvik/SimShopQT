#include <qstringlistmodel.h>
#include <string.h>
#include "mainpage.h"
#include "ui_mainpage.h"
#include "shoppingcart.h"

mainPage::mainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainPage)
{
    ui->setupUi(this);
    QStringListModel *model = new QStringListModel(this);
    QStringList list;
    list << "Ovove a zelenina" << "Maso!" << "Trvanlive potraviny" << "Napoje" << "Lekarna a drogerie" << "Specialni nabidky";
    model->setStringList(list);
    ui->catListView->setModel(model);
    ui->catListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
   connect(ui->catListView->selectionModel(),
          SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
          this, SLOT(handleSelectionChanged(QItemSelection)));
    ui->catLabel->setText("Ovove a zelenina");
    changeToFruit();
}

mainPage::~mainPage()
{
    delete ui;
}

void mainPage::handleSelectionChanged(const QItemSelection& selection)
{
    if(!selection.indexes().isEmpty())
    {
      on_catListView_activated(selection.indexes().first());
    }
}

void mainPage::changeToFruit()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Jablko", "Banan", "Okurka", "Meloun", "Broskev", "Rajce"};
    QString prices[6] {"Cena: 28.99", "Cena: 24.99", "Cena: 15.99", "Cena: 9.5", "Cena: 53.89", "Cena: 33.5"};
    QString goods[6] {":/01/images/01/apple.png", ":/01/images/01/banana.png", ":/01/images/01/cucumber.png", ":/01/images/01/melon.png", ":/01/images/01/peach.png", ":/01/images/01/tomato.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);
        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::changeToMeat()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Hovezi jazyk", "Veprova kotleta", "Kralik cely", "Veprova krkovice", "Veprove droby", "Veprovy bok"};
    QString prices[6] {"Cena: 114.99", "Cena: 130", "Cena: 150.5", "Cena: 104", "Cena: 80.99", "Cena: 98.5"};
    QString goods[6] {":/02/images/02/jazyk.png", ":/02/images/02/kotleta.png", ":/02/images/02/kralik.png", ":/02/images/02/krkovice.png", ":/02/images/02/srdce.png", ":/02/images/02/bok.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);
        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::changeToDurable()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Fazole", "Krupice", "Ryze", "Spagety", "Mouka", "Hrach"};
    QString prices[6] {"Cena: 26.5", "Cena: 20.99", "Cena: 40.25", "Cena: 23.5", "Cena: 9.89", "Cena: 21.5"};
    QString goods[6] {":/04/images/04/fazole.png", ":/04/images/04/krupice.png", ":/04/images/04/ryze.png", ":/04/images/04/spaghet.png", ":/04/images/04/mouka.png", ":/04/images/04/hrach.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);
        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::changeToDrinks()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Kofola", "Pepsi", "Rajec", "Jablecny juice", "Svijany", "Russian standard"};
    QString prices[6] {"Cena: 20.5", "Cena: 20.99", "Cena: 18.25", "Cena: 25.99", "Cena: 13", "Cena: 250"};
    QString goods[6] {":/03/images/03/kofola.png", ":/03/images/03/pepsi.png", ":/03/images/03/rajec.png", ":/03/images/03/relax.png", ":/03/images/03/svijany.png", ":/03/images/03/vodka.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);
        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::changeToDrugs()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Brufen 400", "Gutalax", "Paracetamol", "Simpers", "Proenzi", "Nasivin"};
    QString prices[6] {"Cena: 120.5", "Cena: 150.5", "Cena: 130", "Cena: 350.89", "Cena: 700.99", "Cena: 200.25"};
    QString goods[6] {":/05/images/05/brufen.png", ":/05/images/05/gutalax.png", ":/05/images/05/paracentanol.png", ":/05/images/05/plenky.png", ":/05/images/05/proenzi.png", ":/05/images/05/nasivin.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);
        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::changeToSpecial()
{
    QLabel *itemLabels[6] {ui->item, ui->item_2, ui->item_3, ui->item_4, ui->item_5, ui->item_6};
    QLabel *priceLables[6] {ui->price, ui->price_2, ui->price_3, ui->price_4, ui->price_5, ui->price_6};
    QLabel *goodsPics[6] {ui->goods, ui->goods_2, ui->goods_3, ui->goods_4, ui->goods_5, ui->goods_6};

    QString items[6] {"Simeros", "Simanek", "Pirate brown", "Sim Faktor", "Simkanicek", "SimFerro"};
    QString prices[6] {"Cena: 69.69", "Cena: 22.5", "Cena: 130.99", "Cena: 120.99", "Cena: 16.5", "Cena: 34.99"};
    QString goods[6] {":/06/images/06/simeros.png", ":/06/images/06/simanek.png", ":/06/images/06/pirateBrown.png", ":/06/images/06/simFaktor.png", ":/06/images/06/simkanicek.png", ":/06/images/06/simerro.png"};

    for (int i = 0; i < 6; ++i) {
        itemLabels[i]->setText(items[i]);
        priceLables[i]->setText(prices[i]);

        QPixmap pixmap(goods[i]);
        int w = goodsPics[i]->width();
        int h = goodsPics[i]->height();
        goodsPics[i]->setPixmap(pixmap.scaled(w, h, Qt::KeepAspectRatio));
        goodsPics[i]->show();
    }
}

void mainPage::on_catListView_activated(const QModelIndex &index)
{
    switch (index.row()) {
        case 0:
    {
            ui->catLabel->setText("Ovoce a zelenina");
            changeToFruit();
    }
        break;
        case 1:
    {
            ui->catLabel->setText("Maso!");
            changeToMeat();
    }
        break;
        case 2:
    {
            ui->catLabel->setText("Trvanlive potraviny");
            changeToDurable();
    }
        break;
        case 3:
    {
            ui->catLabel->setText("Napoje");
            changeToDrinks();
    }
        break;
        case 4:
    {
            ui->catLabel->setText("Lekarna a drogerie");
            changeToDrugs();
    }
        break;
        case 5:
    {
            ui->catLabel->setText("Specialni nabidky");
            changeToSpecial();
    }
        break;
    }
}

void mainPage::on_addToCart_clicked()
{
    QString name = ui->item->text();
    QString price = ui->price->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}

void mainPage::on_addToCart_2_clicked()
{
    QString name = ui->item_2->text();
    QString price = ui->price_2->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}

void mainPage::on_addToCart_3_clicked()
{
    QString name = ui->item_3->text();
    QString price = ui->price_3->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}

void mainPage::on_addToCart_4_clicked()
{
    QString name = ui->item_4->text();
    QString price = ui->price_4->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}

void mainPage::on_addToCart_5_clicked()
{
    QString name = ui->item_5->text();
    QString price = ui->price_5->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}

void mainPage::on_addToCart_6_clicked()
{
    QString name = ui->item_6->text();
    QString price = ui->price_6->text();
    QString item = name + " Kusu: 1 " + price;
    shoppingCart().SetCart(item);
}
