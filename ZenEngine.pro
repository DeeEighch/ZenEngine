TEMPLATE = subdirs

SUBDIRS += \
    Engine \
    Game

    Game.depends = Engine
