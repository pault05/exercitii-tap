#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//apare deoarece am creat mydialog.ui
//daca apas new windows, se executa codul de mai jos
void MainWindow::on_actionNew_Windows_triggered()
{
    /*
    MyDialog myDialog;
    myDialog.setModal(true);  //afisare fara pointer
    myDialog.exec();
    //myDialog.show();
*/
    myDialog = new MyDialog(this);
    myDialog->show();

}

