#ifndef STAVKA_H
#define STAVKA_H

#include <QMainWindow>
#include "dialog.h"
#include "mainwindow.h"

namespace Ui {
class stavka;
}
class dialog;
class MainWindow;
class stavka : public QMainWindow
{
    Q_OBJECT

public:
    explicit stavka(QWidget *parent = nullptr);
    ~stavka();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    QLabel *label;
    Ui::stavka *ui;
    MainWindow *window5;
    dialog *window6;
};

#endif // STAVKA_H
