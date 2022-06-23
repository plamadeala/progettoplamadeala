#include "excel_view_controller.h"

Excel_View_Controller::Excel_View_Controller(GraphData* graphdata):GraphControllerInterface(graphdata)
{
    //connect(this,&Excel_viewController::changedSize,e,&ViewGraphInterface::NewShape);
    //connect(e,&Excel_View::getValue,this,&Excel_viewController::get_value);
    //connect(this,&Excel_viewController::value_Changed,e,&Excel_View::gotValue);
    emit changedSize(graph->get_Qsize());
}
