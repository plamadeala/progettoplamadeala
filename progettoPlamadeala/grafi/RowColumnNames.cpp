#include "RowColumnNames.h"

RowColumnNames::RowColumnNames(QSize* graph,QString defaultrowvalue,QString defaultcolumnvalue):
    graphSize(graph),
    columns(new std::vector<QString>(graphSize->height(),defaultcolumnvalue)),
    rows(new std::vector<QString>(graphSize->width(),defaultrowvalue))

{}

QString RowColumnNames::get_column_name(int column)const{
    return (*columns)[column];
}
QString RowColumnNames::get_row_name(int row)const{
    return (*rows)[row];
}
void RowColumnNames::set_column_name(int column,QString value){
    (*columns)[column]=value;
}

void RowColumnNames::set_row_name(int row,QString value){
    (*rows)[row]=value;
}

void RowColumnNames::Resize(int newHeight,int newWidth){}


std::ostream& operator<<(std::ostream& o,const RowColumnNames& g){
    o<<g.graphSize->width()<<":"<<g.graphSize->height()<<std::endl;
    for (int x=0;x<g.graphSize->width();x++){
        o<<g.get_row_name(x).toStdString()<<":";
    }
    o<<std::endl;
    for (int y=0;y<g.graphSize->height();y++){
        o<<g.get_column_name(y).toStdString()<<":";
    }
    o<<std::endl;
    return o;
}







