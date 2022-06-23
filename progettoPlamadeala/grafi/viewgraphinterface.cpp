#include "viewgraphinterface.h"

ViewGraphInterface::ViewGraphInterface(GraphControllerInterface* controlle):controller(controlle)
{
    //ottieni la dimensioni della matrice
    connect(this,&ViewGraphInterface::getQsize,controller,&GraphControllerInterface::get_graphQsize);
    //nel caso la dimensione della matrice sia cambiata
    connect(controller,&GraphControllerInterface::changedSize,this,&ViewGraphInterface::NewShape);
    //se la classe o la derivata vuole ottenere il valore di una singola cella
    connect(this,&ViewGraphInterface::getValue,controller,&GraphControllerInterface::get_value);
    //connette se il valore e camb
    connect(controller,&GraphControllerInterface::value_Changed,this,&ViewGraphInterface::gotValue);
    //se la classe o la derivata vuole ottenere il nome della colonna
    connect(this,&ViewGraphInterface::getColumName,controller,&GraphControllerInterface::getColumName);
    //se la classe o la derivata vuole ottenere il nome della riga
    connect(this,&ViewGraphInterface::getRowName,controller,&GraphControllerInterface::getRowName);
    //se il nome della colonna viene cambiato
    connect(controller,&GraphControllerInterface::value_Column,this,&ViewGraphInterface::columnChanged);
    //se la classe o la derivata vuole ottenere il nome della riga
    connect(controller,&GraphControllerInterface::value_Row,this,&ViewGraphInterface::rowChanged);
}
void ViewGraphInterface::NewShape(QSize* q){

    createView(q);
}
void ViewGraphInterface::Start(){
    emit getQsize();
}
