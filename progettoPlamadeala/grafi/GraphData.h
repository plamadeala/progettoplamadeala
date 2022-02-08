#include <iostream>
#include <string>
#include <vector>
#ifndef GRAPHDATA_H
#define GRAPHDATA_H

class GraphData{
private:
    friend std::ostream & operator<<(std::ostream& o,GraphData g);
    //matrice di valori
    //invariante ogni sottovettore ha dimensione ugual a ogni altro sottovettore
    std::vector<std::vector<double>> values;
public:

    //defalt constructor
    GraphData(int height=0,int width=0,double defaultvalue=0);
    //resize the rows and columns
    void resize(int height,int width,int defaultvalue=0);
    double get_value(int x,int y)const;
    void set_value(int x,int y,double value);
};
std::ostream & operator<<(std::ostream& o,GraphData g);


#endif // GRAPHDATA_H
