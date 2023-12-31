#include <QCoreApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString servername = "LOCALHOST\\SQLEXPRESS";

    QString dbname = "test";

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();

    QString dsn = QString("DRIVER={SQL Native Client};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbname);

    db.setDatabaseName(dsn);

    if(db.open())
    {
        qDebug() << "Opened!";
        db.close();
    }
    else
    {
        qDebug() << "ERROR = " << db.lastError().text();
    }



    return a.exec();
    return 0;
}
