#include <QCoreApplication>
#include <QDebug>
#include <QList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for(int i=0; i<10; ++i)
    {
        List.append(i);
    }

    QListIterator<int> Iter(List);

    Iter.toBack();
    while(Iter.hasPrevious())        //hasNext
    {
        qDebug() << Iter.previous();        //next
        if(Iter.hasPrevious())
        {
            qDebug() << " next: " << Iter.peekPrevious();
        }
    }
    return a.exec();
}
