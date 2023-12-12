#include "dialog.h"
#include "./ui_dialog.h"
#include <iostream>
using namespace std;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

//cand se apasa ok se executa :
void Dialog::on_pushButton_clicked()
{

}



