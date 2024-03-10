// .c文件用来放函数实现
# include "game.h"
void initialize(char board[ROW][COL],int row,int col){
    for (int i = 0; i < row;i++)
        for (int j = 0; j < col;j++)
            board[i][j] = ' ';
}
void implement(char board[ROW][COL],int row,int col)
{
    int j;
    for (int i = 0; i < row;i++)
    { // 行循环把两个部分分别进行列循环
        for (int j = 0; j < col;j++)
        {
            printf(" %c ", board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
        {
            for (j = 0; j < col;j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
        }
        printf("\n");
    }
}
void user(char board[ROW][COL],int row,int col){
    int x = 0;
    int y = 0;
    printf("玩家先手!\n");
    while(1)
    {
        printf("请输入坐标：\n");
        scanf("%d,%d",&x,&y);
        if(0<x<=row && 0<y<=col)
        {
            if(board[x-1][y-1] ==' ')
                board[x-1][y-1] = '*';
            else
            {
                printf("坐标已被占用，请重新输入！\n");
            }
        }
        else{
            printf("非法坐标，请重新输入！\n");
            
            }
    }
}
void computer(char board[ROW][COL],int row,int col){
    printf("电脑先手!\n");
}
void game(){
    char board[ROW][COL] = {0};
    initialize(board,ROW,COL);
    implement(board, ROW, COL);
    while(1){
    user(board,ROW,COL);
    implement(board, ROW, COL);
    computer(board,ROW,COL);
    implement(board, ROW, COL);
    }
} 

