TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
TARGET = Engine

DEFINES += LIB_BUILD
#CONFIG += staticlib
DEFINES += GIT_VERSION=\\\"$$system("C:/Progra~1/Git/cmd/git.exe" describe --always)\\\"

staticlib {
    DEFINES += LIB_STATIC
}


SOURCES += \
    libEngine.cpp \
    zen/GameEngine.cpp \
    zen/utils/performancetimer.cpp \
    zen/EngineComponent.cpp \
    zen/components/InputComponent.cpp \
    zen/components/NetworkComponent.cpp \
    zen/components/RendererComponent.cpp

HEADERS += \
    defines.hpp \
    types.hpp \
    libEngine.hpp \
    zen/GameEngine.hpp \
    zen/utils/performancetimer.hpp \
    zen/EngineComponent.hpp \
    zen/components/InputComponent.hpp \
    zen/components/NetworkComponent.hpp \
    zen/components/RendererComponent.hpp
