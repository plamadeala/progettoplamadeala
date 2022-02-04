#ifndef EXCEL_VIEW_H
#define EXCEL_VIEW_H
#include "grafi/graph.h"
#include <QMainWindow>

class excel_view : public QWidget
{
    Q_OBJECT

public:
    excel_view(QWidget *parent = nullptr);
    ~excel_view();

private:
};

#endif // EXCEL_VIEW_H
