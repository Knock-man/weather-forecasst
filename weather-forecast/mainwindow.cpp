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
    exitMenu = new QMenu(this);//创建一个菜单
    exitAct = new QAction;//创建一个选项
    //exitAct->setText(u8"退出");
    exitAct->setIcon(QIcon(":/weatherIco/close.ico"));
    exitMenu->addAction((exitAct));//选项添加进菜单
    connect(exitAct,SIGNAL(triggered(bool)),this,SLOT(slo_exitApp()));//点击选项关闭窗口
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
