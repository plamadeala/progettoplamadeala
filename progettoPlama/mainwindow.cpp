#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <iostream>
#include <QTableWidget>
#include <QObject>
#include "grafi/graph.h"
QT_CHARTS_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//![1]
    QPieSeries *series = new QPieSeries();
    series->append("Jane", 1);
    series->append("Joe mama", 20);
    series->append("Andy", 3);
    series->append("Barbara", 4);
    series->append("Axel", 5);
//![1]

//![2]
    QPieSlice *slice;
    slice = series->slices().at(1);
    //QObject::connect(slice, &QPieSlice::hovered,simplefunction);
    slice->setExploded();
    slice->setLabelVisible();
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::red);
    //std::cout<<"hello"<< std::endl;
//![2]

//![3]
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple piechart example");
    chart->legend()->hide();
//![3]

//![4]
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
//![4]
//![5]
    //setCentralWidget(chartView);W
    QGridLayout *table=findChild<QGridLayout *>("excel_view");
    /*for (int i=0;i<10;i++){
           table->addWidget(new QTextEdit(),0,i);
    }*/
    graph *grafo = new graph(2,2);
    table->addWidget(new QTextEdit(),0,0);
    for(int i=0;i<grafo->get_column_amount();i++){
        QTextEdit *text=new QTextEdit(QString::fromStdString(grafo->get_column_name(i)));
        //text.set
        table->addWidget(text,0,i+1);
    }
    for(int i=0;i<grafo->get_row_amount();i++){
        QTextEdit *text=new QTextEdit(QString::fromStdString(grafo->get_row_name(i)));
        //text.set
        table->addWidget(text,i+1,0);
    }
    for(int i=0;i<grafo->get_column_amount();i++){
        for(int j=0;j<grafo->get_row_amount();j++){
            QTextEdit *text=new QTextEdit(QString::fromStdString(std::to_string(grafo->get_value(i,j))));
            //text.set
            table->addWidget(text,i+1,j+1);
        }
    }

    //table->addWidget(new QTextEdit(),0,5);
    //table->addWidget(chartView,1,4);
    //table->setIndexWidget(table->indexAt(point),chartView);
    //delete table;
    resize(400, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

