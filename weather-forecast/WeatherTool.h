#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include<QJsonArray>
#include<QDebug>
#include <QString>
#include <iostream>
#include <map>
#include <QFile>
#include <QCoreApplication>
//返回城市对应的邮政编码
class WeatherTool
{
public:
    WeatherTool(){
        //打开文件 加载json数据 取出城市名和邮政编码
        QString fileName = QCoreApplication::applicationDirPath();
        fileName += "/citycode-2019-08-23.json";
        qDebug() << u8"配置文件：" << fileName;
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << u8"无法打开文件：" << file.errorString();
            return; // 或处理错误
        }
        QByteArray json = file.readAll();
        file.close();
        QJsonParseError err;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(json,&err);
        QJsonArray citys = jsonDoc.array();
        for(int i=0;i<citys.size();i++){
            QString code = citys.at(i).toObject().value("city_code").toString();
            QString city = citys.at(i).toObject().value("city_name").toString();
            if(code.size()>0){
                m_mapCity2Code[city]=code;
            }
        }
    }

    QString operator[](const QString& city){
        auto it = m_mapCity2Code.find(city);
        if(it==m_mapCity2Code.end()){
            it=m_mapCity2Code.find(city+u8"市");
        }
        if(it==m_mapCity2Code.end()){
            it=m_mapCity2Code.find(city+u8"县");
        }
        if(it!=m_mapCity2Code.end()){
            return it->second;
        }
        return "000000000";
    }
private:
    std::map<QString,QString> m_mapCity2Code;
};

#endif // WEATHERTOOL_H
