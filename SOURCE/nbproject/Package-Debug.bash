#!/bin/bash -x

#
# Generated - do not edit!
#

# Macros
TOP=`pwd`
<<<<<<< HEAD
CND_PLATFORM=GNU_1-Linux-x86
=======
CND_PLATFORM=GNU-Linux-x86
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
CND_CONF=Debug
CND_DISTDIR=dist
NBTMPDIR=build/${CND_CONF}/${CND_PLATFORM}/tmp-packaging
TMPDIRNAME=tmp-packaging
<<<<<<< HEAD
OUTPUT_PATH=${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/QtApplication_1
OUTPUT_BASENAME=QtApplication_1
PACKAGE_TOP_DIR=QtApplication1/
=======
OUTPUT_PATH=${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/SOURCE
OUTPUT_BASENAME=SOURCE
PACKAGE_TOP_DIR=SOURCE/
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216

# Functions
function checkReturnCode
{
    rc=$?
    if [ $rc != 0 ]
    then
        exit $rc
    fi
}
function makeDirectory
# $1 directory path
# $2 permission (optional)
{
    mkdir -p "$1"
    checkReturnCode
    if [ "$2" != "" ]
    then
      chmod $2 "$1"
      checkReturnCode
    fi
}
function copyFileToTmpDir
# $1 from-file path
# $2 to-file path
# $3 permission
{
    cp "$1" "$2"
    checkReturnCode
    if [ "$3" != "" ]
    then
        chmod $3 "$2"
        checkReturnCode
    fi
}

# Setup
cd "${TOP}"
mkdir -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/package
rm -rf ${NBTMPDIR}
mkdir -p ${NBTMPDIR}

# Copy files and create directories and links
cd "${TOP}"
<<<<<<< HEAD
makeDirectory "${NBTMPDIR}/QtApplication1/bin"
=======
makeDirectory "${NBTMPDIR}/SOURCE/bin"
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
copyFileToTmpDir "${OUTPUT_PATH}" "${NBTMPDIR}/${PACKAGE_TOP_DIR}bin/${OUTPUT_BASENAME}" 0755


# Generate tar file
cd "${TOP}"
<<<<<<< HEAD
rm -f ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/package/QtApplication1.tar
cd ${NBTMPDIR}
tar -vcf ../../../../${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/package/QtApplication1.tar *
=======
rm -f ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/package/SOURCE.tar
cd ${NBTMPDIR}
tar -vcf ../../../../${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/package/SOURCE.tar *
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
checkReturnCode

# Cleanup
cd "${TOP}"
rm -rf ${NBTMPDIR}
