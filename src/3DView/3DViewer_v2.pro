QT       += core gui opengl openglwidgets printsupport

include(QtGifImage-master/src/gifimage/qtgifimage.pri)
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

win32 {
    LIBS += -lopengl32
}
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    model/affine.cpp \
    model/facade.cpp \
    model/parser.cpp \
    view/glview.cpp \
    main.cpp \
    mainwindow.cpp \
    view/record_media.cpp

HEADERS += \
    model/affine.h \
    model/facade.h \
    model/parser.h \
    view/glview.h \
    mainwindow.h \
    view/record_media.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
