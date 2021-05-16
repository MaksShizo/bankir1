#include "stavka.h"
#include "ui_stavka.h"

stavka::stavka(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::stavka)
{
    ui->setupUi(this);
}

stavka::~stavka()
{
    delete ui;
}

void stavka::on_pushButton_7_clicked()
{
    hide();
    window5 = new MainWindow(this);
    window5->show();
}

void stavka::on_pushButton_4_clicked()
{
    hide();
    window6 = new dialog(this);
    window6->show();
}
