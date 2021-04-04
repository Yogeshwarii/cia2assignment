#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/91978/Documents/cia2assignment/on.jpeg"));
    ui->pushButton->setCheckable(true);
    QAction *a1=new QAction;
    QAction *a2=new QAction;
    QAction *a3=new QAction;
    a1->setText("First");
    a2->setText("Second");
    a3->setText("Third");
    QMenu *menu=new QMenu;
    menu->addAction(a1);
    menu->addAction(a2);
    menu->addAction(a3);
    ui->pushButton_2->setMenu(menu);


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
    QMessageBox::StandardButton reply;
       reply=QMessageBox::question(this,"Custom message","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
       if(reply==QMessageBox::No)
       {
           qDebug() <<"Nothing is displayed";
       }
       else
       {
           QMessageBox::warning(this,"yogeshwari","Dont display the message with warning as YesToAll");
       }
}

void MainWindow::on_pushButton_5_clicked(bool checked)
{
    if(checked)
        {
            ui->pushButton->setIcon(QIcon("C:/Users/91978/Documents/cia2assignment/on.jpeg"));

            qDebug() <<"Button Checked --ON--";
        }
        else
        {
            ui->pushButton->setIcon(QIcon("C:/Users/91978/Documents/cia2assignment/off.jpeg"));

            qDebug() <<"Button Checked --OFF--";
        }
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Critical message","This is a warning message");

}


