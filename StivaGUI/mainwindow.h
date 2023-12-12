#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtCore>
#include <QDebug>
#include <QMessageBox>
#include <QtGui>
#include <QLabel>
#include <string>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};


class Array_Stack{

private:
    int* vector;
    int top;
    int max;

public:
    Array_Stack(int max = 100);
    //Array_Stack(const Array_Stack&);

    ~Array_Stack();

    virtual void push(int);
    virtual int pop();
    virtual int peek();
    virtual bool isempty();
    virtual bool isfull();
    //virtual void print(Array_Stack s);

};

#endif // MAINWINDOW_H
