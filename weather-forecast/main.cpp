#include "mainwindow.h"

#include <QApplication>
//查询天气接口：http://t.weather.itboy.net/api/weather/city/101010100
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
