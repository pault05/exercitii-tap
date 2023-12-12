#include "dialog.h"
#include "./ui_dialog.h"
#include <QtGui>
#include <QtCore>
#include <QDialog>
#include <QTreeWidgetItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);

    //ui->treeWidget->setHeaderLabel("col a");
    ui->treeWidget->setHeaderLabels(QStringList() << "one" << "two");

    AddRoot("1 hello", "world");
    AddRoot("2 hello", "world");
    AddRoot("3 hello", "world");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString Name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm -> setText(0, Name);
    itm -> setText(1, Description);
    ui -> treeWidget->addTopLevelItem(itm);

    AddChild(itm,"one", "hello");
    AddChild(itm,"two", "world");
}

void Dialog::AddChild(QTreeWidgetItem *parent, QString Name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();   //(ui->treeWidget)
    itm -> setText(0, Name);
    itm -> setText(1, Description);
    parent -> addChild(itm);
}

void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackground(0, Qt::red);
    ui->treeWidget->currentItem()->setBackground(1, Qt::blue);
}

