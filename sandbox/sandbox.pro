TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    sandbox.cpp \
    generic_lambda_example.cpp \
    multithreadtask.cpp \
    logger.cpp

HEADERS += \
    multithreadtask.h \
    logger.h
