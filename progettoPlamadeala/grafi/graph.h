#include <iostream>
#include <string>
#include <vector>
#ifndef GRAPH_H
#define GRAPH_H

class graph{
private:
    int column_amount;
    int row_amount;
    double *graphdata;
    //list that points at the name of the columns
    std::vector<std::string> *columns;
    //list that points at the name of the rows
    std::vector<std::string> *rows;
    //matrix of values of the values int the
    std::vector<std::vector<double>> values;
    //enum that specifies what of order its doing
    enum ordertype{NO_ORDER,ORDER_ASCENDING,ORDER_DESCENDING};
    //type of order
    ordertype order;
    //the what column is ordered.
    int order_column;
    //each value in the list points to the row where that value is in the order.
    std::vector<int> *ordered;
public:
    //defalt constructor
    graph(int row_amount=0,int column_amount=0);
    //resize the rows and columns keeping the values
    void resize(int new_row_amount,int new_column_amount);
    //gives the value at a certain position if out of range return 0
    double get_value(int x,int y);
    // inserts a new value in the 2d array
    //if x>column_amount expand the matrix with 0 value in the other places
    //if y>row_amount expand the matrix with 0 value in the other places
    virtual void setvalue(int x,int y,double value);
    //get the string name of the column
    std::string get_column_name(int column)const;
    //get the string name of the row
    std::string get_row_name(int row)const;
    //set the string name of the column
    void set_column_name(int column,std::string value);
    //set the string name of the row
    void set_row_name(int row,std::string value);
    //TODO feature
    void order_by_column(int column);
    int get_column_amount()const;
    int get_row_amount()const;
    bool save(std::string filepath)const;
    bool load(std::string filepath);
    //used for debugging
    void print();
};
/*enum ordertype{
    NOT_ORDERED,ORDERED_ASCENDING,ORDERED_DESCENDING
};*/

#endif // GRAPH_H
