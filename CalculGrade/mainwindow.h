#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QDebug>
#include <QMessageBox>
#include <QtGui>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow       //clasa principala
                   //public class Fereastra extends JFrame
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    double setGrade(double grade);

    double convertCtoF(double grade);

    double convertFtoC(double grade);

    double grad;

private:
    Ui::MainWindow *ui;

private slots: //metode de tratare a unor evenimente
               //semnale SIGNAL
    void clickpebuton();

};

#endif // MAINWINDOW_H
