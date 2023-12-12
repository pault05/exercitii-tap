#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtGui>
#include <QtCore>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StatLabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusbar->addPermanentWidget(StatLabel);
    ui->statusbar->addPermanentWidget(StatProgress, 1);
    StatProgress->setTextVisible(false);

    StatLabel->setText("hello");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDo_something_triggered()
{
    ui->statusbar->showMessage("Hello");     //hello, 2000 pt durata
    StatProgress->setValue(50);
}

