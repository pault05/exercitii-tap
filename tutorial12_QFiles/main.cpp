#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

// scriere - citire fisier

void Write(QString Filename)
{
    QFile mFile(Filename);

        if(!mFile.open(QFile::WriteOnly | QFile::Text))
        {
            qDebug() << "Could not open file for writing";
            return;
        }

        QTextStream out(&mFile);
        out<< "Hello world!";
        mFile.flush();

    mFile.close();
}

void Read(QString Filename)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
            qDebug() << "Could not open file for reading";
            return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "C:/Users/paul_/Desktop/TAP/Lab/QT Tutoriale/myfile.txt";

    Write(mFilename);

    Read(mFilename);

    return a.exec();
}
