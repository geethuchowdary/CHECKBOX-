#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QDebug>
#include <QFont>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setCheckable(true);
    ui->radioButton_2->setCheckable(true);
    ui->radioButton_3->setCheckable(true);
    //QTextStream ConsOut(stdout);
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

        qDebug()<<"Italic Is Checked";
        f.setItalic(true);
        ui->label->setFont(f);
    }
    else
       {
        qDebug()<<"Italic Is Unchecked";
        f.setItalic(false);
        ui->label->setFont(f);
    }
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    QFont f=ui->label->font();
    if(arg1)
    {
        qDebug()<<"Bold Is Checked";
        f.setBold(true);
        ui->label->setFont(f);
    }
    else
       {
        qDebug()<<"Bold Is Unchecked";
        f.setBold(false);
        ui->label->setFont(f);
    }
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked)
    {
       qDebug()<<"Red Color Is Checked";
       ui->label->setStyleSheet("color:red");
    }
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if(checked)
    {
       qDebug()<<"Blue Color Is Checked";
       ui->label->setStyleSheet("color:blue");
    }
}

void MainWindow::on_radioButton_3_clicked(bool checked)
{
    if(checked)
    {
       qDebug()<<"Green Color Is Checked";
       ui->label->setStyleSheet("color:green");
    }
}
