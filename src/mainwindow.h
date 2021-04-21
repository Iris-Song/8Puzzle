#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QHBoxLayout>
#include <QDebug>
#include <QSpinBox>
#include <QMessageBox>
#include <QComboBox>
#include <QPushButton>
#include <QTextList>
#include <QTextBrowser>
#include <QTime>

#include "head.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//mainwindow进行一切与计算有关的内容
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //保存路径
    vector<Node> path;
    //初始化
    bool init();
    //找到路径
    void Search();

    void ShowMatrix(const Node p);

private slots:

    void UsageClicked();
    void IntroClicked();
    void AlgoClicked();
    void MoreClicked();
    void on_GoButton_clicked();
    void on_MoreButton_clicked();

private:
    Ui::MainWindow *ui;
    //初始和目标状态
    int start[SIZE][SIZE];
    int end[SIZE][SIZE];
    int (*h)(const int present[SIZE][SIZE], const int end[SIZE][SIZE]);
    //是否已经初始化过，否则more按钮无法打开
    bool initial=false;
    //用优先队列表示已扩展出但是还没有访问的节点
    priority_queue<Node> extd;
    //visited表：存储已经访问过的节点，避免重复访问
    map<int, bool> visited;
};
#endif // MAINWINDOW_H
