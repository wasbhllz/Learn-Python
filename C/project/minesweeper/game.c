#include "game.h"
// 在数组内，一个元素是一个字符，但打印时可以使用字符串打印
void explore(char board[ROWS][COLS],int row,int col,char ret){
    int i,j;
        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= col; j++)
            {
                board[i][j] = ret;
            }
        }
}
void lay_mines(char board[ROWS][COLS],int row,int col)
{
    int num = MINE_COUNT;
    while (num)
    {
        int a = rand() % row+1;
        int b = rand() % col+2; //第0行被索引行占了，从第1行开始扫雷，所以要加上多打印的1行
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
    for (i = 0; i <= col;i++)
        printf("%d_", i);
    printf("\n");
        for (j = 1; j <= row;j++) //第0行被索引行占了，从第1行开始扫雷，所以要多打印1行
        {
            printf("%d|", j);
            for (i = 1; i <= col; i++)
                printf("%c ", board[i][j]);
            printf("\n");
        }
    printf("\n");
}
int judge(char board[ROWS][COLS],int x,int y)// 显示地雷个数
{
    int a = 0;

    /*
    int s = 0;
    int t = 0;
    for(s = -1; s <= 1;s++)//循环周围的坐标来判断雷的数量
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
    */
    return (board[x - 1][y - 1] +
           board[x][y - 1] +
           board[x - 1][y] +
           board[x][y + 1] +
           board[x + 1][y] +
           board[x + 1][y + 1] +
           board[x + 1][y - 1] +
           board[x - 1][y + 1])-(8*'0');
}
void Investigation(char board[ROWS][COLS],char board_2[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0;
    int m = 0;
    while(m < row*col-MINE_COUNT)
    {
        printf("请输入坐标扫雷：\n");
        scanf("%d,%d",&x,&y);
        if(board_2[x][y] == '1')
        {
            printf("踩到雷了，被炸死了!😥\n");
            current_status(board_2,ROW,COL);//踩雷的情况展示
            break;
        }
        else
        {
            m++;
            int num = judge(board_2,x,y)+'0';
            board[x][y] = num;
            current_status(board,ROW,COL);
        }
    }
    if(m = row*col-MINE_COUNT)
    {
    printf("恭喜你，胜利了！🎉\n");
    current_status(board_2,ROW,COL);
    }
}
void game()
{
    char board_2[ROWS][COLS] = {0};
    char board[ROWS][COLS] = {0};
    srand((unsigned int)time(0));
    explore(board_2, ROWS,COLS,'0'); 
    lay_mines(board_2,ROW,COL); 
    explore(board,ROW,COL,'*');
    //current_status(board_2,ROW,COL);
    current_status(board,ROW,COL);
    Investigation(board,board_2,ROW,COL);
}