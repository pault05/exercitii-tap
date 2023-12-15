#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent =0);
    MyThread();
    void run();
    bool Stop;

signals:
    void NumberChanged(int);
};

#endif // MYTHREAD_H
