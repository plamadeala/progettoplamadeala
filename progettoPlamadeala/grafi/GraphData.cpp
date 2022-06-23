#include "GraphData.h"

GraphData::GraphData(QSize* graphSize,double defaultvalue):
    graphSize(graphSize),names(new RowColumnNames(graphSize,"r","c"))
{
    int x=graphSize->height();
    int y=graphSize->width();
    this->defaultValue=defaultValue;
    values=(std::vector<std::vector<double>>(y, std::vector<double>(x,defaultvalue)));
    for (int i = 0; i < (int)values.size(); i++)   {
        for (int j = 0; j < (int)values[0].size(); j++)
        {
            values[i][j] = i+1;
        }
    }
}
void GraphData::resize(int new_column_amount,int new_row_amount,int defaultvalue)
{
    // initialise the values
    std::vector<std::vector<double>> values_temp = std::vector<std::vector<double>>(new_column_amount, std::vector<double>(new_row_amount,defaultvalue));
        for (int i = 0; i < (int)values.size() && i < new_column_amount; i++)   {
            for (int j = 0; j < (int)values[0].size() && j < new_row_amount; j++)
            {
                values_temp[i][j] = values[i][j];
            }
        }
    values = values_temp;
}
QSize* GraphData::get_Qsize() const{
    return graphSize;
}
double GraphData::get_value(int x, int y)const
{
    try
    {
        if (x<graphSize->width()&&y<graphSize->height()){
            return values[x][y];
        }else{
            return defaultValue;
        }

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
void GraphData::set_value(int x,int y,double value)
{
    try
    {
        if (x<graphSize->width()&&y<graphSize->height()){
            values[x][y] = value;
            std::cout<<*this<<std::endl;
        }else{
            //TODO resize of the array
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
RowColumnNames* GraphData::getNames()const{
    return names;
}
std::ostream & operator<<(std::ostream& o,GraphData& g){
    for (int i = 0; i < (int)g.values.size(); i++)
    {
        std::cout <<"{";
        for (int j = 0; j < (int)g.values[0].size(); j++)
        {
            std::cout << g.values[i][j] << ":";
        }
        std::cout <<"}"<< std::endl;
    }
    return o;
}

