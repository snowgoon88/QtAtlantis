#-------------------------------------------------
#
# Project created by QtCreator 2016-06-25T17:30:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtAtlantis
TEMPLATE = app

INCLUDEPATH += ../Atlantis
INCLUDEPATH += ../Atlantis/standard

SOURCES += main.cpp\
        main_atlantis.cpp \
    ../Atlantis/standard/extra.cpp \
    ../Atlantis/standard/map.cpp \
    ../Atlantis/standard/monsters.cpp \
    ../Atlantis/standard/rules.cpp \
    ../Atlantis/standard/world.cpp \
    ../Atlantis/alist.cpp \
    ../Atlantis/aregion.cpp \
    ../Atlantis/army.cpp \
    ../Atlantis/astring.cpp \
    ../Atlantis/battle.cpp \
    ../Atlantis/economy.cpp \
    ../Atlantis/edit.cpp \
    ../Atlantis/faction.cpp \
    ../Atlantis/fileio.cpp \
    ../Atlantis/game.cpp \
    ../Atlantis/gamedata.cpp \
    ../Atlantis/gamedefs.cpp \
    ../Atlantis/gameio.cpp \
    ../Atlantis/genrules.cpp \
    ../Atlantis/i_rand.cpp \
    ../Atlantis/items.cpp \
    ../Atlantis/market.cpp \
    ../Atlantis/modify.cpp \
    ../Atlantis/monthorders.cpp \
    ../Atlantis/npc.cpp \
    ../Atlantis/object.cpp \
    ../Atlantis/orders.cpp \
    ../Atlantis/parseorders.cpp \
    ../Atlantis/production.cpp \
    ../Atlantis/quests.cpp \
    ../Atlantis/runorders.cpp \
    ../Atlantis/shields.cpp \
    ../Atlantis/skills.cpp \
    ../Atlantis/skillshows.cpp \
    ../Atlantis/specials.cpp \
    ../Atlantis/spells.cpp \
    ../Atlantis/template.cpp \
    ../Atlantis/unit.cpp

HEADERS  += main_atlantis.h \
    ../Atlantis/alist.h \
    ../Atlantis/aregion.h \
    ../Atlantis/army.h \
    ../Atlantis/astring.h \
    ../Atlantis/battle.h \
    ../Atlantis/faction.h \
    ../Atlantis/fileio.h \
    ../Atlantis/game.h \
    ../Atlantis/gamedata.h \
    ../Atlantis/gamedefs.h \
    ../Atlantis/gameio.h \
    ../Atlantis/helper.h \
    ../Atlantis/i_rand.h \
    ../Atlantis/i_std.h \
    ../Atlantis/items.h \
    ../Atlantis/market.h \
    ../Atlantis/object.h \
    ../Atlantis/orders.h \
    ../Atlantis/production.h \
    ../Atlantis/quests.h \
    ../Atlantis/shields.h \
    ../Atlantis/skills.h \
    ../Atlantis/spells.h \
    ../Atlantis/unit.h \
    map_glwidget.h

FORMS    += main_atlantis.ui
