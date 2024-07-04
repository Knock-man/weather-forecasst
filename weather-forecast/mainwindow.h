#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMouseEvent>
#include <QAction>
#include <QLabel>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QByteArray>
#include <QList>
#include <QTimer>
#include <QPainter>
#include "WeatherTool.h"
#include "weatherdata.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual bool eventFilter(QObject* watched,QEvent* event);

protected:
    void contextMenuEvent(QContextMenuEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void getWeatherInfo(QNetworkAccessManager *manager);//发出网络请求
    void parsseJson(QByteArray& bytes);
    void setLabelContent();//更新UI数据
    void paintSunRiseSet();//绘制日出日落
    void paintTemperatureCurve();//绘制温度曲线
private slots:
    void slo_exitApp();
    void replayFinished(QNetworkReply* reply);//接收网络应答
    void on_refreshBt_clicked();

    void on_searchBt_clicked();

private:
    Ui::MainWindow *ui;
    QMenu *exitMenu;//右键退出的菜单
    QAction *exitAct;//退出的行为
    QPoint mPos;//鼠标和控件的距离
    //UI
    QList<QLabel *> forecast_week_list;//星期
    QList<QLabel *> forecast_date_list;//日期
    QList<QLabel *> forecast_aqi_list;//天气指数
    QList<QLabel *> forecast_type_list;//天气
    QList<QLabel *> forecast_typeIco_list;//天气图标
    QList<QLabel *> forecast_high_list;//高温
    QList<QLabel *> forecast_low_list;//低温

    //网络请求
    QString url; //接口链接
    QString city;//访问的城市
    QString cityTmp; //临时存放城市变量，防止输入错误城市的时候，原来的城市名称还在
    WeatherTool tool; //天气工具对象
    QNetworkAccessManager* manager;

    //本地数据
    Today today;//今天天气
    Forecast forecast[6];//预报天气

    // 日出日落底线
    static const QPoint sun[2];
    // 日出日落时间
    static const QRect sunRizeSet[2];
    // 日出日落圆弧
    static const QRect rect[2];

    QTimer* sunTimer;
};
#endif // MAINWINDOW_H
