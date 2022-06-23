#include "cell.h"

#include <iostream>
Cell::Cell(QString string,unsigned int x, unsigned int y):QLineEdit(string)
{
    this->x=x;
    this->y=y;
    connect(this,&Cell::textEdited,this,&Cell::Data_Changed);
}
void Cell::Data_Changed(const QString &s){
    emit newData(x,y,s.toDouble());
    QString r(s);
    emit newStringData(x,y,r);
}
void Cell::change(QString s){
    setText(s);
    //emit textEdited(s);
}
