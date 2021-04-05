#include "yogeshwari_cia2_212218104188.h"
#include "ui_yogeshwari_cia2_212218104188.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>

yogeshwari_cia2_212218104188::yogeshwari_cia2_212218104188(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::yogeshwari_cia2_212218104188)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));
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

yogeshwari_cia2_212218104188::~yogeshwari_cia2_212218104188()
{
    delete ui;
}


void yogeshwari_cia2_212218104188::on_pushButton_toggled(bool checked)
{
    if(checked)
        {
            ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));

            qDebug() <<"Button Checked --ON--";
        }
        else
        {
            ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/off1.jpeg"));

            qDebug() <<"Button Checked --OFF--";
        }
}

void yogeshwari_cia2_212218104188::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Yogeshwari_212218104188","THIS IS INFORMATION BOX");
}

void yogeshwari_cia2_212218104188::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
       reply=QMessageBox::question(this,"Yogeshwari_212218104188","Do you like apples?",QMessageBox::Yes| QMessageBox::No);
        if(reply==QMessageBox::Yes)
        {
             QMessageBox::information(this,"Yogeshwari_212218104188","Yes");
        }
        else
        {
             QMessageBox::information(this,"Yogeshwari_212218104188","No");
        }
}

void yogeshwari_cia2_212218104188::on_pushButton_5_clicked()
{
    QMessageBox:: warning(this,"Yogeshwari_212218104188","This is a warning message");

}

void yogeshwari_cia2_212218104188::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton reply;
       reply=QMessageBox::question(this,"Yogeshwari_212218104188","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
       if(reply==QMessageBox::No)
       {
           qDebug() <<"Nothing is displayed";
       }
       else
       {
           QMessageBox::warning(this,"Yogeshwari_212218104188","Dont display the message with warning as YesToAll");
       }
}
