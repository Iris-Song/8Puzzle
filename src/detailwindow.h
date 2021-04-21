#ifndef DETAILWINDOW_H
#define DETAILWINDOW_H

#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QDebug>
#include "head.h"

class treenode
{
public:
    //一个节点最多能向四个方向移动，最多有4个孩子
    int children[4]={-1,-1,-1,-1};
    //是否为最终路径
    bool isFinal=false;
};

namespace Ui {
class detailwindow;
}

class detailwindow : public QGraphicsView
{
    Q_OBJECT

public:

    detailwindow(vector<Node> path,QWidget *parent= nullptr);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:

    void DrawTree(vector<int> &LyrMtrxNum,int depth,int totalDepth, vector<treenode> &form,QPainter& painter,int ndNum,long long centerX,long long centerY,long long x,long long y);
    vector<Node> path;

    QPixmap pix;
    QPoint lasetPoint;
    QPoint endPoint;
    QPixmap tempPix;

};

#endif // DETAILWINDOW_H
