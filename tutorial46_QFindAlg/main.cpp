#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    list << 1 << 2 << 5 << 20 << 15;

    QList<int>::const_iterator Iter = std::find(list.begin(), list.end(), 15);

    if(Iter != list.end())
    {
        qDebug() << "found " << *Iter;
    }
    else
    {
        qDebug() << "not found";
    }
    return a.exec();
}
