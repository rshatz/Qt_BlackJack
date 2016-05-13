#-------------------------------------------------
#
# Project created by QtCreator 2016-05-12T23:13:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BlackJack
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Deck.cpp \
    Player.cpp \
    BlackJack.cpp

HEADERS  += mainwindow.h \
    Deck.h \
    Player.h \
    BlackJack.h

DISTFILES +=

RESOURCES += \
    resources.qrc
