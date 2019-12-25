TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        gamballmachine.cpp \
        hasquarterstate.cpp \
        main.cpp \
        noquarterstate.cpp \
        soldoutstate.cpp \
        soldstate.cpp \
        state.cpp \
        winnerstate.cpp

HEADERS += \
    gamballmachine.h \
    hasquarterstate.h \
    noquarterstate.h \
    soldoutstate.h \
    soldstate.h \
    state.h \
    winnerstate.h
