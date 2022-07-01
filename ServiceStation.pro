QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        camera.cpp \
        charger.cpp \
        client.cpp \
        drinks.cpp \
        main.cpp \
        security.cpp \
        security_alarm.cpp \
        service.cpp \
        snacks.cpp \
        station.cpp \
        vending_machine.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    camera.h \
    charger.h \
    client.h \
    drinks.h \
    security.h \
    security_alarm.h \
    service.h \
    snacks.h \
    station.h \
    vending_machine.h
