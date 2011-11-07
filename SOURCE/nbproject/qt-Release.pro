# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = SOURCE
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
<<<<<<< HEAD
SOURCES += MainWindow.cpp Connection.cpp canio.cpp cannet.cpp main.cpp msg.cpp Receive.cpp controller.cpp Transmit.cpp MessageEditor.cpp
HEADERS += controller.h MessageEditor.h Receive.h Transmit.h cannet.h msg.h canlistener.h Connection.h MainWindow.h canio.h
=======
SOURCES += MainWindow.cpp Connection.cpp canio.cpp cannet.cpp main.cpp msg.cpp Receive.cpp msgspv.cpp Transmit.cpp controller.cpp MessageEditor.cpp
HEADERS += sferror.h controller.h MessageEditor.h Receive.h Transmit.h cannet.h msg.h Connection.h msgspv.h canlistener.h MainWindow.h canio.h
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
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
<<<<<<< HEAD
CONFIG += static
DEFINES += QT_NO_WARNINGS_OUTPUT
=======
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
