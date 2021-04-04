#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        connect(ui->checkBox_1,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
        connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
        connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::oncheckboxclicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_1->isChecked())
    {
        stream<<"Option 1 is Checked"<<Qt::endl;
    }
    else
    {
       stream<<"Option 1 is Unchecked"<<Qt::endl;
    }
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Option 2 is Checked\n";
    }
    else
    {
       stream<<"Option 2 is Unchecked\n";
    }
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Option 3 is Checked\n";
    }
    else
    {
       stream<<"Option 3 is Unchecked\n";
    }
}

