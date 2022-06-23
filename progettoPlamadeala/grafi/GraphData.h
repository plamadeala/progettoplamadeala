#ifndef GRAPHDATA_H
#define GRAPHDATA_H

#include <iostream>
#include <string>
#include <vector>
#include <QWidget>

#include <grafi/RowColumnNames.h>

class GraphData : public QObject{
    Q_OBJECT
private:
    friend std::ostream& operator<<(std::ostream& o,GraphData& g);
    QSize* graphSize;
    double defaultValue;
    RowColumnNames* names;
    //matrice di valori
    //invariante ogni sottovettore ha dimensione ugual a ogni altro sottovettore
    std::vector<std::vector<double>> values;
public:

    //defalt constructor
    GraphData(QSize* graphSize,double defaultvalue=0);
    //GraphData(const GraphData&g){std::cout<<"copy";}
    //resize the rows and columns
    QSize* get_Qsize()const;
    void resize(int height,int width,int defaultvalue=0);
    double get_value(int x,int y)const;
    void set_value(int x,int y,double value);

    RowColumnNames* getNames()const;
signals:
    void signalSizeChanged();
/*public slots:
    void slotSizeChanged(QSize oldSize,QSize newSize);*/
private:
    friend std::ostream& operator<<(std::ostream& o,const GraphData& g);
};
std::ostream& operator<<(std::ostream& o,const GraphData& g);


#endif // GRAPHDATA_H
