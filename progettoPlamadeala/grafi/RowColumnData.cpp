#include "RowColumnData.h"

RowColumnData::RowColumnData(int height,int width,QString defaultrowvalue,QString defaultcolumnvalue):
    columns(new std::vector<QString>(width,defaultcolumnvalue)),
    rows(new std::vector<QString>(height,defaultrowvalue))
{}

QString RowColumnData::get_column_name(int column)const{
    try
    {
        return (*columns)[column];
        //TODO resize of the array
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return "error";
}
QString RowColumnData::get_row_name(int row)const{
    try
    {
        return (*rows)[row];
        //TODO resize of the array
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return "error";
}
void RowColumnData::set_column_name(int column,QString value){

}

void RowColumnData::set_row_name(int row,QString value){}

void RowColumnData::Resize(int newHeight,int newWidth){}
