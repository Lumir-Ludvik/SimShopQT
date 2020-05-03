#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QItemSelection>
#include <QWidget>

namespace Ui {
class mainPage;
}

class mainPage : public QWidget
{
    Q_OBJECT

public:
    explicit mainPage(QWidget *parent = nullptr);
    ~mainPage();

private slots:
    void on_catListView_activated(const QModelIndex &index);

    void on_addToCartButton_clicked();

    void on_addToCartButton_2_clicked();

    void on_addToCartButton_3_clicked();

    void on_addToCartButton_4_clicked();

    void on_addToCartButton_5_clicked();

    void on_addToCartButton_6_clicked();

private:
    Ui::mainPage *ui;
    void handleSelectionChanged(const QItemSelection &selection);
    void changeToFruit();
    void changeToMeat();
    void changeToDurable();
    void changeToDrinks();
    void changeToDrugs();
    void changeToSpecial();
};

#endif // MAINPAGE_H
