#include "head.h"

//node的声明在head.h中
Node::Node(int matrix[SIZE][SIZE], int pre, int g, int h)
{
    for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                this->matrix[i][j] = matrix[i][j];
        this->pre = pre;
        this->g = g;
        this->h = h;
        this->f = g + h;
}

bool Node::operator <(const Node tmp) const
{
    return f > tmp.f;
}

bool Node::operator ==(const Node tmp) const
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (matrix[i][j] != tmp.matrix[i][j])
                return false;
    return true;
}
