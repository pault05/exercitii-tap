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

        QString sQuery = "INSERT INTO persoane VALUES";

        QSqlQuery qry;

        qry.prepare(sQuery);

        qry.bindValue(":nume", "popa");
        qry.bindValue(":varsta", "25");

        if(qry.exec())
        {
            qDebug() << "inserted";
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
