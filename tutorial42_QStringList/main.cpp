#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList list;

    //list.append("Hello");

    QString line = "a,b,c,d,e,f,g";

    list = line.split(",");

    list.replaceInStrings("b", "batman");

    QString after = list.join(",");
    qDebug() << after;


    // foreach(QString itm, list)
    // {
    //     qDebug() << itm;
    // }

    return a.exec();
}
