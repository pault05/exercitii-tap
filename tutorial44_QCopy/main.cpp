#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QVector>
#include <QtAlgorithms>
#include <QStringAlgorithms>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList list;
    list << "a" << "b" << "c";

    QVector<QString> vect(3);

    std::copy(list.begin(), list.end(), vect.begin());

    foreach(QString itm, vect)
    {
        qDebug() << itm;
    }

    return a.exec();
}
