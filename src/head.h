#pragma once

#ifndef HEAD_H
#define HEAD_H
#define SIZE 3
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
#include <time.h>

#include <QMainWindow>
#include <QWidget>
#include <QGraphicsView>
using namespace std;
#endif // HEAD_H

/*
    Node类记录每个状态节点信息
    matrix[i][j]记录i行j列的数字(1-8)，0表示空格子
    pre是父节点在path中的下标(path的说明在下面)
    f,g,h即f(n),g(n),h(n)		f(n)=g(n)+h(n),g(n)=n,h(n)有两种选取方法
*/

class Node
{
public:
    int matrix[SIZE][SIZE];
    int pre;
    int f, g, h;
    Node(int matrix[SIZE][SIZE], int pre, int g, int h);//带参的构造函数
    bool operator <(const Node tmp) const;//比较f(n)大小
    bool operator ==(const Node tmp) const;//比较两个matrix数组是否完全一样
};

int h0(const int present[SIZE][SIZE], const int end[SIZE][SIZE]);
int h1(const int present[SIZE][SIZE], const int end[SIZE][SIZE]);
int h2(const int present[SIZE][SIZE], const int end[SIZE][SIZE]);
