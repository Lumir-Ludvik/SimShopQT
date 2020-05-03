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
