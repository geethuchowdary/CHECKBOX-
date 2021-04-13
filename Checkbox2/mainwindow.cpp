#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->cb1,SIGNAL(clicked(bool)),this,SLOT(on_checkboxclicked()));
    connect(ui->cb2,SIGNAL(clicked(bool)),this,SLOT(on_checkboxclicked()));
    connect(ui->cb3,SIGNAL(clicked(bool)),this,SLOT(on_checkboxclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_checkboxclicked()
{
    if(ui->cb1->isChecked())
       qDebug()<<"Option1 is Active";
    else
       qDebug()<<"Option1 is Not Active";
    if(ui->cb2->isChecked())
       qDebug()<<"Option2 is Active";
    else
       qDebug()<<"Option2 is Not Active";
    if(ui->cb3->isChecked())
       qDebug()<<"Option3 is Active";
    else
       qDebug()<<"Option3 is Not Active";
}
