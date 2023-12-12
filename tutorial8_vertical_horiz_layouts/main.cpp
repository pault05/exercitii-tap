#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>    //horizontal layout
#include <QVBoxLayout>    //vertical layout

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);  //app loop

    QWidget *window = new QWidget;  //creez fereastra / aplicatia
    window->setWindowTitle("My App"); //titlul ferestrei

    QPushButton *button1 = new QPushButton("one");

    QPushButton *button2 = new QPushButton("two");   //introduc butoane

    QPushButton *button3 = new QPushButton("three");

   // QHBoxLayout *hlayout = new QHBoxLayout;  //creare layout
    QVBoxLayout *vlayout = new QVBoxLayout;

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);  //asociez layout butoanelor
    vlayout->addWidget(button3);

    window->setLayout(vlayout);  //layoutul ferestrei

    window->show();  //afiseaza fereastra

    return app.exec();
}
