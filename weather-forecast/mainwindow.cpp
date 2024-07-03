#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口属性为没有边框的窗口 没有标题栏
    setWindowFlag(Qt::FramelessWindowHint);
    setFixedSize(width(),height());//设置固定窗口大小
}

MainWindow::~MainWindow()
{
    delete ui;
}

