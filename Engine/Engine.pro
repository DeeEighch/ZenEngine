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
    zen/GameEngine.cpp \
    zen/utils/performancetimer.cpp

HEADERS += \
    defines.hpp \
    types.hpp \
    libEngine.hpp \
    zen/GameEngine.hpp \
    zen/utils/performancetimer.hpp
