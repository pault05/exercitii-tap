#include <QCoreApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QString servername = "LOCALHOST\\SQLEXPRESS";

//    QString dbname = "test";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setConnectOptions();

    QString dsn = QString("C:\\Users\\paul_\\Desktop\\TAP\\Lab\\QT Tutoriale\\tutorial52_Basic_SQL_Query_QT\\db");

    db.setDatabaseName(dsn);

    if(db.open())
    {
        qDebug() << "Opened!";

        QSqlQuery qry;

        if(qry.exec("SELECT * FROM [persoane].[db]"))
        {
            while(qry.next())
            {
                qDebug() << qry.value(0).toString() << " " << qry.value(1).toString();
            }
        }
        else
        {
        qDebug() << "ERROR = " << db.lastError().text();
        }

        qDebug() <<"Closing";
        db.close();
    }
    else
    {
        qDebug() << "ERROR = " << db.lastError().text();
    }



    return a.exec();
    return 0;
}
