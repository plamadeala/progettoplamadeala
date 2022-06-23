#ifndef GRAPHCONTROLLERINTERFACE_H
#define GRAPHCONTROLLERINTERFACE_H

#include <QObject>
#include <QWidget>
#include "grafi/GraphData.h"
#include "grafi/viewgraphinterface.h"

class GraphControllerInterface : public QObject
{
    Q_OBJECT
public:
    GraphData* graph;
    //connect signals and slots to the graphData
    void ConnecttoGraph();
public:
    GraphControllerInterface(GraphData* graph=nullptr,QObject *parent=nullptr);
signals:
    void changedSize(QSize* newSize)const;
    void value_Changed(int x,int y,double newValue)const;
    void value_Column(int column,QString colname);
    void value_Row(int row,QString rowname);
public slots:
    //change the data in the
    void get_graphQsize();
    void set_value(int x,int y,double newValuez);
    void get_value(int x,int y)const;
    void getColumName(int column) ;
    void getRowName(int row) ;
    void rowColumnChanged(int x,int y,QString &s);
};

#endif // GRAPHCONTROLLERINTERFACE_H
