#-------------------------------------------------
#
# Project created by QtCreator 2017-02-05T18:42:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filebase.cpp \
    file.cpp \
    folder.cpp \
    actions.cpp \
    filesystem.cpp

HEADERS  += mainwindow.h \
    filebase.h \
    file.h \
    folder.h \
    filesystem.h \
    actions.h

FORMS    += mainwindow.ui
