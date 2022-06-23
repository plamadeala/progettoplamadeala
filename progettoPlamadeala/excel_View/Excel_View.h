#ifndef EXCEL_VIEW_H
#define EXCEL_VIEW_H

#include <grafi/GraphData.h>
#include <QWidget>
#include <qsize.h>
#include <QGridLayout>
#include <QDoubleValidator>
#include <qlabel.h>
#include <QVBoxLayout>
#include "grafi/graphcontrollerinterface.h"
#include "grafi/viewgraphinterface.h"
#include "excel_View/cell.h"
class Excel_View_Controller;

class Excel_View : public ViewGraphInterface
{
    Q_OBJECT
private:

    QVBoxLayout *mainLayout;
    QGridLayout *gridLayout;;
public:
    Excel_View(GraphControllerInterface* newController);
    void createView(const QSize* size);

public slots:
    virtual void NewShape(QSize* q);

    virtual void gotValue(int x,int y,double newValue);

    virtual void rowChanged(int y,QString s);

    virtual void columnChanged(int x,QString s);
};

#endif // EXCEL_VIEW_H
