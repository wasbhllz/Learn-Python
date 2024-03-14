#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
// 雷的数量
#define MINE_COUNT 10
// 开始游戏！
void game();
// 初始化埋雷的棋盘
void lay_mines(char board[ROWS][COLS],int row,int col);
// 玩家探索范围
void explore(char borad[ROWS][COLS], int row, int col, char ret);
// 打印棋盘
void current_status(char board[ROWS][COLS], int row, int col);
// 
void user(char board[ROW][COL], int row, int col);
