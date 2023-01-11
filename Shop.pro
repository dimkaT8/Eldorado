TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        homedevices.cpp \
        laptoop.cpp \
        main.cpp \
        mobiledevices.cpp

HEADERS += \
    IProduct.h \
    homedevices.h \
    laptoop.h \
    mobiledevices.h
