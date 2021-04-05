#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setCheckable(true);
    ui->radioButton_2->setCheckable(true);
    ui->radioButton_3->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    QFont f=ui->label->font();
    if(arg1)
    {

        f.setItalic(true);
        ui->label->setFont(f);
    }
    else
       {
        f.setItalic(false);
        ui->label->setFont(f);
    }
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    QFont f=ui->label->font();
    if(arg1)
    {

        f.setBold(true);
        ui->label->setFont(f);
    }
    else
       {
        f.setBold(false);
        ui->label->setFont(f);
    }
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked)
       ui->label->setStyleSheet("color:red");
    else
        ui->label->setStyleSheet("color:black");
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if(checked)
       ui->label->setStyleSheet("color:blue");
    else
       ui->label->setStyleSheet("color:black");
}

void MainWindow::on_radioButton_3_clicked(bool checked)
{
    if(checked)
       ui->label->setStyleSheet("color:green");
    else
       ui->label->setStyleSheet("color:black");
}
