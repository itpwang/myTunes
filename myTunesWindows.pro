QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myTunes
TEMPLATE = app


SOURCES += main.cpp \
    library.cpp \
    mainwindow.cpp \
    musicEngine.cpp \
    time.cpp


HEADERS += \
    library.h \
    mainwindow.h \
    musicEngine.h \
    time.h

FORMS    += mainwindow.ui

OTHER_FILES +=




