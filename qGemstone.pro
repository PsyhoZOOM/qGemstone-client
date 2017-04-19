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
    client.cpp \
    loginwindow.cpp

HEADERS  += \
    client.h \
    loginwindow.h

FORMS

CONFIG += mobility
CONFIG += console
MOBILITY = 

FORMS += \
    loginwindow.ui

