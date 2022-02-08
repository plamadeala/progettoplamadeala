#include <iostream>
#include <string>
#include <vector>
#include <QString>
#ifndef ROWCOLUMNDATA_H
#define ROWCOLUMNDATA_H
class RowColumnData{
private:
    //list that points at the name of the columns
    std::vector<QString> *columns;
    //list that points at the name of the rows
    std::vector<QString> *rows;
public:
    RowColumnData(int height=0,int width=0,QString defaultrow="r",QString column="c");

    //get the string name of the column
    QString get_column_name(int column)const;
    //get the string name of the row
    QString get_row_name(int row)const;
    //set the string name of the column
    void set_column_name(int column,QString value);
    //set the string name of the row
    void set_row_name(int row,QString value);
    //resize for the velues
    void Resize(int newHeight,int newWidth);
};

#endif // ROWCOLUMNDATA_H
