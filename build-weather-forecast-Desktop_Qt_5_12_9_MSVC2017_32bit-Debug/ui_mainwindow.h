/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *cityLineEdit;
    QLabel *dateLb;
    QFrame *hline_1;
    QFrame *hline_10;
    QFrame *hline_11;
    QLabel *titleLb;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *shiduLb;
    QLabel *fxTitleLb;
    QLabel *flLb;
    QLabel *pm25Lb;
    QLabel *pm25TitleLb;
    QLabel *fxLb;
    QLabel *shiduTitleLb;
    QLabel *FlTitleLb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *cityLb;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *high2Lb;
    QLabel *high3Lb;
    QLabel *quality4Lb;
    QLabel *quality5Lb;
    QLabel *week3Lb;
    QLabel *date1Lb;
    QLabel *low4Lb;
    QLabel *low5Lb;
    QLabel *high5Lb;
    QLabel *high4Lb;
    QLabel *week4Lb;
    QLabel *quality2Lb;
    QLabel *low2Lb;
    QLabel *week5Lb;
    QLabel *high1Lb;
    QLabel *week1Lb;
    QLabel *date0Lb;
    QLabel *typeIco3Lb;
    QLabel *low1Lb;
    QLabel *date4Lb;
    QLabel *date2Lb;
    QLabel *typeIco5Lb;
    QLabel *quality1Lb;
    QLabel *typeIco4Lb;
    QLabel *week2Lb;
    QLabel *typeIco1Lb;
    QLabel *typeIco0Lb;
    QLabel *high0Lb;
    QLabel *week0Lb;
    QLabel *low3Lb;
    QLabel *quality3Lb;
    QLabel *typeIco2Lb;
    QLabel *quality0Lb;
    QLabel *low0Lb;
    QLabel *date3Lb;
    QLabel *date5Lb;
    QLabel *type0Lb;
    QLabel *type1Lb;
    QLabel *type2Lb;
    QLabel *type3Lb;
    QLabel *type4Lb;
    QLabel *type5Lb;
    QLabel *curveLb;
    QLabel *leafLb;
    QLabel *qualityLb;
    QLabel *temLb;
    QLabel *typeLb;
    QLabel *typeicoLb;
    QLabel *noticeLb;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QTextBrowser *ganmaoBrowser;
    QFrame *line;
    QToolButton *searchBt;
    QToolButton *refreshBt;
    QLabel *sunRiseSetLb;
    QStatusBar *statusbar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 800, 450));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"border-image:url(:/weaUI/weaUI.png);\n"
"color:rgb(255,255,255);\n"
"}\n"
"QLabel{\n"
"font:25 10pt \"Microsoft YaHei\";\n"
"border-radius:4 px;\n"
"background-color:argb(60,60,60,130);\n"
"color:rgb(255,255,255);\n"
"}\n"
"Line{\n"
"background-color:rgb(0,85,0);\n"
"}"));
        cityLineEdit = new QLineEdit(widget);
        cityLineEdit->setObjectName(QString::fromUtf8("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(575, 10, 171, 31));
        cityLineEdit->setCursor(QCursor(Qt::SizeVerCursor));
        dateLb = new QLabel(widget);
        dateLb->setObjectName(QString::fromUtf8("dateLb"));
        dateLb->setGeometry(QRect(190, 3, 421, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        dateLb->setFont(font);
        dateLb->setStyleSheet(QString::fromUtf8("font:20pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color:rgb(255,255,255);\n"
"background-color:rgb(255,255,255,0);"));
        dateLb->setAlignment(Qt::AlignCenter);
        hline_1 = new QFrame(widget);
        hline_1->setObjectName(QString::fromUtf8("hline_1"));
        hline_1->setGeometry(QRect(10, 45, 781, 1));
        hline_1->setFrameShape(QFrame::HLine);
        hline_1->setFrameShadow(QFrame::Sunken);
        hline_10 = new QFrame(widget);
        hline_10->setObjectName(QString::fromUtf8("hline_10"));
        hline_10->setGeometry(QRect(10, 183, 351, 1));
        hline_10->setFrameShape(QFrame::HLine);
        hline_10->setFrameShadow(QFrame::Sunken);
        hline_11 = new QFrame(widget);
        hline_11->setObjectName(QString::fromUtf8("hline_11"));
        hline_11->setGeometry(QRect(10, 335, 351, 1));
        hline_11->setFrameShape(QFrame::HLine);
        hline_11->setFrameShadow(QFrame::Sunken);
        titleLb = new QLabel(widget);
        titleLb->setObjectName(QString::fromUtf8("titleLb"));
        titleLb->setGeometry(QRect(80, 10, 171, 31));
        titleLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(85, 255, 0);"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 190, 351, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        shiduLb = new QLabel(gridLayoutWidget);
        shiduLb->setObjectName(QString::fromUtf8("shiduLb"));
        shiduLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduLb, 0, 1, 1, 2);

        fxTitleLb = new QLabel(gridLayoutWidget);
        fxTitleLb->setObjectName(QString::fromUtf8("fxTitleLb"));
        fxTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxTitleLb, 2, 0, 1, 1);

        flLb = new QLabel(gridLayoutWidget);
        flLb->setObjectName(QString::fromUtf8("flLb"));
        flLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flLb, 3, 1, 1, 2);

        pm25Lb = new QLabel(gridLayoutWidget);
        pm25Lb->setObjectName(QString::fromUtf8("pm25Lb"));
        pm25Lb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25Lb, 1, 1, 1, 2);

        pm25TitleLb = new QLabel(gridLayoutWidget);
        pm25TitleLb->setObjectName(QString::fromUtf8("pm25TitleLb"));
        pm25TitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25TitleLb, 1, 0, 1, 1);

        fxLb = new QLabel(gridLayoutWidget);
        fxLb->setObjectName(QString::fromUtf8("fxLb"));
        fxLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxLb, 2, 1, 1, 2);

        shiduTitleLb = new QLabel(gridLayoutWidget);
        shiduTitleLb->setObjectName(QString::fromUtf8("shiduTitleLb"));
        shiduTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduTitleLb, 0, 0, 1, 1);

        FlTitleLb = new QLabel(gridLayoutWidget);
        FlTitleLb->setObjectName(QString::fromUtf8("FlTitleLb"));
        FlTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FlTitleLb, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(170, 60, 101, 37));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color:argb(60,60,60,0);\n"
"image:url(:/weatherIco/location.ico);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cityLb = new QLabel(gridLayoutWidget_2);
        cityLb->setObjectName(QString::fromUtf8("cityLb"));
        cityLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font:16pt \"Microsoft YaHei UI\";\n"
"background-color:rgba(60,60,60,0);"));
        cityLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cityLb, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(370, 50, 421, 391));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(2);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        high2Lb = new QLabel(gridLayoutWidget_3);
        high2Lb->setObjectName(QString::fromUtf8("high2Lb"));
        high2Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high2Lb, 6, 2, 1, 1);

        high3Lb = new QLabel(gridLayoutWidget_3);
        high3Lb->setObjectName(QString::fromUtf8("high3Lb"));
        high3Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high3Lb, 6, 3, 1, 1);

        quality4Lb = new QLabel(gridLayoutWidget_3);
        quality4Lb->setObjectName(QString::fromUtf8("quality4Lb"));
        quality4Lb->setStyleSheet(QString::fromUtf8("color:rgb(170,0,0)"));
        quality4Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality4Lb, 2, 4, 1, 1);

        quality5Lb = new QLabel(gridLayoutWidget_3);
        quality5Lb->setObjectName(QString::fromUtf8("quality5Lb"));
        quality5Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality5Lb, 2, 5, 1, 1);

        week3Lb = new QLabel(gridLayoutWidget_3);
        week3Lb->setObjectName(QString::fromUtf8("week3Lb"));
        week3Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week3Lb, 0, 3, 1, 1);

        date1Lb = new QLabel(gridLayoutWidget_3);
        date1Lb->setObjectName(QString::fromUtf8("date1Lb"));
        date1Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date1Lb, 1, 1, 1, 1);

        low4Lb = new QLabel(gridLayoutWidget_3);
        low4Lb->setObjectName(QString::fromUtf8("low4Lb"));
        low4Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low4Lb, 11, 4, 1, 1);

        low5Lb = new QLabel(gridLayoutWidget_3);
        low5Lb->setObjectName(QString::fromUtf8("low5Lb"));
        low5Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low5Lb, 11, 5, 1, 1);

        high5Lb = new QLabel(gridLayoutWidget_3);
        high5Lb->setObjectName(QString::fromUtf8("high5Lb"));
        high5Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high5Lb, 6, 5, 1, 1);

        high4Lb = new QLabel(gridLayoutWidget_3);
        high4Lb->setObjectName(QString::fromUtf8("high4Lb"));
        high4Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high4Lb, 6, 4, 1, 1);

        week4Lb = new QLabel(gridLayoutWidget_3);
        week4Lb->setObjectName(QString::fromUtf8("week4Lb"));
        week4Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week4Lb, 0, 4, 1, 1);

        quality2Lb = new QLabel(gridLayoutWidget_3);
        quality2Lb->setObjectName(QString::fromUtf8("quality2Lb"));
        quality2Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,170,0)"));
        quality2Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality2Lb, 2, 2, 1, 1);

        low2Lb = new QLabel(gridLayoutWidget_3);
        low2Lb->setObjectName(QString::fromUtf8("low2Lb"));
        low2Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low2Lb, 11, 2, 1, 1);

        week5Lb = new QLabel(gridLayoutWidget_3);
        week5Lb->setObjectName(QString::fromUtf8("week5Lb"));
        week5Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week5Lb, 0, 5, 1, 1);

        high1Lb = new QLabel(gridLayoutWidget_3);
        high1Lb->setObjectName(QString::fromUtf8("high1Lb"));
        high1Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high1Lb, 6, 1, 1, 1);

        week1Lb = new QLabel(gridLayoutWidget_3);
        week1Lb->setObjectName(QString::fromUtf8("week1Lb"));
        week1Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week1Lb, 0, 1, 1, 1);

        date0Lb = new QLabel(gridLayoutWidget_3);
        date0Lb->setObjectName(QString::fromUtf8("date0Lb"));
        date0Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date0Lb, 1, 0, 1, 1);

        typeIco3Lb = new QLabel(gridLayoutWidget_3);
        typeIco3Lb->setObjectName(QString::fromUtf8("typeIco3Lb"));
        typeIco3Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco3Lb, 4, 3, 2, 1);

        low1Lb = new QLabel(gridLayoutWidget_3);
        low1Lb->setObjectName(QString::fromUtf8("low1Lb"));
        low1Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low1Lb, 11, 1, 1, 1);

        date4Lb = new QLabel(gridLayoutWidget_3);
        date4Lb->setObjectName(QString::fromUtf8("date4Lb"));
        date4Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date4Lb, 1, 4, 1, 1);

        date2Lb = new QLabel(gridLayoutWidget_3);
        date2Lb->setObjectName(QString::fromUtf8("date2Lb"));
        date2Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date2Lb, 1, 2, 1, 1);

        typeIco5Lb = new QLabel(gridLayoutWidget_3);
        typeIco5Lb->setObjectName(QString::fromUtf8("typeIco5Lb"));
        typeIco5Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco5Lb, 4, 5, 2, 1);

        quality1Lb = new QLabel(gridLayoutWidget_3);
        quality1Lb->setObjectName(QString::fromUtf8("quality1Lb"));
        quality1Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)"));
        quality1Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality1Lb, 2, 1, 1, 1);

        typeIco4Lb = new QLabel(gridLayoutWidget_3);
        typeIco4Lb->setObjectName(QString::fromUtf8("typeIco4Lb"));
        typeIco4Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco4Lb, 4, 4, 2, 1);

        week2Lb = new QLabel(gridLayoutWidget_3);
        week2Lb->setObjectName(QString::fromUtf8("week2Lb"));
        week2Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week2Lb, 0, 2, 1, 1);

        typeIco1Lb = new QLabel(gridLayoutWidget_3);
        typeIco1Lb->setObjectName(QString::fromUtf8("typeIco1Lb"));
        typeIco1Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco1Lb, 4, 1, 2, 1);

        typeIco0Lb = new QLabel(gridLayoutWidget_3);
        typeIco0Lb->setObjectName(QString::fromUtf8("typeIco0Lb"));
        typeIco0Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco0Lb, 4, 0, 2, 1);

        high0Lb = new QLabel(gridLayoutWidget_3);
        high0Lb->setObjectName(QString::fromUtf8("high0Lb"));
        high0Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(high0Lb, 6, 0, 1, 1);

        week0Lb = new QLabel(gridLayoutWidget_3);
        week0Lb->setObjectName(QString::fromUtf8("week0Lb"));
        week0Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(week0Lb, 0, 0, 1, 1);

        low3Lb = new QLabel(gridLayoutWidget_3);
        low3Lb->setObjectName(QString::fromUtf8("low3Lb"));
        low3Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low3Lb, 11, 3, 1, 1);

        quality3Lb = new QLabel(gridLayoutWidget_3);
        quality3Lb->setObjectName(QString::fromUtf8("quality3Lb"));
        quality3Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,0,0)"));
        quality3Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality3Lb, 2, 3, 1, 1);

        typeIco2Lb = new QLabel(gridLayoutWidget_3);
        typeIco2Lb->setObjectName(QString::fromUtf8("typeIco2Lb"));
        typeIco2Lb->setStyleSheet(QString::fromUtf8("image:url(:/day/day/\351\233\250.png);"));
        typeIco2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco2Lb, 4, 2, 2, 1);

        quality0Lb = new QLabel(gridLayoutWidget_3);
        quality0Lb->setObjectName(QString::fromUtf8("quality0Lb"));
        quality0Lb->setStyleSheet(QString::fromUtf8("color:rgb(0,170,0);"));
        quality0Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(quality0Lb, 2, 0, 1, 1);

        low0Lb = new QLabel(gridLayoutWidget_3);
        low0Lb->setObjectName(QString::fromUtf8("low0Lb"));
        low0Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(low0Lb, 11, 0, 1, 1);

        date3Lb = new QLabel(gridLayoutWidget_3);
        date3Lb->setObjectName(QString::fromUtf8("date3Lb"));
        date3Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date3Lb, 1, 3, 1, 1);

        date5Lb = new QLabel(gridLayoutWidget_3);
        date5Lb->setObjectName(QString::fromUtf8("date5Lb"));
        date5Lb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(date5Lb, 1, 5, 1, 1);

        type0Lb = new QLabel(gridLayoutWidget_3);
        type0Lb->setObjectName(QString::fromUtf8("type0Lb"));
        type0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type0Lb, 3, 0, 1, 1);

        type1Lb = new QLabel(gridLayoutWidget_3);
        type1Lb->setObjectName(QString::fromUtf8("type1Lb"));
        type1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type1Lb, 3, 1, 1, 1);

        type2Lb = new QLabel(gridLayoutWidget_3);
        type2Lb->setObjectName(QString::fromUtf8("type2Lb"));
        type2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type2Lb, 3, 2, 1, 1);

        type3Lb = new QLabel(gridLayoutWidget_3);
        type3Lb->setObjectName(QString::fromUtf8("type3Lb"));
        type3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type3Lb, 3, 3, 1, 1);

        type4Lb = new QLabel(gridLayoutWidget_3);
        type4Lb->setObjectName(QString::fromUtf8("type4Lb"));
        type4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type4Lb, 3, 4, 1, 1);

        type5Lb = new QLabel(gridLayoutWidget_3);
        type5Lb->setObjectName(QString::fromUtf8("type5Lb"));
        type5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type5Lb, 3, 5, 1, 1);

        curveLb = new QLabel(gridLayoutWidget_3);
        curveLb->setObjectName(QString::fromUtf8("curveLb"));
        curveLb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(curveLb, 7, 0, 4, 6);

        leafLb = new QLabel(widget);
        leafLb->setObjectName(QString::fromUtf8("leafLb"));
        leafLb->setGeometry(QRect(18, 58, 20, 20));
        leafLb->setStyleSheet(QString::fromUtf8("image:url(:/weatherIco/leaf.ico);\n"
"background-color:argb(255,255,255,0);"));
        qualityLb = new QLabel(widget);
        qualityLb->setObjectName(QString::fromUtf8("qualityLb"));
        qualityLb->setGeometry(QRect(38, 58, 56, 20));
        qualityLb->setStyleSheet(QString::fromUtf8("background-color:argb(255,255,255,0);"));
        qualityLb->setMidLineWidth(0);
        temLb = new QLabel(widget);
        temLb->setObjectName(QString::fromUtf8("temLb"));
        temLb->setGeometry(QRect(10, 50, 211, 101));
        temLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font:50pt \"Arial\";"));
        temLb->setAlignment(Qt::AlignCenter);
        typeLb = new QLabel(widget);
        typeLb->setObjectName(QString::fromUtf8("typeLb"));
        typeLb->setGeometry(QRect(140, 120, 101, 31));
        typeLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:argb(60,60,60,0);"));
        typeLb->setAlignment(Qt::AlignCenter);
        typeicoLb = new QLabel(widget);
        typeicoLb->setObjectName(QString::fromUtf8("typeicoLb"));
        typeicoLb->setGeometry(QRect(260, 63, 101, 101));
        typeicoLb->setStyleSheet(QString::fromUtf8("border-image:url(:/day/day/\346\231\264.png);\n"
"background-color:argb(60,60,60,0);"));
        noticeLb = new QLabel(widget);
        noticeLb->setObjectName(QString::fromUtf8("noticeLb"));
        noticeLb->setGeometry(QRect(10, 160, 351, 21));
        noticeLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:argb(60,60,60,0);"));
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 340, 189, 101));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 1, 0, 2, 1);

        ganmaoBrowser = new QTextBrowser(gridLayoutWidget_4);
        ganmaoBrowser->setObjectName(QString::fromUtf8("ganmaoBrowser"));
        ganmaoBrowser->setStyleSheet(QString::fromUtf8("background-color: #333;\n"
"color: white;\n"
"font-family: Arial, sans-serif;\n"
"font-size: 13px;\n"
"text-align: center;\n"
"padding: 20px;"));

        gridLayout_5->addWidget(ganmaoBrowser, 1, 2, 2, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(202, 340, 1, 100));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        searchBt = new QToolButton(widget);
        searchBt->setObjectName(QString::fromUtf8("searchBt"));
        searchBt->setGeometry(QRect(722, 15, 20, 20));
        searchBt->setCursor(QCursor(Qt::PointingHandCursor));
        searchBt->setStyleSheet(QString::fromUtf8("border-image:url(:/weatherIco/search.ico)"));
        refreshBt = new QToolButton(widget);
        refreshBt->setObjectName(QString::fromUtf8("refreshBt"));
        refreshBt->setGeometry(QRect(753, 10, 37, 31));
        refreshBt->setCursor(QCursor(Qt::PointingHandCursor));
        refreshBt->setStyleSheet(QString::fromUtf8("image:url(:/weatherIco/refresh.ico);\n"
"background-color:argb(255,255,255,0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/weatherIco/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBt->setIcon(icon);
        refreshBt->setIconSize(QSize(31, 31));
        sunRiseSetLb = new QLabel(widget);
        sunRiseSetLb->setObjectName(QString::fromUtf8("sunRiseSetLb"));
        sunRiseSetLb->setGeometry(QRect(210, 340, 150, 100));
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 20));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        dateLb->setText(QApplication::translate("MainWindow", "2024-7-24", nullptr));
        titleLb->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        shiduLb->setText(QApplication::translate("MainWindow", "95%", nullptr));
        fxTitleLb->setText(QApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        flLb->setText(QApplication::translate("MainWindow", "<3\347\272\247", nullptr));
        pm25Lb->setText(QApplication::translate("MainWindow", "0", nullptr));
        pm25TitleLb->setText(QApplication::translate("MainWindow", "PM2.5", nullptr));
        fxLb->setText(QApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        shiduTitleLb->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        FlTitleLb->setText(QApplication::translate("MainWindow", "\351\243\216\345\212\233", nullptr));
        label->setText(QString());
        cityLb->setText(QApplication::translate("MainWindow", "\351\225\277\346\262\231", nullptr));
        high2Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        high3Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        quality4Lb->setText(QApplication::translate("MainWindow", "\344\270\245\351\207\215\346\261\241\346\237\223", nullptr));
        quality5Lb->setText(QApplication::translate("MainWindow", "\350\211\257", nullptr));
        week3Lb->setText(QApplication::translate("MainWindow", "\345\220\216\345\244\251", nullptr));
        date1Lb->setText(QApplication::translate("MainWindow", "02/02", nullptr));
        low4Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        low5Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        high5Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        high4Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        week4Lb->setText(QApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        quality2Lb->setText(QApplication::translate("MainWindow", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        low2Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        week5Lb->setText(QApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        high1Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        week1Lb->setText(QApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        date0Lb->setText(QApplication::translate("MainWindow", "01/01", nullptr));
        typeIco3Lb->setText(QString());
        low1Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        date4Lb->setText(QApplication::translate("MainWindow", "05/05", nullptr));
        date2Lb->setText(QApplication::translate("MainWindow", "03/03", nullptr));
        typeIco5Lb->setText(QString());
        quality1Lb->setText(QApplication::translate("MainWindow", "\350\211\257\345\245\275", nullptr));
        typeIco4Lb->setText(QString());
        week2Lb->setText(QApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        typeIco1Lb->setText(QString());
        typeIco0Lb->setText(QString());
        high0Lb->setText(QApplication::translate("MainWindow", "10\302\260", nullptr));
        week0Lb->setText(QApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        low3Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        quality3Lb->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\246\346\261\241\346\237\223", nullptr));
        typeIco2Lb->setText(QString());
        quality0Lb->setText(QApplication::translate("MainWindow", "\344\274\230\350\264\250", nullptr));
        low0Lb->setText(QApplication::translate("MainWindow", "-1\302\260", nullptr));
        date3Lb->setText(QApplication::translate("MainWindow", "04/04", nullptr));
        date5Lb->setText(QApplication::translate("MainWindow", "06/06", nullptr));
        type0Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        type1Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        type2Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        type3Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        type4Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        type5Lb->setText(QApplication::translate("MainWindow", "\351\230\264", nullptr));
        curveLb->setText(QString());
        leafLb->setText(QString());
        qualityLb->setText(QApplication::translate("MainWindow", "\344\274\230", nullptr));
        temLb->setText(QApplication::translate("MainWindow", "9\302\260", nullptr));
        typeLb->setText(QApplication::translate("MainWindow", "\346\231\264", nullptr));
        typeicoLb->setText(QString());
        noticeLb->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\346\217\220\347\244\272", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\204\237<br/>\345\206\222<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
        searchBt->setText(QApplication::translate("MainWindow", "...", nullptr));
        refreshBt->setText(QString());
        sunRiseSetLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
