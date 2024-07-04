#include "weatherdata.h"
#include <QJsonDocument>
#include <QDate>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include<QJsonArray>
Today::Today()
{
    date = "0000-00-00";
    city = "null";
    fl = u8"无数据";
    fx = u8"无数据";
    ganmao = u8"无数据";
    notice = u8"无数据";
    pm25 = u8"无数据";
    quality = u8"无数据";
    shidu = u8"无数据";
    sunrise = "00:00";
    sunset = "00:00";
    wendu = "null";
    type = u8"无数据";
}

Today &Today::operator=(const QJsonObject &jsObj)
{
    QString dataStr = jsObj["date"].toString();
    date = QDate::fromString(dataStr,"yyyyMMdd").toString("yyyy-MM-dd");
    city = jsObj.value("cityInfo").toObject().value("city").toString();
    //解析data
    QJsonObject dataObj = jsObj["data"].toObject();
    shidu = dataObj.value("shidu").toString();
    pm25 = QString::number(dataObj["pm25"].toDouble());
    quality = dataObj["quality"].toString();
    wendu = dataObj["wendu"].toString()+u8"°";
    ganmao = dataObj["ganmao"].toString();
    QJsonArray forecastArr = dataObj["forecast"].toArray();
    QJsonObject todayObj = forecastArr[0].toObject();
    fx = todayObj["fx"].toString();
    fl = todayObj["fl"].toString();
    type = todayObj["type"].toString();
    sunrise = todayObj["sunrise"].toString();
    sunset = todayObj["sunset"].toString();
    notice = todayObj["notice"].toString();
    return *this;
}

Forecast::Forecast()
{
    aqi = "0";
    date = u8"00日星期0";
    week = u8"星期0";
    high = u8"高温 0.0℃";
    low = u8"低温 0.0℃";
    type = "undefined";
}

Forecast &Forecast::operator=(const QJsonObject &obj)
{
    date = obj["date"].toString();
    week = obj["week"].toString();
    high = obj["high"].toString();
    low = obj["low"].toString();
    aqi = QString::number(obj.value("aqi").toDouble());
    type = obj.value("type").toString();
    return * this;
}

