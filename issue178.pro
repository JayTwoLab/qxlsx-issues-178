QT += core

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

##########################################################################
# NOTE: You can fix value of QXlsx path of source code.
QXLSX_PARENTPATH=../QXlsx/QXlsx
QXLSX_HEADERPATH=../QXlsx/QXlsx/header/
QXLSX_SOURCEPATH=../QXlsx/QXlsx/source/
include(../QXlsx/QXlsx/QXlsx.pri)


SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

