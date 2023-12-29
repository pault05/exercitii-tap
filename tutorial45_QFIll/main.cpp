#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QtAlgorithms>
#include <QStringAlgorithms>
int main(int argc, char *argv[])
{
    //nu mai exista fill

    QCoreApplication a(argc, argv);

    QVector<QString> Vect(5);

    std::fill(Vect, "hello");

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }

    return a.exec();
}
