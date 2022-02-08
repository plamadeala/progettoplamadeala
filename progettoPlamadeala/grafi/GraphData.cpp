#include "GraphData.h"
#include <QDebug>

GraphData::GraphData(int column_amount, int row_amount,double defaultvalue):values(std::vector<std::vector<double>>(column_amount, std::vector<double>(row_amount,defaultvalue)))
{}
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
double GraphData::get_value(int x, int y)const
{
    try
    {
        return values[x][y];
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
        values[x][y] = value;
        //TODO resize of the array
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
std::ostream & operator<<(std::ostream& o,GraphData g){
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

