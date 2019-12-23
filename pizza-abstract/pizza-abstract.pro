TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cheesepizza.cpp \
        main.cpp \
        pizza.cpp \
        pizzaingredientfactory.cpp \
        pizzastore.cpp

HEADERS += \
    cheesepizza.h \
    nypizzaingredientfactory.h \
    nypizzastore.h \
    pizza.h \
    pizzaingredient.h \
    pizzaingredientfactory.h \
    pizzastore.h

DISTFILES +=
