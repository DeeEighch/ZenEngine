TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

TARGET = Game

INCLUDEPATH += ../Engine

CONFIG(release, debug|release) {
       LINK_PATH += -L$$OUT_PWD/../Engine/release
} else {
       LINK_PATH += -L$$OUT_PWD/../Engine/debug
}

LINK_LIBS += -lEngine

SOURCES += \
        game.cpp

LIBS += $${LINK_PATH} $${LINK_LIBS}

QMAKE_LFLAGS += -static-libgcc
