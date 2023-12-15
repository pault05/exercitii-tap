#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>

//tutoriale 28 39 30

class MyThread : public QThread
{
public:
    MyThread();
    void run();
    QString name;
    bool Stop;
};

#endif // MYTHREAD_H
