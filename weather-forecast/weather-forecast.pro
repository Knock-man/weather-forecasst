QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    weatherdata.cpp

HEADERS += \
    WeatherTool.h \
    mainwindow.h \
    weatherdata.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    weather-forecast_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = $${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons/icons.qrc \
    images/images.qrc \
    weatherIcons/weatypeico.qrc

DISTFILES += \
    icons/close.ico \
    icons/leaf.ico \
    icons/location.ico \
    icons/refresh.ico \
    icons/search.ico \
    images/weaUI.png \
    weatherIcons/day/undefined.png \
    weatherIcons/day/中到大雨.png \
    weatherIcons/day/中到大雪.png \
    weatherIcons/day/中雨.png \
    weatherIcons/day/中雪.png \
    weatherIcons/day/冻雨.png \
    weatherIcons/day/多云.png \
    weatherIcons/day/大到暴雨.png \
    weatherIcons/day/大到暴雪.png \
    weatherIcons/day/大暴雨.png \
    weatherIcons/day/大暴雨到特大暴雨.png \
    weatherIcons/day/大雨.png \
    weatherIcons/day/大雪.png \
    weatherIcons/day/小到中雨.png \
    weatherIcons/day/小到中雪.png \
    weatherIcons/day/小雨.png \
    weatherIcons/day/小雪.png \
    weatherIcons/day/强沙尘暴.png \
    weatherIcons/day/扬沙.png \
    weatherIcons/day/晴.png \
    weatherIcons/day/暴雨.png \
    weatherIcons/day/暴雨到大暴雨.png \
    weatherIcons/day/暴雪.png \
    weatherIcons/day/沙尘暴.png \
    weatherIcons/day/浮沉.png \
    weatherIcons/day/特大暴雨.png \
    weatherIcons/day/阴.png \
    weatherIcons/day/阵雨.png \
    weatherIcons/day/阵雪.png \
    weatherIcons/day/雨.png \
    weatherIcons/day/雨夹雪.png \
    weatherIcons/day/雪.png \
    weatherIcons/day/雷阵雨.png \
    weatherIcons/day/雷阵雨伴有冰雹.png \
    weatherIcons/day/雾.png \
    weatherIcons/day/霾.png \
    weatherIcons/night/undefined.png \
    weatherIcons/night/中到大雨.png \
    weatherIcons/night/中到大雪.png \
    weatherIcons/night/中雨.png \
    weatherIcons/night/中雪.png \
    weatherIcons/night/冻雨.png \
    weatherIcons/night/多云.png \
    weatherIcons/night/大到暴雨.png \
    weatherIcons/night/大到暴雪.png \
    weatherIcons/night/大暴雨.png \
    weatherIcons/night/大暴雨到特大暴雨.png \
    weatherIcons/night/大雨.png \
    weatherIcons/night/大雪.png \
    weatherIcons/night/小到中雨.png \
    weatherIcons/night/小到中雪.png \
    weatherIcons/night/小雨.png \
    weatherIcons/night/小雪.png \
    weatherIcons/night/强沙尘暴.png \
    weatherIcons/night/扬沙.png \
    weatherIcons/night/晴.png \
    weatherIcons/night/暴雨.png \
    weatherIcons/night/暴雨到大暴雨.png \
    weatherIcons/night/暴雪.png \
    weatherIcons/night/沙尘暴.png \
    weatherIcons/night/浮沉.png \
    weatherIcons/night/特大暴雨.png \
    weatherIcons/night/阴.png \
    weatherIcons/night/阵雨.png \
    weatherIcons/night/阵雪.png \
    weatherIcons/night/雨.png \
    weatherIcons/night/雨夹雪.png \
    weatherIcons/night/雪.png \
    weatherIcons/night/雷阵雨.png \
    weatherIcons/night/雷阵雨伴有冰雹.png \
    weatherIcons/night/雾.png \
    weatherIcons/night/霾.png
