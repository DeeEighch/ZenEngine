TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
TARGET = Engine

DEFINES += LIB_BUILD
#CONFIG += staticlib
DEFINES += GIT_VERSION=0x0101
staticlib {
    DEFINES += LIB_STATIC
}


SOURCES += \
    libEngine.cpp \
    GameEngine.cpp \
    performancetimer.cpp

HEADERS += \
    performancetimer.hpp \
    defines.hpp \
    GameEngine.hpp \
    libEngine.hpp
