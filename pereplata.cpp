#include "pereplata.h"
#include "ui_pereplata.h"

pereplata::pereplata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pereplata)
{
    ui->setupUi(this);
}

pereplata::~pereplata()
{
    delete ui;
}
