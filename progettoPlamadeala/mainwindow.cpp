#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):QWidget(parent)
{
    gridLayout = new QGridLayout();
    QSize* graphSize=new QSize(3,4);
    GraphData* g=new GraphData(graphSize,1);

    GraphControllerInterface* graphC=new GraphControllerInterface(g);
    //opzioni

    excel_view = new Excel_View(graphC);

    Grafico_view *grafico=new Grafico_view(graphC);

    grafico->Start();
    gridLayout->addWidget(excel_view,0,0);
    gridLayout->addWidget(grafico,0,1);
    setLayout(gridLayout);
}

MainWindow::~MainWindow()
{
}

