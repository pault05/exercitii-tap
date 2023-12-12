#ifndef MYTIMER_H
#define MYTIMER_H
#include <QtCore>


class MyTimer : QObject
{
    Q_OBJECT

public:
    MyTimer();
    QTimer *timer;

public slots:
    void MySlot();
};

#endif // MYTIMER_H
