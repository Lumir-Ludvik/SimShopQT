#ifndef SHIPPMENTANDPAYMENT_H
#define SHIPPMENTANDPAYMENT_H

#include <QWidget>


namespace Ui {
class shippmentAndPayment;
}

class shippmentAndPayment : public QWidget
{
    Q_OBJECT

public:
    explicit shippmentAndPayment(QWidget *parent = nullptr);
    ~shippmentAndPayment();

private:
    Ui::shippmentAndPayment *ui;
};

#endif // SHIPPMENTANDPAYMENT_H
