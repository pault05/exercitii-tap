#include <QCoreApplication>
#include <QHash>
#include <QDebug>
int main(int argc, char *argv[])
{

    //mai rapid fata de QMap

    QCoreApplication a(argc, argv);

    QHash<int,QString> Employees;

    Employees.insert(1, "Bob");
    Employees.insert(2, "Mike");
    Employees.insert(3, "Ana");

    qDebug() << "3 = " << Employees.value(3);

    // foreach(int i, Employees.keys())
    // {
    //     qDebug() << Employees[i];
    // }

    // QHashIterator<int, QString> Iter(Employees);
    // while(Iter.hasNext())
    // {
    //     Iter.next();
    //     qDebug() << Iter.key() << " = " << Iter.value();
    // }

    return 0;
    return a.exec();
}
