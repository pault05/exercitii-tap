#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QString>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   // QDir mDir("C:/Users/paul_/Desktop/TAP/Lab/QT Tutoriale");

   // qDebug() << mDir.exists();  // exista directorul x?

    //QDir mDir;
    //QString mPath = "C:/Users/paul_/Desktop/TAP/Lab/QT Tutoriale/ZZZ";



    /*
    foreach (QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteFilePath();  //all drives + alte functii
    }
*/



    /*
    if(!mDir.exists(mPath)){
        mDir.mkpath(mPath);
        qDebug() << "Created !";
    }                                       //creeaza fisier
    else
    {
        qDebug() << "Already exists !";
    }
*/


    QDir mDir("C:/Users/paul_/Desktop/TAP/Lab/QT Tutoriale/");

    foreach(QFileInfo mItm, mDir.entryInfoList())
    {

                                                             // path ul
        if(mItm.isDir())
        {
            qDebug() << "Dir: " << mItm.absoluteFilePath();
        }
                                                                //fisier sau dir?
        if(mItm.isFile())
            {
            qDebug() << "File: " <<mItm.absoluteFilePath();
            }
    }



    return a.exec();
}
