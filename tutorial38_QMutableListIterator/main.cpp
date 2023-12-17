#include <QCoreApplication>
#include <QList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    for(int i=0; i<10; ++i)
    {
        list.append(i);
    }

    QMutableListIterator<int> Iter(list);  //lista modificabila

    while(Iter.hasNext())
    {
        int i = Iter.next();
        if(i==5)
        {
            Iter.remove();
        }
    }

    Iter.toFront();

    while(Iter.hasNext())
    {
        qDebug() << Iter.next();
    }

    return 0;
    return a.exec();
}
