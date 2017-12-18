#-------------------------------------------------
#
# Project created by QtCreator 2017-12-18T12:45:30
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = APIRequests
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    requestfactory.cpp \
    committablemodel.cpp

HEADERS  += mainwindow.h \
    requestfactory.h \
    committablemodel.h

FORMS    += mainwindow.ui
