#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#define SPAN_INDEX 1.7 // 温度曲线间隔指数
#define ORIGIN_SIZE 3 // 温度曲线原点大小
#define TEMPERATURE_STARTING_COORDINATE 40 // 高温平均值起始坐标

// 日出日落底线
const QPoint MainWindow::sun[2] = {
    QPoint(20, 75),
    QPoint(130, 75)
};

// 日出日落时间
const QRect MainWindow::sunRizeSet[2] = {
    QRect(0, 80, 50, 20),
    QRect(100, 80, 50, 20)
};

// 日出日落圆弧
const QRect MainWindow::rect[2] = {
    QRect(25, 25, 100, 100), // 虚线圆弧
    QRect(50, 80, 50, 20) // “日出日落”文本
};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口属性为没有边框的窗口 没有标题栏
    setWindowFlag(Qt::FramelessWindowHint);
    setFixedSize(width(),height());//设置固定窗口大小
    exitMenu = new QMenu(this);//创建一个菜单
    exitAct = new QAction;//创建一个选项
    exitAct->setText(u8"退出");
    exitAct->setIcon(QIcon(":/weatherIco/close.ico"));
    exitMenu->addAction((exitAct));//选项添加进菜单
    connect(exitAct,SIGNAL(triggered(bool)),this,SLOT(slo_exitApp()));//点击选项关闭窗口

    //UI初始化
    forecast_week_list << ui->week0Lb << ui->week1Lb << ui->week2Lb << ui->week3Lb << ui->week4Lb << ui->week5Lb;
    forecast_date_list << ui->date0Lb << ui->date1Lb << ui->date2Lb << ui->date3Lb << ui->date4Lb << ui->date5Lb;
    forecast_aqi_list << ui->quality0Lb << ui->quality1Lb << ui->quality2Lb << ui->quality3Lb << ui->quality4Lb << ui->quality5Lb;
    forecast_type_list << ui->type0Lb << ui->type1Lb << ui->type2Lb << ui->type3Lb << ui->type4Lb << ui->type5Lb;
    forecast_typeIco_list << ui->typeIco0Lb << ui->typeIco1Lb << ui->typeIco2Lb << ui->typeIco3Lb << ui->typeIco4Lb << ui->typeIco5Lb;
    forecast_high_list << ui->high0Lb << ui->high1Lb << ui->high2Lb << ui->high3Lb << ui->high4Lb << ui->high5Lb;
    forecast_low_list << ui->low0Lb << ui->low1Lb << ui->low2Lb << ui->low3Lb << ui->low4Lb << ui->low5Lb;

    // dateLb和WeekLb样式表设置
    for (int i = 0; i < 6; i++)
    {
        forecast_date_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
        forecast_week_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
    }

    //设置输入框为圆角为输入框
    ui->cityLineEdit->setStyleSheet("QLineEdit{border: 1px solid gray; border-radius: 4px; background:argb(47, 47, 47, 130); color:rgb(255, 255, 255);} QLineEdit:hover{border-color:rgb(101, 255, 106); }");

    //网络请求初始化
    url = "http://t.weather.itboy.net/api/weather/city/";
    city = u8"阳新";
    cityTmp = city;
    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replayFinished(QNetworkReply*)));
    getWeatherInfo(manager);


    //过滤器
    ui->sunRiseSetLb->installEventFilter(this);//日出日落事件该过滤器
    ui->curveLb->installEventFilter(this);//温度曲线事件过滤器
    ui->cityLineEdit->installEventFilter(this);//编辑框事件过滤器

    //日出日落绘制
    sunTimer = new QTimer(ui->sunRiseSetLb);
    connect(sunTimer,SIGNAL(timeout()),ui->sunRiseSetLb,SLOT(update));
    sunTimer->start(200);
}
//接受网络应答
void MainWindow::replayFinished(QNetworkReply* reply)
{
    //获取响应信息 状态码为200表示正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    if(reply->error()!=QNetworkReply::NoError||status_code!=200)
    {
        QMessageBox::warning(this,u8"错误",u8"天气:请求数据错误，检查网络连接",QMessageBox::Ok);
        return;
    }
    QByteArray bytes = reply->readAll();
    qDebug()<<bytes;
    parsseJson(bytes);
}
//绘制日出日落
void MainWindow::paintSunRiseSet()
{
    QPainter painter(ui->sunRiseSetLb);
    //反锯齿设置
    painter.setRenderHint(QPainter::TextAntialiasing,true);

    //绘制底线
    painter.save();
    QPen pen = painter.pen();
    pen.setWidthF(0.5);
    pen.setColor((Qt::yellow));
    painter.setPen(pen);
    painter.drawLine(sun[0],sun[1]);
    painter.restore();

    //绘制文字
    painter.save();
    painter.setFont(QFont("Microsoft Yahei",8,QFont::Normal));//字体大小正常粗细
    painter.setPen(Qt::white);

    if(today.sunrise!=""&&today.sunset!="")
    {
        //在指定矩形内绘制文字 日出时间 日落时间
        painter.drawText(sunRizeSet[0],Qt::AlignCenter,today.sunrise);
        painter.drawText(sunRizeSet[1],Qt::AlignCenter,today.sunset);
    }
    //在指定矩形内绘制文字 日出日落文本
    painter.drawText(rect[1],Qt::AlignCenter,u8"日出日落");
    painter.restore();


    //绘制圆弧
    painter.save();
    pen.setWidth(0.5); //设置线条的宽度0.5
    pen.setStyle(Qt::DotLine);//虚线
    pen.setColor(Qt::green);//设置颜色
    painter.setPen(pen);
    painter.drawArc(rect[0],0*16,180*16);//绘制圆弧
    painter.restore();


    // 绘制日出日落占比
    if (today.sunrise != "" && today.sunset != "")
    {
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(255, 85, 0, 100));

        int startAngle, spanAngle;
        QString sunsetTime = today.date + " " + today.sunset;
        //当前时间大于日落时间
        if (QDateTime::currentDateTime() > QDateTime::fromString(sunsetTime, "yyyy-MM-dd hh:mm"))
        {
            startAngle = 0 * 16;
            spanAngle = 180 * 16;//结束为180度
        }
        else//当前时间小于日落时间
        {
            // 计算起始角度和跨越角度
            static QStringList sunSetTime = today.sunset.split(":");
            static QStringList sunRiseTime = today.sunrise.split(":");

            static QString sunsetHour = sunSetTime.at(0);//日落时
            static QString sunsetMint = sunSetTime.at(1);//日落分
            static QString sunriseHour = sunRiseTime.at(0);//日出时
            static QString sunriseMint = sunRiseTime.at(1);//日出分

            static int sunrise = sunriseHour.toInt() * 60 + sunriseMint.toInt();//日出时间转为分钟
            static int sunset = sunsetHour.toInt() * 60 + sunsetMint.toInt();//日落时间转为分钟
            int now = QTime::currentTime().hour() * 60 + QTime::currentTime().minute();//当前时间转为分钟

            startAngle = ( (double)(sunset - now) / (sunset - sunrise) ) * 180 * 16;//扇形起始角度
            spanAngle = ( (double)(now - sunrise) / (sunset - sunrise) ) * 180 * 16;//扇形旋转角度
        }

        if (startAngle >= 0 && spanAngle >= 0)
        {
            painter.drawPie(rect[0], startAngle, spanAngle); // 扇形绘制
        }
    }

}

//绘制温度曲线
void MainWindow::paintTemperatureCurve()
{
    QPainter painter(ui->curveLb);
    //反锯齿设置
    painter.setRenderHint(QPainter::TextAntialiasing,true);

    int tempTotal = 0;
    int high[6] = {};//最高温度
    int low[6] = {};//最低温度
    //计算平均值
    QString h,l;
    for(int i = 0;i<6;i++)
    {
        h = forecast[i].high.split(" ").at(1);
        h = h.left(h.length()-1);
        high[i] = (int)(h.toDouble());
        tempTotal += high[i];

        l = forecast[i].low.split(" ").at(1);
        l = l.left(h.length()-1);
        low[i] = (int)(l.toDouble());
    }
    int tempAverage = (int)(tempTotal/6);//最高温度平均值

    // 算出温度对应坐标
    int pointX[6] = {35, 103, 172, 241, 310, 379}; // 点的X坐标
    int pointHY[6] = {0};//高温纵坐标
    int pointLY[6] = {0};//低温纵坐标
    for (int i = 0; i < 6; i++)
    {
        pointHY[i] = TEMPERATURE_STARTING_COORDINATE - ((high[i] - tempAverage) * SPAN_INDEX);//高温纵坐标
        pointLY[i] = TEMPERATURE_STARTING_COORDINATE + ((tempAverage - low[i]) * SPAN_INDEX);//低温纵坐标
    }

    QPen pen = painter.pen();
    pen.setWidth(1);

    // 高温曲线绘制
    painter.save();
    //昨天到今天的
    pen.setColor(QColor(255, 170, 0));
    pen.setStyle(Qt::DotLine);
    painter.setPen(pen);
    painter.setBrush(QColor(255, 170, 0));
    painter.drawEllipse(QPoint(pointX[0], pointHY[0]), ORIGIN_SIZE, ORIGIN_SIZE);//画端点
    painter.drawEllipse(QPoint(pointX[1], pointHY[1]), ORIGIN_SIZE, ORIGIN_SIZE);
    painter.drawLine(pointX[0], pointHY[0], pointX[1], pointHY[1]);//画线
    //今天到未来四天
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    painter.setPen(pen);
    for (int i = 1; i < 5; i++)
    {
        painter.drawEllipse(QPoint(pointX[i+1], pointHY[i+1]), ORIGIN_SIZE, ORIGIN_SIZE);
        painter.drawLine(pointX[i], pointHY[i], pointX[i+1], pointHY[i+1]);
    }
    painter.restore();

    // 低温曲线绘制
    pen.setColor(QColor(0, 255, 255));
    pen.setStyle(Qt::DotLine);
    painter.setPen(pen);
    painter.setBrush(QColor(0, 255, 255));
    painter.drawEllipse(QPoint(pointX[0], pointLY[0]), ORIGIN_SIZE, ORIGIN_SIZE);
    painter.drawEllipse(QPoint(pointX[1], pointLY[1]), ORIGIN_SIZE, ORIGIN_SIZE);
    painter.drawLine(pointX[0], pointLY[0], pointX[1], pointLY[1]);

    pen.setColor(QColor(0, 255, 255));
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    for (int i = 1; i < 5; i++)
    {
        painter.drawEllipse(QPoint(pointX[i+1], pointLY[i+1]), ORIGIN_SIZE, ORIGIN_SIZE);
        painter.drawLine(pointX[i], pointLY[i], pointX[i+1], pointLY[i+1]);
    }

}

//发出网络请求
void MainWindow::getWeatherInfo(QNetworkAccessManager *manager)
{
    QString citycode = tool[city];
    if(citycode=="000000000"){
        QMessageBox::warning(this,u8"错误",u8"天气:指定城市不存在!",QMessageBox::Ok);
        return;
    }
    QUrl jsonUrl(url+citycode);
    qDebug()<<u8"url="<<jsonUrl.toString();
    manager->get(QNetworkRequest(jsonUrl));//发出请求
}

void MainWindow::parsseJson(QByteArray& bytes)
{
    QJsonParseError err;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(bytes,&err);
    if(err.error!=QJsonParseError::NoError)
    {
        return;
    }

    QJsonObject jsObj = jsonDoc.object();
    qDebug()<<jsObj;
    qDebug()<<"===============\r\n";
    qDebug()<<jsObj["message"].toString();
    QString message = jsObj["message"].toString();
    if(message.contains("success")==false)
    {
        QMessageBox::information(this,tr("the information of Json_desc"),u8"天气:城市错误！",QMessageBox::Ok);
        city = cityTmp;
        return;
    }
    today = jsObj;

    //解析data中的yesterday
    QJsonObject dataObj = jsObj["data"].toObject();
    forecast[0] = dataObj["yesterday"].toObject();

    //解析data中的forecast
    QJsonArray forecastArr = dataObj["forecast"].toArray();
    int j = 0;//预报数据从今天开始
    for(int i=1;i<6;i++)
    {
        forecast[i] = forecastArr[j].toObject();
        j++;
    }
    setLabelContent();//更新UI数据
}
//更新UI数据
void MainWindow::setLabelContent()
{
   QStringList dateTime = today.date.split("-");
   QString day = dateTime.at(1);
   //今日数据
   ui->dateLb->setText(today.date);//日期
   ui->temLb->setText(today.wendu);//温度
   ui->cityLb->setText(today.city);//城市
   ui->typeLb->setText(today.type);//天气
   ui->noticeLb->setText(today.notice);//提示
   ui->shiduLb->setText(today.shidu);//湿度
   ui->pm25Lb->setText(today.pm25);//pm2.5
   ui->fxLb->setText(today.fx);//风向
   ui->flLb->setText(today.fl);//风力
   ui->ganmaoBrowser->setText(today.ganmao);//感冒指数

   //六天数据
   // 六天数据
      for (int i = 0; i < 6; i++)
      {
          forecast_week_list[i]->setText(forecast[i].week.right(3));//星期
          forecast_date_list[i]->setText(day+'/'+forecast[i].date.left(3));//日期
          forecast_type_list[i]->setText(forecast[i].type);//温度
          forecast_high_list[i]->setText(forecast[i].high.split(" ").at(1));//最高温度
          forecast_low_list[i]->setText(forecast[i].low.split(" ").at(1));//最低温度
          forecast_typeIco_list[i]->setStyleSheet( tr("image: url(:/day/day/%1.png);").arg(forecast[i].type) );//图标

          //空气质量
          if (forecast[i].aqi.toInt() >= 0 && forecast[i].aqi.toInt() <= 50)
          {
              forecast_aqi_list[i]->setText(u8"优质");
              forecast_aqi_list[i]->setStyleSheet("color: rgb(0, 255, 0);");
          }
          else if (forecast[i].aqi.toInt() > 50 && forecast[i].aqi.toInt() <= 100)
          {
              forecast_aqi_list[i]->setText(u8"良好");
              forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 255, 0);");
          }
          else if (forecast[i].aqi.toInt() > 100 && forecast[i].aqi.toInt() <= 150)
          {
              forecast_aqi_list[i]->setText(u8"轻度污染");
              forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 170, 0);");
          }
          else if (forecast[i].aqi.toInt() > 150 && forecast[i].aqi.toInt() <= 200)
          {
              forecast_aqi_list[i]->setText(u8"重度污染");
              forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 0, 0);");
          }
          else
          {
              forecast_aqi_list[i]->setText(u8"严重污染");
              forecast_aqi_list[i]->setStyleSheet("color: rgb(170, 0, 0);");
          }
      }

      //设置昨天和今天星期数
      ui->week0Lb->setText(u8"昨天");
      ui->week1Lb->setText(u8"今天");

      //温度曲线的绘制和
      ui->curveLb->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    exitMenu->exec(QCursor::pos());
    event->accept();
}

void MainWindow::slo_exitApp()
{
    qApp->exit(0);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    //新鼠标位置-原鼠标和控件的距离=新控件位置
    move(event->globalPos()-mPos);
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{

    //鼠标的坐标-控件的坐标
    mPos = event->globalPos()-this->pos();
}

bool MainWindow::eventFilter(QObject* watched,QEvent* event)
{
    if(watched==ui->sunRiseSetLb&&event->type()==QEvent::Paint)
    {
        ui->sunRiseSetLb->update();
        paintSunRiseSet();
    }
    else if(watched==ui->curveLb&&event->type()==QEvent::Paint)
    {
        paintTemperatureCurve();
    }
    return QWidget::eventFilter(watched,event);
}

//点击刷新
void MainWindow::on_refreshBt_clicked()
{
    getWeatherInfo(manager);
    ui->curveLb->update();
}

//点击搜索
void MainWindow::on_searchBt_clicked()
{
    cityTmp = city;//保存上一个城市
    city = ui->cityLineEdit->text();
    getWeatherInfo(manager);
}
