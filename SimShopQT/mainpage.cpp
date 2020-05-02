#include <qstringlistmodel.h>
#include "mainpage.h"
#include "ui_mainpage.h"

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
    ui->catListView->setEditTriggers(QAbstractItemView::DoubleClicked);
}

mainPage::~mainPage()
{
    delete ui;
}
