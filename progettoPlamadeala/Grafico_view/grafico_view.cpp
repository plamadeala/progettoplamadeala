#include "grafico_view.h"

Grafico_view::Grafico_view(GraphControllerInterface* newController):ViewGraphInterface(newController),series(new QBarSeries())
{
    mainLayout = new QVBoxLayout(this);
    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
   /*
     QBarSet *set0 = new QBarSet("Jane");
     QBarSet *set1 = new QBarSet("John");
     QBarSet *set2 = new QBarSet("Axel");
     QBarSet *set3 = new QBarSet("Mary");
     QBarSet *set4 = new QBarSet("Samantha");

     *set0 << 1 << 2 << 3 << 4 << 5 << 6;
     *set1 << 5 << 0 << 0 << 4 << 0 << 7;
     *set2 << 3 << 5 << 8 << 13 << 8 << 5;
     *set3 << 5 << 6 << 7 << 3 << 4 << 5;
     *set4 << 9 << 7 << 5 << 3 << 1 << 2;

     series->append(set0);
     series->append(set1);
     series->append(set2);
     series->append(set3);
     series->append(set4);

     QStringList categories;
     categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
     QBarCategoryAxis *axisX = new QBarCategoryAxis();
     axisX->append(categories);
     chart->addAxis(axisX, Qt::AlignBottom);
     series->attachAxis(axisX);
*/

     QChartView *chartView = new QChartView(chart);
     chartView->setRenderHint(QPainter::Antialiasing);

     mainLayout->addWidget(chartView);
     setLayout(mainLayout);
}
void Grafico_view::createView(const QSize* size){
    QStringList categories = QStringList();
    for (int x=0;x<size->height();x++){
        categories << QString::number(x)+":cat";
    }
    axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    for (int x=0;x<size->width();x++){
        QBarSet *set0 = new QBarSet("colonna");
        for (int y=0;y<size->height();y++){
            *set0 << y+2 ;
            set0->replace(0,10);
        }
        series->append(set0);
    }
    for (int x=0;x<size->width();x++){
        for (int y=0;y<size->height();y++){
            emit getValue(x,y);
        }
        emit getRowName(x);
    }
    for (int y=0;y<size->height();y++){
        emit getColumName(y);
    }
}
void Grafico_view::gotValue(int x,int y,double newValue){
    //std::cout<<(series->barSets().count())<<std::endl;
    //std::cout<<x<<","<<y<<std::endl<<std::flush;
    //std::cout<<(series->barSets().count())<<std::endl;
    if(series->barSets().count()>=x){
        series->barSets().at(x)->replace(y,newValue);
    }
}
void Grafico_view::rowChanged(int y,QString s){
    //TODO
    series->barSets().at(y)->setLabel(s);
}
void Grafico_view::columnChanged(int x,QString s){
    //TODO
    QString g=QString::number(x)+":"+s;
    axisX->replace(axisX->categories().at(x),g);

}

