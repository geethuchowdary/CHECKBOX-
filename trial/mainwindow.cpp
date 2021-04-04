#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream s(stdout);
    if(ui->checkBox->isChecked())
    {
        s<<"Bold is Checked!\n";
    }
    ui->label->setText("<font color='red'>Change Me</font>");
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream s(stdout);
    if(ui->checkBox_2->isChecked())
    {
        s<<"Italic is Checked!\n";
    }
    ui->label->setText("<font color='green'>Change Me</font>");
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream s(stdout);
    if(ui->radioButton->isChecked())
    {
        s<<"Left is Selected!\n";
    }
    ui->label->setText("<font color='orange'>Change Me</font>");
}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream s(stdout);
    if(ui->radioButton_2->isChecked())
    {
        s<<"Right is Selected!\n";
    }
    ui->label->setText("<font color='pink'>Change Me</font>");
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream s(stdout);
    if(ui->radioButton_3->isChecked())
    {
        s<<"Centre is Selected!\n";
    }
    ui->label->setText("<font color='maroon'>Change Me</font>");
}
