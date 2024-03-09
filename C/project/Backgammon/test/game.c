# include "game.h"
void initialize(char board[ROW][COL],int row,int col){
    for (int i = 0; i < row;i++)
        for (int j = 0; j < col;j++)
            board[i][j] = ' ';
}
void implement(char board[ROW][COL],int row,int col){

}
void game(){
    char board[ROW][COL] = {0};
    initialize(board,ROW,COL); // 初始化棋盘
    implement(board, ROW, COL);
} // 为了可扩展性来优化代码
