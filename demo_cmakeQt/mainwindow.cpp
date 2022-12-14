#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "integration_cmake/integration_cmake.h"
#include<QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    integration_cmake ic("hello");

    string labeltext=ic.getstring();

    s=QString::fromStdString(labeltext);

   //connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(textonlable(s)) );
}

//void MainWindow::textonlable(QString s2)
//{
//    ui->label->setText(s2);
//}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug()<<s;
   ui->label->setText(s);
}

