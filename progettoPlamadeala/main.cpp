#include <iostream>
#include "mainwindow.h"
#include "grafi/graphcontrollerinterface.h"
#include "grafi/GraphData.h"
#include <QApplication>

#include "grafi/GraphData.h"
int main(int argc, char *argv[])
{
    //this will be done in controller
    //GraphData g(new QSize(3,5),1);
    //AbstractGraphController* graphC=new AbstractGraphController(&g);
    //graphC->set_value(1,1,3);
    //std::cout<<g<<std::endl;
    //std::cout<<g;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setMinimumSize(QSize(1000,500));
    return a.exec();
}
