#ifndef ROWCOLUMNNAMES_H
#define ROWCOLUMNNAMES_H

#include <iostream>
#include <string>
#include <vector>
#include <QString>
#include <QSize>
#include <QWidget>

//classe che si occupa di memorizzare il nome delle colonne e delle righe.
//il puntatore qsize e uguale a quello di graph data per avere le dimensioni uguali.
class RowColumnNames :public QObject{
    Q_OBJECT
private:
    //checks for the size of the graph
    QSize* graphSize;
    //list that points at the name of the columns
    std::vector<QString> *columns;
    //list that points at the name of the rows
    std::vector<QString> *rows;

public:
    RowColumnNames(QSize* graphsize,QString defaultrow="r",QString column="c");

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
/*signals:
    void signalSizeChanged();
public slots:
    void slotSizeChanged(QSize oldSize,QSize newSize);*/
private:
    friend std::ostream& operator<<(std::ostream& o,const RowColumnNames& g);
};
std::ostream& operator<<(std::ostream& o,const RowColumnNames& g);
#endif // ROWCOLUMNNAMES_H
