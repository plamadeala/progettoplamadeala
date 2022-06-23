#include "Excel_View.h"

Excel_View::Excel_View(GraphControllerInterface* newController):ViewGraphInterface(newController)
{
    mainLayout = new QVBoxLayout(this);
    gridLayout = new QGridLayout();

    controller=newController;

    //connect the change value to the controller that will proceed to change the value in the data
    connect(this,&Excel_View::ChangeValue,controller,&GraphControllerInterface::set_value);
    //connect the change value to the controller that will proceed to change the value in the data
    connect(this,&Excel_View::changeRowColumns,controller,&GraphControllerInterface::rowColumnChanged);

    // Aggiungere i layout
    mainLayout->addLayout(gridLayout);
    setLayout(mainLayout);

}

void Excel_View::createView(const QSize* size){
    //cella 0,0 non contiene niente
    Cell* q = new Cell("\\",0,0);
    gridLayout->addWidget(q,0,0);
    for (int x=0;x<size->width()+1;x++){
        Cell* q = new Cell("",x,-1);
        gridLayout->addWidget(q,x+1,0);
        connect(q,&Cell::newStringData,this,&Excel_View::changeRowColumns);
    }
    for (int y=0;y<size->height()+1;y++){
        Cell* q = new Cell("",-1,y);
        gridLayout->addWidget(q,0,y+1);
        connect(q,&Cell::newStringData,this,&Excel_View::changeRowColumns);
    }
    for (int x=0;x<size->width()+1;x++){
        for (int y=0;y<size->height()+1;y++){
            Cell* q = new Cell("",x,y);
            q->setValidator( new QDoubleValidator());
            gridLayout->addWidget(q,x+1,y+1);
            connect(q,&Cell::newData,this,&Excel_View::ChangeValue);
        }
    }

}

void Excel_View::gotValue(int x,int y,double newValue){
    Cell* c=dynamic_cast<Cell*>(gridLayout->itemAtPosition(x+1,y+1)->widget());
    if (newValue!=c->displayText().toDouble()){
        c->change(QString::number(newValue));
    }

}
void Excel_View::rowChanged(int y,QString s){
    Cell* c=dynamic_cast<Cell*>(gridLayout->itemAtPosition(y+1,0)->widget());
    c->change(s);
}
void Excel_View::columnChanged(int x,QString s){
    Cell* c=dynamic_cast<Cell*>(gridLayout->itemAtPosition(0,x+1)->widget());
    c->change(s);
}
void Excel_View::NewShape(QSize* q){
    createView(q);
}
