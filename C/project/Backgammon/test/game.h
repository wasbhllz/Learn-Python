// .h文件用来放函数声明
#include <stdio.h>
// 使代码更容易扩展
#define ROW 3
#define COL 3
// 游戏开始
void game();
// 初始化棋盘
void initialize(char board[ROW][COL], int row, int col);
// 打印棋盘格
void implement(char board[ROW][COL], int row, int col);
// 先手判定
// 用户操作
void user(char board[ROW][COL],int row,int col);
// 电脑操作
void computer(char board[ROW][COL],int row,int col);
// 判断输赢