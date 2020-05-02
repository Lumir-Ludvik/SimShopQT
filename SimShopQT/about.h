#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class about;
}

class about : public QWidget
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

private slots:
    void on_aboutMainButton_clicked();

private:
    Ui::about *ui;

signals:
    void MainClicked();
};

#endif // ABOUT_H
