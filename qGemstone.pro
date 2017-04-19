#-------------------------------------------------
#
# Project created by QtCreator 2017-04-19T15:43:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += network

TARGET = qGemstone
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    client.cpp

HEADERS  += loginwindow.h \
    client.h

FORMS    += loginwindow.ui

CONFIG += mobility
MOBILITY = 

