QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle
CONFIG += qt
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        application.cpp \
        circle.cpp \
        ellipse.cpp \
        equilateraltriangle.cpp \
        figure.cpp \
        isoscelestriangle.cpp \
        main.cpp \
        parallelogram.cpp \
        quadrangle.cpp \
        rectangle.cpp \
        rhombus.cpp \
        square.cpp \
        triangle.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    application.h \
    circle.h \
    ellipse.h \
    equilateraltriangle.h \
    figure.h \
    isoscelestriangle.h \
    parallelogram.h \
    quadrangle.h \
    rectangle.h \
    rhombus.h \
    square.h \
    triangle.h
