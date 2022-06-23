#ifndef EXCEL_VIEWCONTROLLER_H
#define EXCEL_VIEWCONTROLLER_H

#include "grafi/graphcontrollerinterface.h"
#include "excel_View/Excel_View.h"
class Excel_View ;

class Excel_viewController:public GraphControllerInterface
{
    Q_OBJECT
private:
    //Excel_View* e;
public:
    Excel_viewController(Excel_View* e,GraphData* graphdata);
};

#endif // EXCEL_VIEWCONTROLLER_H
