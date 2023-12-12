#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myString="hello";

    //qDebug() <<"Hello World";
    qDebug()<<myString;

    return a.exec();
}
