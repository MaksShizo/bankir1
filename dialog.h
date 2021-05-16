#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QLabel>
#include "stavka.h"
#include "mainwindow.h"


namespace Ui
{
class dialog;
}
class stavka;
class MainWindow;
class dialog : public QMainWindow
{
    Q_OBJECT
public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();
    QString value();

private slots:


    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

private:
    QLabel *label;
    Ui::dialog *ui;
    MainWindow *window3;
    stavka *window4;
};


#endif // DIALOG_H
