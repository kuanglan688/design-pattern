TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dinermenuiterator.cpp \
        iterator.cpp \
        main.cpp \
        pancakehousemenuiterator.cpp

HEADERS += \
    dinermenu.h \
    dinermenuiterator.h \
    iterator.h \
    menuitem.h \
    pancakehousemenu.h \
    pancakehousemenuiterator.h \
    waitress.h
