QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Grafico_view/grafico_view.cpp \
    excel_View/Excel_View.cpp \
    excel_View/cell.cpp \
    grafi/GraphData.cpp \
    grafi/RowColumnNames.cpp \
    grafi/graphcontrollerinterface.cpp \
    grafi/viewgraphinterface.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Grafico_view/grafico_view.h \
    excel_View/Excel_View.h \
    excel_View/cell.h \
    grafi/GraphData.h \
    grafi/RowColumnNames.h \
    grafi/graphcontrollerinterface.h \
    grafi/viewgraphinterface.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resources/player1.png \
    resources/player2.png \
    resources/style.css

RESOURCES += \
    resources.qrc
