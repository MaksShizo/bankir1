#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include "stavka.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    window = new dialog(this);
    window->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    window2 = new stavka(this);
    window2->show();
}

void MainWindow::on_Summa_vvod_valueChanged(int arg1)
{
    MainWindow::x=arg1;
    MainWindow::a;
    if(c==0) a=x/y;
    else a = x*(c*pow((c+1),y)/(pow((c+1),y)-1));
    if(a<=0 || y==0)a=0;
    g=a*y - x;
    a = round(a*100)/100;
    g = round(g*100)/100;
    ui->label->setText(QVariant(a).toString());
    ui->label_6->setText(QVariant(g).toString());
}

void MainWindow::on_Godovaya_vvod_valueChanged(double arg1)
{
    MainWindow::c=arg1/100;
    MainWindow::a;
    if(c==0) a=x/y;
    else a = x*(c*pow((c+1),y)/(pow((c+1),y)-1));
    if(a<=0 || y==0)a=0;
    g=a*y - x;
    a = round(a*100)/100;
    g = round(g*100)/100;
    ui->label->setText(QVariant(a).toString());
    ui->label_6->setText(QVariant(g).toString());
}

void MainWindow::on_Srok_vvod_valueChanged(int arg1)
{
    MainWindow::y=arg1;
    MainWindow::a;
    if(c==0) a=x/y;
    else a = x*(c*pow((c+1),y)/(pow((c+1),y)-1));
    if(a<=0 || y==0)a=0;
    g=a*y - x;
    a = round(a*100)/100;
    g = round(g*100)/100;
    ui->label->setText(QVariant(a).toString());
    ui->label_6->setText(QVariant(g).toString());
            //А=К*(П/(1+П)-М-1)
}
//QString toStr = QString::number(a,'g',6);


void MainWindow::on_pushButton_5_clicked()
{
    y=0;
    a=0;
    x=0;
    c=0;
}
