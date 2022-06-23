#ifndef GRAFICO_VIEW_H
#define GRAFICO_VIEW_H

#include <QObject>
#include <QWidget>
#include <string>
#include <grafi/viewgraphinterface.h>
#include <QtCharts>

class Grafico_view : public ViewGraphInterface
{
    Q_OBJECT
private:
     QBarSeries  *series;
     QChart *chart;

     QBarCategoryAxis *axisX;
     QVBoxLayout *mainLayout;
public:
    Grafico_view(GraphControllerInterface* newController);
    void createView(const QSize* size);
public slots:
    virtual void gotValue(int x,int y,double newValue);

    virtual void rowChanged(int y,QString s);

    virtual void columnChanged(int x,QString s);
};

#endif // GRAFICO_VIEW_H
