#-------------------------------------------------
#
# Project created by QtCreator 2012-02-17T06:29:11
#
#-------------------------------------------------

TARGET = tstat

TEMPLATE = app
INCLUDEPATH += .

include(src/common/common.pri)
#include(src/basicgraph/basicgraph.pri)
include(src/scrolldial/scrolldial.pri)


CONFIG += release
CONFIG -= debug

SOURCES += main.cpp             \
        widget.cpp              \
        popup.cpp               \
        keyboard/keyboard.cpp   \
        numpad.cpp

HEADERS  += widget.h        \
        popup.h             \
        keyboard/keyboard.h \
        numpad.h

FORMS    += widget.ui               \
            popup.ui                \
            keyboard/keyboard.ui    \
            numpad.ui

RESOURCES += \
    widget.qrc \
    skins/beryl_scrollwheel.qrc \
    skins/beryl_scrolldial.qrc

QT += gui core webkit network
QT *= svg

