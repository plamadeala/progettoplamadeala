#include <iostream>
#include "mainwindow.h"

#include <QApplication>

#include "grafi/GraphData.h"
int main(int argc, char *argv[])
{
    //this will be done in controller
    GraphData g(5,3,1);
    std::cout<<g;



    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
