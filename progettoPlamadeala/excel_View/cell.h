#ifndef CELL_H
#define CELL_H

#include <QLineEdit>
#include <QString>

class Cell:public QLineEdit
{
Q_OBJECT
private:
    unsigned int x,y;
public:
    Cell(QString string,unsigned int x, unsigned int y);
    void change(QString s);
signals:
    /**
     * @brief clickedCell segnale per riemettere clicked indicando anche
     *										la posizione del bottone
     */
    void newData(unsigned int x,unsigned int y,double val);
    void newStringData(unsigned int x,unsigned int y,QString &s);
private slots:
    /**
     * @brief cellEmitter slot che emette clickedCell con this->x e this->y
     */
    void Data_Changed(const QString &s);
};

#endif // CELL_H
