QT += widgets sql

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addscreen.cpp \
    database.cpp \
    databaseutils.cpp \
    deletescreen.cpp \
    editscreen.cpp \
    filterscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    searchscreen.cpp \
    sortscreen.cpp \
    statscreen.cpp

HEADERS += \
    addscreen.h \
    database.h \
    databaseutils.h \
    deletescreen.h \
    editscreen.h \
    filterscreen.h \
    mainwindow.h \
    searchscreen.h \
    sortscreen.h \
    statscreen.h

FORMS += \
    addscreen.ui \
    deletescreen.ui \
    editscreen.ui \
    filterscreen.ui \
    mainwindow.ui \
    searchscreen.ui \
    sortscreen.ui \
    statscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
