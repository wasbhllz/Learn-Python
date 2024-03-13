#include "game.h"
char board[ROW][COL] = {0};
char board_2[ROW][COL] = {0};

void lay_mines(char board[ROW][COL],int row,int col)
{
    int s = 0;
    while (s <= MINE_COUNT)
    {
        int a = rand() % 10;
        int b = rand() % 10;
        if(0<a && a<row-1 && 0<b && b<col-1)
        {
            board[a][b] = '#';
            s++;
        }
    }
    int i = 0;
    int j = 0;
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            if(board[i][j]!='#')
                board[i][j] = '*';
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void explore(char board_2[ROW][COL],int row,int col){
    int i,j;
    for(i = 0;i<row;i++)
    {
        for(j =0;j<col;j++)
        {
            board_2[i][j] = 'o';
            printf("%c", board_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void user(char board_2[ROW][COL],int row,int col){
    int x = 0;
    int y = 0;
    scanf("%d,%d",&x,&y);
    board[x][y] = board_2[x][y];
    if(board[x][y]!='#')

    board_2[x][y] = '*';
    else
    printf("游戏结束！");
}
void game()
{
    srand(time(0));
    lay_mines(board, ROW, COL);    explore(board,ROW,COL);
    user(board,ROW,COL);
}