QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        charger.cpp \
        client.cpp \
        main.cpp \
        security.cpp \
        security_alarm.cpp \
        service.cpp \
        station.cpp \
        vending_machine.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    charger.h \
    client.h \
    security.h \
    security_alarm.h \
    service.h \
    station.h \
    vending_machine.h

FORMS += \
    mainwindow.ui
