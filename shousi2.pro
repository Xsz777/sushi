#-------------------------------------------------
#
# Project created by QtCreator 2017-07-02T22:20:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = shousi2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        dialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
         dialog.h \
    about.h

FORMS    += mainwindow.ui \
    dialog.ui \
    about.ui

RESOURCES += \
    res.qrc
