TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        command.cpp \
        lightcommand.cpp \
        main.cpp

HEADERS += \
    command.h \
    light.h \
    lightcommand.h \
    remotecontrol.h
