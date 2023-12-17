#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QLinkedList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLinkedList<int> list;

    List << 1 << 3 << 5;

    foreach(int i, List)
    {
        qDebug() << i;
    }
    return a.exec();
}
