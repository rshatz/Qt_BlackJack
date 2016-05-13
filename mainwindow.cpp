#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("BlackJack");
    tableImage = new QLabel;
    tableImage->setPixmap(QPixmap(":/table.jpg"));

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(tableImage);

    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{

}
