#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVBoxLayout>
#include <QGridLayout>
#include <QMainWindow>
#include <QSize>
#include <qlabel.h>
#include <excel_View/Excel_View.h>
#include <excel_View/excel_view_controller.h>
#include <grafi/GraphData.h>
#include <grafi/RowColumnNames.h>
#include <Grafico_view/grafico_view.h>
class MainWindow : public QWidget
{
    Q_OBJECT

private:
    Excel_View* excel_view;
    GraphData* graph_data;
    //excelController * excel_controller;
    QGridLayout * gridLayout;

    //Grafico_view grafico;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};
#endif // MAINWINDOW_H
