#ifndef VIEWGRAPHINTERFACE_H
#define VIEWGRAPHINTERFACE_H

#include <grafi/GraphData.h>
#include <QWidget>
#include <qsize.h>
#include <QGridLayout>
#include <QVBoxLayout>
#include <qlabel.h>
#include <grafi/graphcontrollerinterface.h>
class GraphControllerInterface;
class ViewGraphInterface : public QWidget
{
    Q_OBJECT
protected:
    GraphControllerInterface* controller;
public:
    ViewGraphInterface(GraphControllerInterface*);
    virtual void createView(const QSize* size)=0;
    //start once it all the components are connected.
    void Start();
private:
    //void connect(GraphController new_Controller);

signals:
    void getValue(int x,int y) const;
    void ChangeValue(int x,int y,double newValue);
    void changeRowColumns(int x,int y,QString &s);
    void getColumName(int column) ;
    void getRowName(int row) ;
    void getQsize();
public slots:
    virtual void NewShape(QSize* q);
    //void Changed_ColumnValue(int x,int y,QString newValue);
    virtual void gotValue(int x,int y,double newValue)=0;

    virtual void rowChanged(int y,QString s)=0;

    virtual void columnChanged(int x,QString s)=0;
};

#endif // VIEWGRAPHINTERFACE_H
