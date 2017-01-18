#-------------------------------------------------
#
# Project created by QtCreator 2017-01-11T07:56:46
#
#-------------------------------------------------

QT += core gui
QT += serialport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pgm
TEMPLATE = app


SOURCES +=\    
    src/main.cpp \
    src/mainWindow.cpp \
    lib/digilent/pgm/digilentPgm.cpp \
    lib/digilent/pgm/pgmBlock.cpp \
    lib/digilent/qtSerial/serial.cpp \

HEADERS  += \    
    src/mainWindow.h \
    lib/digilent/pgm/digilentPgm.h \
    lib/digilent/pgm/pgmBlock.h \
    lib/digilent/qtSerial/serial.h \

FORMS    += mainWindow.ui

DISTFILES += \
    lib/digilent/pgm/.gitignore \
    lib/digilent/pgm/LICENSE
