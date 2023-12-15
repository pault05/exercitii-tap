#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QObject *parent): QThread(parent)
{

}

void MyThread::run()
{
    for(int i=0; i<1000; ++i)
    {
        qDebug() << i;
        msleep(500);
    }
}
