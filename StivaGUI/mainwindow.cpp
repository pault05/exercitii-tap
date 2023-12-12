#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <QMessageBox>
#include <QtGui>
#include <QLabel>
#include <string>
#include <QString>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


Array_Stack::Array_Stack(int max)
{
    this->max = max;
    this->top = 0;
    this->vector = new int[max];
}

Array_Stack::~Array_Stack()
{
    this->top = 0;
    this->max = 0;
    delete[] this->vector;
}


void Array_Stack::push(int n)
{
    if (!isfull())
    {
        this->vector[this->top] = n;
        this->top = this->top + 1;
    }
}


bool Array_Stack::isfull()
{
    if (this->top == this->max)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Array_Stack::isempty()
{
    if (this->top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int Array_Stack::pop()
{
    if (!isempty())
    {
        this->top = this->top - 1;
        return this->vector[this->top];
    }
    else
    {
        return 0;
    }
}


int Array_Stack::peek()
{
    qDebug("Stiva : ");
    while (!isempty())
    {
        cout<<this->vector[this->top - 1]<<" ";
        pop();
    }
    return 0;
}


void MainWindow::on_pushButton_clicked()
{

}

