#ifndef PEREPLATA_H
#define PEREPLATA_H

#include <QMainWindow>

namespace Ui {
class pereplata;
}

class pereplata : public QMainWindow
{
    Q_OBJECT

public:
    explicit pereplata(QWidget *parent = nullptr);
    ~pereplata();

private:
    Ui::pereplata *ui;
    int x_per;
};

#endif // PEREPLATA_H
