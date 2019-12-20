TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        duck.cpp \
        flybehavior.cpp \
        main.cpp \
        mallardduck.cpp \
        modelduck.cpp \
        quackbehavior.cpp

HEADERS += \
    duck.h \
    flybehavior.h \
    mallardduck.h \
    modelduck.h \
    quackbehavior.h
