#include "detailwindow.h"

//detail窗口进行一切与绘制搜索树有关的内容

//正方形中输出矩阵，上面的长方形内输出f(n)
#define LeftDistance 40//左边的预留距离
#define UpDistcance 40//上边的预留距离
#define MtriToMtri 20//格子之间的单位距离
#define SqrMtriSize 50//正方形格子的边长
#define RectHeight 15//长方形高度

detailwindow::detailwindow(vector<Node> path,QWidget *parent) :
    QGraphicsView(parent)
{
    this->path=path;//将mainwindow中的path复制进来

    setDragMode(ScrollHandDrag);

    pix = QPixmap(30000, 1024);
    //pix.fill(Qt::white);
    this->setMouseTracking(true);
    setWindowTitle("Search Tree");
}

//鼠标松放，模拟拖动效果
void detailwindow::mouseReleaseEvent(QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton)
    {
        endPoint = event->pos();
    }
    this->viewport()->update();

    QGraphicsView::mouseReleaseEvent(event);
}

void detailwindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        lasetPoint = event->pos();
    }

    QGraphicsView::mousePressEvent(event);
}

void DrawOneMtrix(Node nd,bool dst,long long centerX,long long centerY,QPainter& painter)
{
    //设置颜色
    Qt::GlobalColor color=dst?Qt::red:Qt::black;
    QPen pen;
    pen.setColor(color);
    painter.setPen(pen);

    //设置字体大小
    QFont font;
    font.setPointSize(8);
    painter.setFont(font);

    //画长方形
    //drawRect(起点x坐标，起点y坐标，x轴长度，y轴长度)
    painter.drawRect(centerX-SqrMtriSize/2,centerY-SqrMtriSize/2-RectHeight, SqrMtriSize, RectHeight);
    painter.drawText(centerX-SqrMtriSize/2,centerY-SqrMtriSize/2, " fn="+QString::number(nd.f));

    //画矩形
    painter.drawRect(centerX-SqrMtriSize/2,centerY-SqrMtriSize/2,SqrMtriSize,SqrMtriSize);

    //填数字
    int DvtX=-4;//偏移差
    int DvtY=-9;

    painter.drawText(centerX-SqrMtriSize/3+DvtX,centerY+DvtY,nd.matrix[0][0]?QString::number(nd.matrix[0][0]):" ");
    painter.drawText(centerX+DvtX,centerY+DvtY,nd.matrix[0][1]?QString::number(nd.matrix[0][1]):" ");
    painter.drawText(centerX+SqrMtriSize/3+DvtX,centerY+DvtY,nd.matrix[0][2]?QString::number(nd.matrix[0][2]):" ");
    painter.drawText(centerX-SqrMtriSize/3+DvtX,centerY+SqrMtriSize/3+DvtY,nd.matrix[1][0]?QString::number(nd.matrix[1][0]):" ");
    painter.drawText(centerX+DvtX,centerY+SqrMtriSize/3+DvtY,nd.matrix[1][1]?QString::number(nd.matrix[1][1]):" ");
    painter.drawText(centerX+SqrMtriSize/3+DvtX,centerY+SqrMtriSize/3+DvtY,nd.matrix[1][2]?QString::number(nd.matrix[1][2]):" ");
    painter.drawText(centerX-SqrMtriSize/3+DvtX,centerY+SqrMtriSize*2/3+DvtY,nd.matrix[2][0]?QString::number(nd.matrix[2][0]):" ");
    painter.drawText(centerX+DvtX,centerY+SqrMtriSize*2/3+DvtY,nd.matrix[2][1]?QString::number(nd.matrix[2][1]):" ");
    painter.drawText(centerX+SqrMtriSize/3+DvtX,centerY+SqrMtriSize*2/3+DvtY,nd.matrix[2][2]?QString::number(nd.matrix[2][2]):" ");

}

//递归画图 node_num:当前在画的node在form中的标号
void detailwindow::DrawTree(vector<int> &LyrMtrxNum,int depth,int totalDepth, vector<treenode> &form,QPainter& painter,int ndNum,long long centerX,long long centerY,long long x,long long y)
{
    //画出当前的格子
    LyrMtrxNum[depth]++;
    DrawOneMtrix(path[ndNum],form[ndNum].isFinal,centerX-x,centerY-y,painter);

    //没有子节点则return
    if(form[ndNum].children[0]==-1)
        return;

    //找到子节点的坐标
    long long childX,childY;
    childX=LyrMtrxNum[depth+1]*(SqrMtriSize+MtriToMtri)+LeftDistance+SqrMtriSize/2;
    childY=(depth+1)*(SqrMtriSize+MtriToMtri+RectHeight)+UpDistcance+SqrMtriSize/2;

    int i;
    for(i=0;i<4&&form[ndNum].children[i]!=-1;i++){
        //递归
        DrawTree(LyrMtrxNum,depth+1,totalDepth, form, painter,form[ndNum].children[i],childX+(MtriToMtri+SqrMtriSize)*i,childY,x,y);
        //画枝子
        QPen pen;
        pen.setColor(Qt::black);
        painter.setPen(pen);
        painter.drawLine(centerX-x,centerY+SqrMtriSize/2-y,childX+(MtriToMtri+SqrMtriSize)*i-x,childY-SqrMtriSize/2-RectHeight-y);
    }
}

void detailwindow::paintEvent(QPaintEvent *event)
{

    int x, y;
    //emm 加个比例吧 要不挪的太慢了
    x = (lasetPoint.x()-endPoint.x())*3;
    y = (lasetPoint.y()-endPoint.y())*3;

    QPainter painter(this->viewport());
    tempPix = pix;
    QPainter pp(&tempPix);

    int j;
    int totalDepth=0;
    vector<treenode> form(path.size());
    //i增大的顺序即从起点到终点的顺序
    //建立搜索树的父子关系
    //form的下标和path的下标对应
    for(int i=int(path.size()-1);i>0;i--){
        for(j=0;j<4;j++){
            if(form[path[i].pre].children[j]==-1)//找到还未赋值的结点
                break;
        }
        if(j<4)
            form[path[i].pre].children[j]=i;
    }
    //给最短路径的isFinal赋值为true
    for(int i=int(path.size()-1);i>=0;){
        form[i].isFinal=true;
        i=path[i].pre;
        totalDepth++;
    }

    //记录每层画了几个格子
    vector<int> LyrMtrxNum(totalDepth,0);

    //递归画图

    DrawTree(LyrMtrxNum,0,totalDepth, form, painter,0,LeftDistance+SqrMtriSize/2,UpDistcance+SqrMtriSize/2,x,y);

    QGraphicsView::paintEvent(event);
}

