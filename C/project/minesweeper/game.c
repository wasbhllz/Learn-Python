#include "game.h"
// 在数组内，一个元素是一个字符，但打印时可以使用字符串打印
void explore(char board[ROWS][COLS],int row,int col,char ret){
    int i,j;
    printf("—————扫雷游戏—————\n");
    for (j = 0; j <= col;j++)
        printf("%d ", j);
    printf("\n");
        for (i = 1; i <= row; i++)
        {
            printf("%d ", i);
            for (j = 0; j < col; j++)
            {
                board[i][j] = ret;
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
    printf("\n");
}
void lay_mines(char board[ROWS][COLS],int row,int col)
{
    int num = MINE_COUNT;
    while (num)
    {
        int a = rand() % row-1;
        int b = rand() % col-1;
        if(board[a][b] == '0')
        {
            board[a][b] = '1';
            num--;
        }
    }
}
void current_status(char board[ROWS][COLS], int row, int col){
    int i, j;
    printf("—————扫雷游戏—————\n");
    for (j = 0; j <= col;j++)
        printf("%d ", j);
    printf("\n");
        for (i = 1; i < row;i++)
        {
            printf("%d ", i);
            for (j = 0; j < col;j++)
                printf("%c ", board[i][j]);
            printf("\n");
        }
    printf("\n");
}
int judge(char board[ROWS][COLS],char board_2[ROWS][COLS],int x,int y)
{
    int s = 0;
    int t = 0;
    int a = 0;
    for(s = -1; s <= 1;s++)
    {
        for(t = -1; t <= 1;t++)
        {
            if(board[x+s][y+t] == '1')
            {
                a = board[x+s][y+t]-'0';
                return ++a; // '1'-'0'=1,'0'-'0'=0
            }
        }
    }
}
void user(char board[ROWS][COLS],char board_2[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0;
    int m = 0;
    while(m < row*col-MINE_COUNT)
    {
        printf("请输入坐标扫雷：\n");
        scanf("%d,%d" &x,&y);
        if(board_2[x][y] =='1')
        {
            printf("踩到雷了，被炸死了!\n");
            break;
        }
        else
        {
            m++;
            printf(judge(board,board_2,x,y)+'0');
        }
    }
    printf("恭喜你，胜利了！🎉\n");
}
void game()
{
    char board_2[ROWS][COLS] = {0};
    char board[ROWS][COLS] = {0};
    srand((unsigned int)time(0));
    explore(board_2, ROWS,COLS,'0'); 
    //
    lay_mines(board_2,ROW,COL); 
    //explore(board,ROW,COL,'*');
    current_status(board_2,ROW,COL);
    user(board,board_2,ROW,COL);
}