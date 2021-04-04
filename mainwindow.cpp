#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QCheckBox>
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


void MainWindow::on_pushButton_clicked()
{
   QMessageBox::information(this,"yogeshwari 212218104188","THIS IS INFORMATION BOX");
}
void MainWindow::on_pushButton_2_clicked()
{

    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Yogeshwari_212218104188","Do you like Apple?",
                              QMessageBox::Yes | QMessageBox::No);
       if(reply==QMessageBox::Yes)
          {
           QMessageBox::information(this,"APPLE","YES");
       }
       else
       {
           QMessageBox::information(this,"APPLE","NO");
       }
}

void MainWindow::on_pushButton_3_clicked()
{

    QMessageBox:: StandardButton reply;

        reply=QMessageBox:: question(this,"Yogeshwari_212218104188","Do you like cats?",
                               QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);

        if(reply==QMessageBox::YesToAll)
            {
                QMessageBox::warning(this,"message display","display the message with warnind ass yestoall");
            }
        if(reply==QMessageBox::NoToAll)
            {
                QMessageBox::warning(this,"no message display","dont display the messsage with warning as yestoall");
        }

}
void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Critical message","This is a warning message");


}

void MainWindow::on_pushButton_6_clicked()
{

}
