#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QWidget>


namespace Ui {
class shoppingCart;
}

class shoppingCart : public QWidget
{
    Q_OBJECT

public:
    explicit shoppingCart(QWidget *parent = nullptr);
    ~shoppingCart();


private slots:
    void on_mainPageButton_clicked();

    void on_shippmentButton_clicked();

    void on_shoppingCartButton_clicked();

    void on_customerInfoButton_clicked();

    void on_payAndShipButton_clicked();

    void on_mainOrderButton_clicked();

    void on_submitButton_clicked();

private:
    Ui::shoppingCart *ui;

signals:
    void MainClicked();
};

#endif // SHOPPINGCART_H
