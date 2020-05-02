#include "shippmentandpayment.h"
#include "ui_shippmentandpayment.h"

shippmentAndPayment::shippmentAndPayment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shippmentAndPayment)
{
    ui->setupUi(this);
}

shippmentAndPayment::~shippmentAndPayment()
{
    delete ui;
}
