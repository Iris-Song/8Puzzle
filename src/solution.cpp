#include "mainwindow.h"

#include "ui_mainwindow.h"
#include "math.h"
/* 判断是否有解
   计算初始状态和目标状态的逆序数，如果两者奇偶性相同，则有解 */
bool SolutionExist(const int start[SIZE][SIZE],const int end[SIZE][SIZE])
{
    int RInit = 0, REnd = 0;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < i; j++) {
            if (start[j / SIZE][j % SIZE] != 0 && start[j / SIZE][j % SIZE] < start[i / SIZE][i % SIZE])
                RInit++;
            if (end[j / SIZE][j % SIZE] != 0 && end[j / SIZE][j % SIZE] < end[i / SIZE][i % SIZE])
                REnd++;
        }
    return (RInit & 1) == (REnd & 1);
}

//不在位置的棋子个数
int h0(const int present[SIZE][SIZE], const int end[SIZE][SIZE])
{
    int h = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (present[i][j] != end[i][j])
                h++;
    return h;
}

//曼哈顿距离
int h1(const int present[SIZE][SIZE], const int end[SIZE][SIZE])
{
    int h = 0;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
        {
            if (present[i][j] == 0)
                continue;
            else if (present[i][j] != end[i][j])
            {
                for (int k = 0; k < 3; k++)
                    for (int w = 0; w < 3; w++)
                        if (present[i][j] == end[k][w])
                            h += abs(i - k ) + abs(j - w);
            }
        }

    return h;
}

//欧几里得距离
int h2(const int present[SIZE][SIZE], const int end[SIZE][SIZE])
{
    int h = 0;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
        {
            if (present[i][j] != end[i][j])
            {
                for (int k = 0; k < 3; k++)
                    for (int w = 0; w < 3; w++)
                        if (present[i][j] == end[k][w])//平方根运算耗费时间，此方法速度较慢
                            h += sqrt((i - k)*(i - k) + (j - w)*(j - w));
            }
        }

    return h;
}

//递归动态展示变换过程
void MainWindow::ShowMatrix(const Node nd)
{
    if (nd.pre == -1){
        //在动态界面进行显示
        ui->process_0_0->setText(nd.matrix[0][0]?QString::number(nd.matrix[0][0]):" ");
        ui->process_0_1->setText(nd.matrix[0][1]?QString::number(nd.matrix[0][1]):" ");
        ui->process_0_2->setText(nd.matrix[0][2]?QString::number(nd.matrix[0][2]):" ");
        ui->process_1_0->setText(nd.matrix[1][0]?QString::number(nd.matrix[1][0]):" ");
        ui->process_1_1->setText(nd.matrix[1][1]?QString::number(nd.matrix[1][1]):" ");
        ui->process_1_2->setText(nd.matrix[1][2]?QString::number(nd.matrix[1][2]):" ");
        ui->process_2_0->setText(nd.matrix[2][0]?QString::number(nd.matrix[2][0]):" ");
        ui->process_2_1->setText(nd.matrix[2][1]?QString::number(nd.matrix[2][1]):" ");
        ui->process_2_2->setText(nd.matrix[2][2]?QString::number(nd.matrix[2][2]):" ");

        return ;
    }
    ShowMatrix(path[nd.pre]);

    //在动态界面进行显示
    ui->process_0_0->setText(nd.matrix[0][0]?QString::number(nd.matrix[0][0]):" ");
    ui->process_0_1->setText(nd.matrix[0][1]?QString::number(nd.matrix[0][1]):" ");
    ui->process_0_2->setText(nd.matrix[0][2]?QString::number(nd.matrix[0][2]):" ");
    ui->process_1_0->setText(nd.matrix[1][0]?QString::number(nd.matrix[1][0]):" ");
    ui->process_1_1->setText(nd.matrix[1][1]?QString::number(nd.matrix[1][1]):" ");
    ui->process_1_2->setText(nd.matrix[1][2]?QString::number(nd.matrix[1][2]):" ");
    ui->process_2_0->setText(nd.matrix[2][0]?QString::number(nd.matrix[2][0]):" ");
    ui->process_2_1->setText(nd.matrix[2][1]?QString::number(nd.matrix[2][1]):" ");
    ui->process_2_2->setText(nd.matrix[2][2]?QString::number(nd.matrix[2][2]):" ");

    //暂停显示
    QTime t;
    t.start();
    while(t.elapsed() < 1000) {
        QCoreApplication::processEvents();
    }

    return;
}

//哈希映射
int HashSet(int matrix[SIZE][SIZE])
{
    int hash=0;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            hash+=hash*10+matrix[i][j];
        }
    }
    return hash;
}

//检查下标是否在范围内
bool range(int i)
{
    return (i>=0&&i<SIZE);
}

void MainWindow::Search()
{
    if(!SolutionExist(start,end)){
         QMessageBox::information(NULL, "Result", "No answer",  QMessageBox::Yes);
         return;
    }

    clock_t StartTime=clock();

    int exnum=0;//拓展节点数
    int gtnum=0;//生成节点数

    Node Start(start,-1,0,(*h)(start,end));
    Node End(end,-1,0,0);

    extd.push(Start);
    while(!extd.empty()){
          Node present = extd.top();
          //得到最小的结点，放入path中
          extd.pop();
          exnum++;
          path.push_back(present);
          visited[HashSet(present.matrix)] = true; //并将这个结点放入visited表
          //找到目标
          if(present==End){
           clock_t Time=clock()-StartTime;
           ui->TimeLabel->setText("Total time: "+QString::number(Time)+"ms");
           ui->StepLabel->setText("Total steps: "+QString::number(present.g));//显示步数
           ui->GnumLabel->setText("Generate node number: "+QString::number(gtnum));
           ui->ExnumLabel->setText("Extend node number: "+QString::number(exnum));//显示步数

           ShowMatrix(present);//依次打印结点
           return;
          }

          //未找到目标，继续移动并将其入队列
          int spci=0,spcj=0;//空格所在的位置
          for(int i=0;i<SIZE;i++){
              for(int j=0;j<SIZE;j++){
                  if(present.matrix[i][j]==0){
                      spci=i;
                      spcj=j;
                      break;
                  }
              }
              if(spci&&spcj)
                  break;
          }
          //len:当前结点在path中的位置，作为其扩展出的结点的pre值
          int len = path.end() - path.begin() - 1;
          int move[][2]={{0,1},{0,-1},{1,0},{-1,0}};
          for(int i=0;i<4;i++){
             int nextx=move[i][0]+spci,nexty=move[i][1]+spcj;
             if(range(nextx)&&range(nexty)){
                 //交换构造出新的状态节点
                 swap(present.matrix[nextx][nexty], present.matrix[spci][spcj]);
                 Node tmp(present.matrix, len, present.g + 1, (*h)(present.matrix, end));
                 swap(present.matrix[nextx][nexty], present.matrix[spci][spcj]);
                 if(!visited[HashSet(tmp.matrix)]){
                     extd.push(tmp);
                     gtnum++;
                 }
             }
          }
    }

}

