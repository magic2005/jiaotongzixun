QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    algraph.cpp \
    cityedit.cpp \
    main.cpp \
    mainwindow.cpp \
    pathadd.cpp \
    pathchoose_page.cpp \
    pathmodify.cpp

HEADERS += \
    algraph.h \
    cityedit.h \
    mainwindow.h \
    pathadd.h \
    pathchoose_page.h \
    pathmodify.h

FORMS += \
    cityedit.ui \
    mainwindow.ui \
    pathadd.ui \
    pathchoose_page.ui \
    pathedit.ui \
    pathmodify.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
#//避免中文乱码
#win32-msvc*{
#  QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8
# }
DISTFILES += \
    D:\\holidaytest2\\holidaytest2\\plane_city.txt\
    D:\\holidaytest2\\holidaytest2\\plane_line.txt\
    D:\\holidaytest2\\holidaytest2\\train_city.txt\
    D:\\holidaytest2\\holidaytest2\\train_line.txt\


RESOURCES += \
    background.qrc \
    mainQSS.qrc
