#include "dialog.h"
#include "ui_dialog.h"
#include <QLabel>

dialog::dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}



dialog::~dialog()
{
    delete ui;
}

void dialog::on_pushButton_4_clicked()
{
    hide();
    window3 = new MainWindow(this);
    window3->show();
}

void dialog::on_pushButton_8_clicked()
{
    hide();
    window4 = new stavka(this);
    window4->show();
}
