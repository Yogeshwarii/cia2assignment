#ifndef YOGESHWARI_CIA2_212218104188_H
#define YOGESHWARI_CIA2_212218104188_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class yogeshwari_cia2_212218104188; }
QT_END_NAMESPACE

class yogeshwari_cia2_212218104188 : public QMainWindow
{
    Q_OBJECT

public:
    yogeshwari_cia2_212218104188(QWidget *parent = nullptr);
    ~yogeshwari_cia2_212218104188();

private slots:
    void on_pushButton_toggled(bool checked);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::yogeshwari_cia2_212218104188 *ui;
};
#endif // YOGESHWARI_CIA2_212218104188_H
