#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
int flag = BASE;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}


MainWindow::~MainWindow()
{
    delete ui;
}




int MainWindow::on_pushButton_clicked()
{
    if (flag==BASE){
        ui->lbl->setText("ДОМА");
        ui->lbl_signal->setText("ГОООЛ");
        flag=BASE;
        return flag;
    }
    if (flag==ENTER){
        ui->lbl->setText("ТЮРЬМА");
        ui->lbl_signal->setText("ШТРАФ");
        flag=PRISON;
        return flag;
    }
    if (flag==ILL){
        ui->lbl->setText("ДОМА");
        ui->lbl_signal->setText("ГОООЛ");
        flag=BASE;
        return flag;
    }
    if (flag==PRISON){
        ui->lbl->setText("ТЮРЬМА");
        ui->lbl_signal->setText("ШТРАФ");
        flag=PRISON;
        return flag;
    }
}

int MainWindow::on_pushButton2_clicked()
{
    if (flag==BASE){
        ui->lbl->setText("ПРОГУЛКА");
        ui->lbl_signal->setText("ШТРАФ");
        flag=ENTER;
        return flag;
    }
    if (flag==ENTER){
        ui->lbl->setText("ДОМА");
        ui->lbl_signal->setText("ГОООЛ");
        flag=BASE;
        return flag;
    }
    if (flag==ILL){
        ui->lbl->setText("ТЮРЬМА");
        ui->lbl_signal->setText("ШТРАФ");
        flag=PRISON;
        return flag;
    }
    if (flag==PRISON){
        ui->lbl->setText("ДОМА");
        ui->lbl_signal->setText("ГОООЛ");
        flag=BASE;
        return flag;
    }
}


int MainWindow::on_pushButton3_clicked()
{
    if (flag==BASE){
        ui->lbl->setText("ПОЛИКЛИНИКА");
        ui->lbl_signal->setText("ПИЛЮЛЯ");
        flag=ILL;
        return flag;
    }
    if (flag==ENTER){
        ui->lbl->setText("ПОЛИКЛИНИКА");
        ui->lbl_signal->setText("ПИЛЮЛЯ");
        flag=ILL;
        return flag;
    }
    if (flag==ILL){
        ui->lbl->setText("ПОЛИКЛИНИКА");
        ui->lbl_signal->setText("ГОООЛ");
        flag=ILL;
        return flag;
    }
    if (flag==PRISON){
        ui->lbl->setText("ПОЛИКЛИНИКА");
        ui->lbl_signal->setText("ПИЛЮЛЯ");
        flag=ILL;
        return flag;
    }
}

