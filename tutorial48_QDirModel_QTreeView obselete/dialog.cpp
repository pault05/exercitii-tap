#include "dialog.h"
#include "./ui_dialog.h"
#include <QDir>
#include <QtWidgets>
#include <QWidget>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);              //obselete class

    model = new QAbstractItemView(this);

    ui->treeView;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked() //make dir
{

}


void Dialog::on_pushButton_2_clicked()  //delete
{

}

