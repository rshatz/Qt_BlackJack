#include "mainwindow.h"
#include <QApplication>
#include "Deck.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Deck deck;
    w.show();

    return a.exec();
}
