#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{

    //Qt -> HTML aware
    QApplication app(argc, argv);
    QLabel *label = new QLabel("<h2><font color = blue> Hello <font color = red> <i>world<i><font><h2>");

    label->show();

    return app.exec();
}
