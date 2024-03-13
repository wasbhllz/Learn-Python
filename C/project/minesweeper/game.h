#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 11
#define COL 11
// 雷的数量
#define MINE_COUNT 9
// 开始游戏！
void game();
// 初始化埋雷的棋盘
void lay_mines(char borad[ROW][COL],int row,int col);
// 玩家探索范围
void explore(char borad[ROW][COL],int row,int col);
// 打印棋盘

// 