# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = SOURCE
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += MainWindow.cpp Connection.cpp canio.cpp cannet.cpp main.cpp msg.cpp Receive.cpp controller.cpp Transmit.cpp MessageEditor.cpp
HEADERS += controller.h MessageEditor.h Receive.h Transmit.h cannet.h msg.h canlistener.h Connection.h MainWindow.h canio.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
CONFIG += static
DEFINES += QT_NO_WARNINGS_OUTPUT
