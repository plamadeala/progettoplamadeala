#include "graphcontrollerinterface.h"

GraphControllerInterface::GraphControllerInterface(GraphData* graph,QObject *parent) : QObject(parent)
{
    this->graph=graph;
    ConnecttoGraph();
}
void GraphControllerInterface::ConnecttoGraph(){

}
void GraphControllerInterface::get_graphQsize(){

    emit changedSize(graph->get_Qsize());
}

void GraphControllerInterface::set_value(int x,int y,double newValue){
    graph->set_value(x,y,newValue);
    emit value_Changed(x,y,newValue);
}
void GraphControllerInterface::rowColumnChanged(int x,int y,QString &s){
    if (x<0){
        graph->getNames()->set_column_name(y,s);
        emit value_Column(y,graph->getNames()->get_column_name(y));
        //std::cout<<*graph->getNames()<<std::flush;
    }
    if (y<0){
        graph->getNames()->set_row_name(x,s);
        emit value_Row(x,graph->getNames()->get_row_name(x));
        //std::cout<<*graph->getNames()<<std::flush;
    }

}
void GraphControllerInterface::get_value(int x,int y)const{
    emit value_Changed(x,y,graph->get_value(x,y));
}
void GraphControllerInterface::getColumName(int column) {
    emit value_Column(column,graph->getNames()->get_column_name(column));
}
void GraphControllerInterface::getRowName(int row){
    emit value_Row(row,graph->getNames()->get_row_name(row));
}
