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
            board[a][b] = '#';
            num--;
        }
    }
}
void current_status(char board[ROWS][COLS], int row, int col){
    int i, j;
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
void user(char board[ROW][COL],int row,int col){
    int x = 0;
    int y = 0;
    scanf("%d,%d",&x,&y);
    board[x][y] = board[x][y];
    if(board[x][y]!='#')

    board[x][y] = '*';
    else
    printf("游戏结束！");
}
void game()
{
    char board_2[ROWS][COLS] = {0};
    char board[ROWS][COLS] = {0};
    srand((unsigned int)time(0));
    explore(board_2, ROWS,COLS,'0'); 
    //
    lay_mines(board_2,ROW,COL); 
    explore(board,ROW,COL,'*');
    current_status(board_2,ROW,COL);
    //user(board,ROW,COL);
}