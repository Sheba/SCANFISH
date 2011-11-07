#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=
AS=as
QMAKE=qmake

# Macros
<<<<<<< HEAD
CND_PLATFORM=GNU_1-Linux-x86
=======
CND_PLATFORM=GNU-Linux-x86
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES=


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

nbproject/qt-${CND_CONF}.mk: nbproject/qt-${CND_CONF}.pro FORCE
	${QMAKE} VPATH=. -o qttmp-${CND_CONF}.mk nbproject/qt-${CND_CONF}.pro
	mv -f qttmp-${CND_CONF}.mk nbproject/qt-${CND_CONF}.mk

FORCE:

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS} nbproject/qt-${CND_CONF}.mk
<<<<<<< HEAD
	"${MAKE}" -f nbproject/qt-${CND_CONF}.mk dist/Debug/GNU_1-Linux-x86/QtApplication_1
=======
	"${MAKE}" -f nbproject/qt-${CND_CONF}.mk dist/Debug/GNU-Linux-x86/SOURCE
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216

build/Debug/%.o: nbproject/qt-Debug.mk
	$(MAKE) -f nbproject/qt-Debug.mk "$@"

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS} nbproject/qt-Debug.mk
	$(MAKE) -f nbproject/qt-Debug.mk distclean

# Subprojects
.clean-subprojects:
