#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("C:\\Users\\paul_\\Desktop\\TAP\\Lab\\QT Tutoriale\\tutorial52_Basic_SQL_Query_QT\\db");

    db.setDatabaseName("db");
    db.open();

    this->model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM [persoane]");

    ui->tableView->setModel(model);

}

Dialog::~Dialog()
{
     db.close();
    delete ui;
}
