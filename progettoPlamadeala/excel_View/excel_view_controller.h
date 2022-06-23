#ifndef EXCEL_VIEW_CONTROLLER_H
#define EXCEL_VIEW_CONTROLLER_H

#include <QObject>
#include <qlabel.h>

#include "excel_View/excel_viewcontroller.h"
#include "grafi/viewgraphinterface.h"

class Excel_View_Controller:public GraphControllerInterface
{
private:
        Excel_View* e;
public:
    Excel_View_Controller(GraphData* graphdata);
};

#endif // EXCEL_VIEW_CONTROLLER_H
