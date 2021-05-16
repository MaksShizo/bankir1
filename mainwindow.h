#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "stavka.h"

namespace Ui {
class MainWindow;
}
class stavka;
class dialog;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int x=0;
    int y=0;
    double c=0;
    double a=0;
    double g=0;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_Summa_vvod_valueChanged(int arg1);

    void on_Godovaya_vvod_valueChanged(double arg1);

    void on_Srok_vvod_valueChanged(int arg1);

    void on_pushButton_5_clicked();

private:
    QLabel *label;
    QLabel *label_6;
    Ui::MainWindow *ui;
    dialog *window;
    stavka *window2;
};

#endif // MAINWINDOW_H
