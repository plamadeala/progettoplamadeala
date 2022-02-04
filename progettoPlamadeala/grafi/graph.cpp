#include "graph.h"
#include <QDebug>

graph::graph(int column_amount, int row_amount) : column_amount(column_amount), row_amount(row_amount)
{
    columns = new std::vector<std::string>(column_amount);
    for (int i = 0; i < column_amount; i++)
    {
        columns->at(i) = "c";
    }
    rows = new std::vector<std::string>(row_amount);
    for (int i = 0; i < row_amount; i++)
    {
        rows->at(i) = "r";
    }
    // initialise the values
    values = std::vector<std::vector<double>>(column_amount, std::vector<double>(row_amount));
    for (int i = 0; i < column_amount; i++)
    {
        for (int j = 0; j < row_amount; j++)
        {
            values[i][j] = 0;
        }
    }
    // std::cout<<"hi";
    // std::cout<<values->size();
}
void graph::resize(int new_column_amount,int new_row_amount)
{
    std::vector<std::string> *columns_temp = new std::vector<std::string>(new_column_amount);
    for (int i = 0;  i< new_column_amount; i++)
    {
        if (i < column_amount ){
            columns_temp->at(i) = columns->at(i);
        }else{
            columns_temp->at(i) = "newc";
        }

    }
    std::vector<std::string> *rows_temp = new std::vector<std::string>(new_row_amount);
    for (int i = 0; i< new_row_amount; i++)
    {
        if (i < row_amount ){
            rows_temp->at(i) = rows->at(i);
        }else{
            rows_temp->at(i) = "newr";
        }
    }
    delete columns;
    delete rows;
    columns=columns_temp;
    rows=rows_temp;
    // initialise the values
    std::vector<std::vector<double>> values_temp = std::vector<std::vector<double>>(new_column_amount, std::vector<double>(new_row_amount));
    for (int i = 0; i < column_amount && i < new_column_amount; i++)
    {
        for (int j = 0; j < row_amount && j < new_row_amount; j++)
        {
            values_temp[i][j] = values[i][j];
        }
    }
    //TODO check for garbage
    //delete values;
    values = values_temp;
    column_amount=new_column_amount;
    row_amount=new_row_amount;
}
double graph::get_value(int x, int y)
{
    try
    {
        return values[x][y];
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
void graph::setvalue(int x, int y, double value)
{
    try
    {
        values[x][y] = value;
        //TODO resize of the array
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
std::string graph::get_column_name(int column)const{
    return columns->at(column);
}
std::string graph::get_row_name(int row) const{
    return rows->at(row);
}
void graph::set_column_name(int column,std::string value){
    columns->at(column)=value;
}
void graph::set_row_name(int row,std::string value){
    rows->at(row)=value;
}
int graph::get_column_amount()const{
    return column_amount;
}
int graph::get_row_amount()const{
    return column_amount;
}
void graph::print()
{
    std::cout<<" ";
    for (int i = 0; i < row_amount; i++)
    {
        std::cout<<rows->at(i);
    }
    std::cout<<std::endl;
    for (int i = 0; i < column_amount; i++)
    {
        std::cout<<columns->at(i);
        for (int j = 0; j < row_amount; j++)
        {
            std::cout << values[i][j] << ":";
        }
        std::cout << std::endl;
    }
}
