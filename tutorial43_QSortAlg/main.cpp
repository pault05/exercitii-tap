#include <QCoreApplication>
#include <QList>
#include <QtCore>
#include <QtAlgorithms>
int main(int argc, char *argv[])
{

    //qSort nu mai exista in qt5.2+

    QCoreApplication a(argc, argv);

    QList<int> list;

    list << 2 << 3 << 1 << 0;

    std::sort(list.begin(), list.end());

    foreach(int i, list)
    {
        qDebug() << i;
    }

    return a.exec();
}
