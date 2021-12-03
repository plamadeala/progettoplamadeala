#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <iostream>
#include <QObject>
QT_CHARTS_USE_NAMESPACE
QPieSlice *slice;
void simplefunction(bool val){
    if (val){
        slice->setExploded();
        slice->setLabelVisible();
    }else{
        slice->setExploded(false);
        slice->setLabelVisible(false);
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//![1]
    QPieSeries *series = new QPieSeries();
    series->append("Jane", 1);
    series->append("Joe mama", 20);
    series->append("Andy", 3);
    series->append("Barbara", 4);
    series->append("Axel", 5);
//![1]

//![2]
    slice = series->slices().at(1);
    QObject::connect(slice, &QPieSlice::hovered,simplefunction);
    /*slice->setExploded();
    slice->setLabelVisible();*/
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::red);
    std::cout<<"hello"<< std::endl;
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
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(400, 300);
    window.show();
//![5]

    return a.exec();
}
