#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "detailwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* 初始化所有条件，返回能否成功初始化
 * 1.清空上轮残余
 * 2.八数码棋盘的始末位置
 * 3.选择的h(n)函数
 */
bool MainWindow::init()
{
    while(!extd.empty())
        extd.pop();
    visited.clear();
    path.clear();

    //start框的输入
    start[0][0]=ui->start_0_0->text().toInt();
    start[0][1]=ui->start_0_1->text().toInt();
    start[0][2]=ui->start_0_2->text().toInt();
    start[1][0]=ui->start_1_0->text().toInt();
    start[1][1]=ui->start_1_1->text().toInt();
    start[1][2]=ui->start_1_2->text().toInt();
    start[2][0]=ui->start_2_0->text().toInt();
    start[2][1]=ui->start_2_1->text().toInt();
    start[2][2]=ui->start_2_2->text().toInt();

    //判断输入是否正确
    bool judge=true;
    int stnum[SIZE*SIZE]={0};
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(start[i][j]>=SIZE*SIZE||start[i][j]<0){
                judge=false;
                break;
            }
            else
               stnum[start[i][j]]++;
            if(stnum[start[i][j]]>1){
                judge=false;
                break;
            }
        }
        if(!judge)
            break;
    }
    if (!judge) {

        QMessageBox::critical(NULL, "error", "Start State is Wrong", QMessageBox::Ok);

        return false;
    }
    //end框的输入
    end[0][0]=ui->end_0_0->text().toInt();
    end[0][1]=ui->end_0_1->text().toInt();
    end[0][2]=ui->end_0_2->text().toInt();
    end[1][0]=ui->end_1_0->text().toInt();
    end[1][1]=ui->end_1_1->text().toInt();
    end[1][2]=ui->end_1_2->text().toInt();
    end[2][0]=ui->end_2_0->text().toInt();
    end[2][1]=ui->end_2_1->text().toInt();
    end[2][2]=ui->end_2_2->text().toInt();

    //检查end框输入是否符合要求
    judge=true;
    int ednum[SIZE*SIZE]={0};
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(end[i][j]>=SIZE*SIZE||end[i][j]<0){
                judge=false;
                break;
            }
            else
                ednum[end[i][j]]++;
            if(ednum[end[i][j]]>1){
                judge=false;
                break;
            }
        }
        if(!judge)
            break;
    }

    if (!judge) {
        QMessageBox::critical(NULL, "error", "End State Is Wrong", QMessageBox::Ok);
        return false;
    }

    if(ui->hnSelect->currentIndex()==0)
        h=h0;
    else if(ui->hnSelect->currentIndex()==1)
        h=h1;
    else
        h=h2;

    initial=true;
    return true;
}

void MainWindow::IntroClicked()
{
    QMessageBox message(QMessageBox::Information, "Introduction of 8-Puzzle"
                        , " <b>The 8-puzzle</b> consists of a 3x3 board with eight numbered tiles and a blank space. <br>"
                          "A tile adjacent to the blank space can slide into the space.<br>"
                          "The object is to reach a specified goal state, "
                          "such as the one shown on the right of the figure.");
    message.exec();
}

void MainWindow::UsageClicked()
{
    QMessageBox message(QMessageBox::Information, "How to use"
                        , "input numbers(<b>1-8</b>)in <b>start&end box.</b><br><br>"
                          "Choose h(n) function you like.<br><br>"
                          "Press button <b>Go</b> to activate.<br><br>"
                          "Press button <b>More</b> to see seach tree.<br><br>"
                          "The search tree may be too big.<b>Drag</b> your mouse to see it.And you can return to the orignial position by clicking twice."
                          );
    message.exec();
}

void MainWindow::AlgoClicked()
{
    QMessageBox message(QMessageBox::Information, "Conclusion of algorithm"
                        , "In this program,A* algorithm is used.<br><br>"
                          "Among the three of h(n), Manhattan Distance is the best.   ");
    message.exec();
}

void MainWindow::MoreClicked()
{
    QMessageBox message(QMessageBox::Information, "More"
                        , "if you want to know more    <br>visit  "
                          "<a href='https://github.com/Iris-Song/8Puzzle-Qt'>my Github</a>  "     );
    message.exec();
}
void MainWindow::on_GoButton_clicked()
{
    //每次开始时将go按钮禁用
    ui->GoButton->setEnabled(false);
    if(init()==false){
        ui->GoButton->setEnabled(true);
        return;
    }

    this->setMinimumSize(800, 768);
    Search();
   //search结束后将go按钮开启
    ui->GoButton->setEnabled(true);
}

void MainWindow::on_MoreButton_clicked()
{
     if(!initial)
         ui->MoreButton->setEnabled(false);
     else{
          ui->MoreButton->setEnabled(true);
          detailwindow* show = new detailwindow(this->path);
          show->show();
     }
}
