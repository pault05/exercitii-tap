#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <QMessageBox>
#include <QtGui>
#include <QLabel>
#include <string>
#include <QString>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonConvert,
            SIGNAL(clicked(bool)),
            this,
            SLOT(clickpebuton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


double MainWindow::convertCtoF(double grad)
{
    grad = (grad * (9.0 / 5)) + 32;
    return grad;
}

double MainWindow::convertFtoC(double grad)
{
    grad = (grad - 32) * (5.0 / 9);
    return grad;
}

void MainWindow:: clickpebuton()
{

    QString grad = ui->lineEditInput->text();


    double gradD=QString(grad).toDouble();

    if(ui->radioButtonC->isChecked())
    {
        gradD = convertCtoF(gradD);

        QString gradNouC = QString::number(gradD);

        ui->labelResult->setText(gradNouC);

    }


    if(ui->radioButtonF->isChecked())
    {
        gradD = convertFtoC(gradD);

        QString gradNouF = QString::number(gradD);

        ui->labelResult->setText(gradNouF);

    }

}
