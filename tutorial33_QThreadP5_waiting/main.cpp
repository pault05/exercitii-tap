#include <QCoreApplication>
#include "mythread.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread;

    mThread.start();

    mThread.wait();

    //codul de aici nu se executa

    qDebug() << "Done !";

    return a.exec();
}
