#include "game.h"
void a(int bo[ROWS][COLS],int row,int col,char ch)
{
    int i,j;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col;j++)
        {
            bo[i][j] = 'ch';
        }
    }
}
int geme2()
{
    int borad[ROWS][COLS] = {0};
    int borad2[ROWS][COLS] = {0};
    //原始棋盘
    a(borad, ROWS, COLS,'0');
    a(borad2, ROWS, COLS,'*');
    //显示棋盘

    //安排地雷

    //排查地雷

    //判断输赢
}