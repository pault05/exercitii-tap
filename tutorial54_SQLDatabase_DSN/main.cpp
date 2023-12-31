#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setHostName("C:\\Users\\paul_\\Desktop\\TAP\\Lab\\QT Tutoriale\\tutorial52_Basic_SQL_Query_QT\\db");

    db.setDatabaseName("mydsn64");

    if(db.open())
    {
        qDebug() << "opened";
        db.close();
    }
    else
    {
        qDebug() << db.lastError().text();
    }


    return a.exec();
}
