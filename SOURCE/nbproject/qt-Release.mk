#############################################################################
# Makefile for building: dist/Release/GNU_stat-Linux-x86/QtApplication_1
# Generated by qmake (2.01a) (Qt 4.7.4) on: Tue Sep 20 06:57:59 2011
# Project:  nbproject/qt-Release.pro
# Template: app
# Command: /home/roman/SuperDisk/Qt_static/bin/qmake VPATH=. -o qttmp-Release.mk nbproject/qt-Release.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_WARNINGS_OUTPUT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../SuperDisk/Qt_static/mkspecs/linux-g++ -Inbproject -I../../SuperDisk/Qt_static/include/QtCore -I../../SuperDisk/Qt_static/include/QtGui -I../../SuperDisk/Qt_static/include -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/roman/SuperDisk/Qt_static/lib
LIBS          = $(SUBLIBS)  -L/home/roman/SuperDisk/Qt_static/lib -lQtGui -L/home/roman/SuperDisk/Qt_static/lib -L/usr/X11R6/lib -lXext -lX11 -lQtCore -lz -lm -ldl -lrt -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/roman/SuperDisk/Qt_static/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Release/GNU_stat-Linux-x86/

####### Files

SOURCES       = MainWindow.cpp \
		Connection.cpp \
		canio.cpp \
		cannet.cpp \
		main.cpp \
		msg.cpp \
		Receive.cpp \
		controller.cpp \
		Transmit.cpp \
		MessageEditor.cpp moc_MessageEditor.cpp \
		moc_Receive.cpp \
		moc_Transmit.cpp \
		moc_Connection.cpp \
		moc_MainWindow.cpp
OBJECTS       = build/Release/GNU_stat-Linux-x86/MainWindow.o \
		build/Release/GNU_stat-Linux-x86/Connection.o \
		build/Release/GNU_stat-Linux-x86/canio.o \
		build/Release/GNU_stat-Linux-x86/cannet.o \
		build/Release/GNU_stat-Linux-x86/main.o \
		build/Release/GNU_stat-Linux-x86/msg.o \
		build/Release/GNU_stat-Linux-x86/Receive.o \
		build/Release/GNU_stat-Linux-x86/controller.o \
		build/Release/GNU_stat-Linux-x86/Transmit.o \
		build/Release/GNU_stat-Linux-x86/MessageEditor.o \
		build/Release/GNU_stat-Linux-x86/moc_MessageEditor.o \
		build/Release/GNU_stat-Linux-x86/moc_Receive.o \
		build/Release/GNU_stat-Linux-x86/moc_Transmit.o \
		build/Release/GNU_stat-Linux-x86/moc_Connection.o \
		build/Release/GNU_stat-Linux-x86/moc_MainWindow.o
DIST          = ../SuperDisk/Qt_static/mkspecs/common/g++.conf \
		../SuperDisk/Qt_static/mkspecs/common/unix.conf \
		../SuperDisk/Qt_static/mkspecs/common/linux.conf \
		../SuperDisk/Qt_static/mkspecs/qconfig.pri \
		../SuperDisk/Qt_static/mkspecs/features/qt_functions.prf \
		../SuperDisk/Qt_static/mkspecs/features/qt_config.prf \
		../SuperDisk/Qt_static/mkspecs/features/exclusive_builds.prf \
		../SuperDisk/Qt_static/mkspecs/features/default_pre.prf \
		../SuperDisk/Qt_static/mkspecs/features/release.prf \
		../SuperDisk/Qt_static/mkspecs/features/default_post.prf \
		../SuperDisk/Qt_static/mkspecs/features/static.prf \
		../SuperDisk/Qt_static/mkspecs/features/warn_on.prf \
		../SuperDisk/Qt_static/mkspecs/features/qt.prf \
		../SuperDisk/Qt_static/mkspecs/features/unix/thread.prf \
		../SuperDisk/Qt_static/mkspecs/features/moc.prf \
		../SuperDisk/Qt_static/mkspecs/features/resources.prf \
		../SuperDisk/Qt_static/mkspecs/features/uic.prf \
		../SuperDisk/Qt_static/mkspecs/features/yacc.prf \
		../SuperDisk/Qt_static/mkspecs/features/lex.prf \
		../SuperDisk/Qt_static/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Release.pro
QMAKE_TARGET  = QtApplication_1
DESTDIR       = dist/Release/GNU_stat-Linux-x86/
TARGET        = dist/Release/GNU_stat-Linux-x86/QtApplication_1

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Release.mk $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Release/GNU_stat-Linux-x86/ || $(MKDIR) dist/Release/GNU_stat-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qttmp-Release.mk: nbproject/qt-Release.pro  ../../SuperDisk/Qt_static/mkspecs/common/g++.conf \
		../../SuperDisk/Qt_static/mkspecs/common/unix.conf \
		../../SuperDisk/Qt_static/mkspecs/common/linux.conf \
		../../SuperDisk/Qt_static/mkspecs/qconfig.pri \
		../../SuperDisk/Qt_static/mkspecs/features/qt_functions.prf \
		../../SuperDisk/Qt_static/mkspecs/features/qt_config.prf \
		../../SuperDisk/Qt_static/mkspecs/features/exclusive_builds.prf \
		../../SuperDisk/Qt_static/mkspecs/features/default_pre.prf \
		../../SuperDisk/Qt_static/mkspecs/features/release.prf \
		../../SuperDisk/Qt_static/mkspecs/features/default_post.prf \
		../../SuperDisk/Qt_static/mkspecs/features/static.prf \
		../../SuperDisk/Qt_static/mkspecs/features/warn_on.prf \
		../../SuperDisk/Qt_static/mkspecs/features/qt.prf \
		../../SuperDisk/Qt_static/mkspecs/features/unix/thread.prf \
		../../SuperDisk/Qt_static/mkspecs/features/moc.prf \
		../../SuperDisk/Qt_static/mkspecs/features/resources.prf \
		../../SuperDisk/Qt_static/mkspecs/features/uic.prf \
		../../SuperDisk/Qt_static/mkspecs/features/yacc.prf \
		../../SuperDisk/Qt_static/mkspecs/features/lex.prf \
		../../SuperDisk/Qt_static/mkspecs/features/include_source_dir.prf \
		/home/roman/SuperDisk/Qt_static/lib/libQtGui.prl \
		/home/roman/SuperDisk/Qt_static/lib/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Release.mk nbproject/qt-Release.pro
../../SuperDisk/Qt_static/mkspecs/common/g++.conf:
../../SuperDisk/Qt_static/mkspecs/common/unix.conf:
../../SuperDisk/Qt_static/mkspecs/common/linux.conf:
../../SuperDisk/Qt_static/mkspecs/qconfig.pri:
../../SuperDisk/Qt_static/mkspecs/features/qt_functions.prf:
../../SuperDisk/Qt_static/mkspecs/features/qt_config.prf:
../../SuperDisk/Qt_static/mkspecs/features/exclusive_builds.prf:
../../SuperDisk/Qt_static/mkspecs/features/default_pre.prf:
../../SuperDisk/Qt_static/mkspecs/features/release.prf:
../../SuperDisk/Qt_static/mkspecs/features/default_post.prf:
../../SuperDisk/Qt_static/mkspecs/features/static.prf:
../../SuperDisk/Qt_static/mkspecs/features/warn_on.prf:
../../SuperDisk/Qt_static/mkspecs/features/qt.prf:
../../SuperDisk/Qt_static/mkspecs/features/unix/thread.prf:
../../SuperDisk/Qt_static/mkspecs/features/moc.prf:
../../SuperDisk/Qt_static/mkspecs/features/resources.prf:
../../SuperDisk/Qt_static/mkspecs/features/uic.prf:
../../SuperDisk/Qt_static/mkspecs/features/yacc.prf:
../../SuperDisk/Qt_static/mkspecs/features/lex.prf:
../../SuperDisk/Qt_static/mkspecs/features/include_source_dir.prf:
/home/roman/SuperDisk/Qt_static/lib/libQtGui.prl:
/home/roman/SuperDisk/Qt_static/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Release.mk nbproject/qt-Release.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0 || $(MKDIR) build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0/ && $(COPY_FILE) --parents controller.h MessageEditor.h Receive.h Transmit.h cannet.h msg.h canlistener.h Connection.h MainWindow.h canio.h build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0/ && $(COPY_FILE) --parents MainWindow.cpp Connection.cpp canio.cpp cannet.cpp main.cpp msg.cpp Receive.cpp controller.cpp Transmit.cpp MessageEditor.cpp build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0/ && (cd `dirname build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0` && $(TAR) QtApplication_11.0.0.tar QtApplication_11.0.0 && $(COMPRESS) QtApplication_11.0.0.tar) && $(MOVE) `dirname build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0`/QtApplication_11.0.0.tar.gz . && $(DEL_FILE) -r build/Release/GNU_stat-Linux-x86/QtApplication_11.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Release.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_MessageEditor.cpp moc_Receive.cpp moc_Transmit.cpp moc_Connection.cpp moc_MainWindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MessageEditor.cpp moc_Receive.cpp moc_Transmit.cpp moc_Connection.cpp moc_MainWindow.cpp
moc_MessageEditor.cpp: controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		MessageEditor.h
	/home/roman/SuperDisk/Qt_static/bin/moc $(DEFINES) $(INCPATH) MessageEditor.h -o moc_MessageEditor.cpp

moc_Receive.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Receive.h
	/home/roman/SuperDisk/Qt_static/bin/moc $(DEFINES) $(INCPATH) Receive.h -o moc_Receive.cpp

moc_Transmit.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h
	/home/roman/SuperDisk/Qt_static/bin/moc $(DEFINES) $(INCPATH) Transmit.h -o moc_Transmit.cpp

moc_Connection.cpp: canlistener.h \
		msg.h \
		sferror.h \
		Connection.h
	/home/roman/SuperDisk/Qt_static/bin/moc $(DEFINES) $(INCPATH) Connection.h -o moc_Connection.cpp

moc_MainWindow.cpp: MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h \
		MainWindow.h
	/home/roman/SuperDisk/Qt_static/bin/moc $(DEFINES) $(INCPATH) MainWindow.h -o moc_MainWindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

build/Release/GNU_stat-Linux-x86/MainWindow.o: MainWindow.cpp MainWindow.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/MainWindow.o MainWindow.cpp

build/Release/GNU_stat-Linux-x86/Connection.o: Connection.cpp Connection.h \
		canlistener.h \
		msg.h \
		sferror.h \
		controller.h \
		canio.h \
		cannet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/Connection.o Connection.cpp

build/Release/GNU_stat-Linux-x86/canio.o: canio.cpp canio.h \
		msg.h \
		sferror.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/canio.o canio.cpp

build/Release/GNU_stat-Linux-x86/cannet.o: cannet.cpp cannet.h \
		msg.h \
		sferror.h \
		canio.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/cannet.o cannet.cpp

build/Release/GNU_stat-Linux-x86/main.o: main.cpp MainWindow.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h \
		Receive.h \
		Connection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/main.o main.cpp

build/Release/GNU_stat-Linux-x86/msg.o: msg.cpp msg.h \
		sferror.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/msg.o msg.cpp

build/Release/GNU_stat-Linux-x86/Receive.o: Receive.cpp Receive.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/Receive.o Receive.cpp

build/Release/GNU_stat-Linux-x86/controller.o: controller.cpp controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/controller.o controller.cpp

build/Release/GNU_stat-Linux-x86/Transmit.o: Transmit.cpp Transmit.h \
		MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/Transmit.o Transmit.cpp

build/Release/GNU_stat-Linux-x86/MessageEditor.o: MessageEditor.cpp MessageEditor.h \
		controller.h \
		canio.h \
		msg.h \
		sferror.h \
		cannet.h \
		canlistener.h \
		Transmit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/MessageEditor.o MessageEditor.cpp

build/Release/GNU_stat-Linux-x86/moc_MessageEditor.o: moc_MessageEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/moc_MessageEditor.o moc_MessageEditor.cpp

build/Release/GNU_stat-Linux-x86/moc_Receive.o: moc_Receive.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/moc_Receive.o moc_Receive.cpp

build/Release/GNU_stat-Linux-x86/moc_Transmit.o: moc_Transmit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/moc_Transmit.o moc_Transmit.cpp

build/Release/GNU_stat-Linux-x86/moc_Connection.o: moc_Connection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/moc_Connection.o moc_Connection.cpp

build/Release/GNU_stat-Linux-x86/moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Release/GNU_stat-Linux-x86/moc_MainWindow.o moc_MainWindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

