#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMouseEvent>
#include <QAction>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void contextMenuEvent(QContextMenuEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
private slots:
    void slo_exitApp();
private:
    Ui::MainWindow *ui;
    QMenu *exitMenu;//右键退出的菜单
    QAction *exitAct;//退出的行为
    QPoint mPos;//鼠标和控件的距离
};
#endif // MAINWINDOW_H
