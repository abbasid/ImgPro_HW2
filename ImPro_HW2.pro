#-------------------------------------------------
#
# Project created by QtCreator 2015-10-14T16:36:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImPro_HW2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

INCLUDEPATH += C:\\Qt\\opencv_v3.0_x86\\include \
                C:\\Qt\\opencv_v3.0_x86\\include\\opencv    \
                C:\\Qt\\opencv_v3.0_x86\\include\\opencvw2  \

LIBS += C:\\Qt\\opencv_v3.0_x86\\lib\\opencv_ts300.lib  \
        C:\\Qt\\opencv_v3.0_x86\\lib\\opencv_ts300d.lib \
        C:\\Qt\\opencv_v3.0_x86\\lib\\opencv_world300.lib   \
        C:\\Qt\\opencv_v3.0_x86\\lib\\opencv_world300d.lib  \


HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
