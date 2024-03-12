// .c文件用来放函数实现
# include "game.h"
int x = 0;
int y = 0;
int a = 0;
int b = 0;
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
void user(char board[ROW][COL],int row,int col){ // 条件范围错误导致的分支错误 
    printf("该玩家下了!\n");
    while(1)
    {
        printf("请输入坐标：\n");
        scanf("%d,%d",&x,&y);
        if(1<=x && x<=row && 1<=y && y<=col)
        {
            if(board[x-1][y-1] ==' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("坐标已被占用，请重新输入！\n");
            }
        }
        else
        {
            printf("非法坐标，请重新输入！\n");
        }
    }
}
void computer(char board[ROW][COL],int row,int col)
{
    printf("该电脑下了!\n");
    while(1)
    {
        a = rand()%row;
        b = rand()%col;
        if(board[a][b] ==' ')
        {
            if(board[1][1]!='*')
            {
                board[a][b] =board[1][1];
                board[1][1]='#';
                break;
            }
            else
            {
                board[a][b]='#';
                break;
            }
        }
    }
}
int draw(char board[ROW][COL], int row, int col){ // 之前只要遇到第一个非空格的元素，就会直接返回 1，表示棋盘已满，而不会继续检查后面的元素
    int i,j;
    for(i = 0;i<row;i++)
    {
        for(j =0;j<col;j++)
        {
            if(board[i][j] ==' ')
                return 0;
        }
    }
    return 1;
}
char judgment(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    // 行
    for(i=0;i<row;i++)
    {
        if(board[i][0] !=' ' && board[i][0] ==board[i][1] && board[i][0] ==board[i][2]) // 这是因为第二段代码中的表达式实际上是判断前两个变量是否相等，得出1，然后再判断1是否等于 board[2][0]，得出0，而不是判断三个棋子是否都相等。
            return board[i][0];
    }
    // 列
    for(j=0;j<row;j++)
    {
        if(board[0][j] !=' ' && board[0][j] ==board[1][j]&& board[0][j] ==board[2][j])
            return board[0][j];
    }
    // 对角线1
    if(board[1][1] !=' ' && board[0][0] ==board[1][1] && board[0][0] ==board[2][2])
        return board[1][1];
    // 对角线2
    if(board[1][1] !=' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[1][1];
    int s = draw(board, row,col);
    if(s == 1)
        return 'Q';
    return 'C';
}
void game(){
    char ret = 0;
    char board[ROW][COL] = {0};
    initialize(board,ROW,COL);
    implement(board, ROW, COL);
    srand(time(0));
    int probability = rand()%2;// 随机先手
    while(1)
    {
        if(probability == 1)
            user(board,ROW,COL);
        else
            computer(board,ROW,COL);
        implement(board, ROW, COL);
        ret = judgment(board, ROW, COL);
        if(ret != 'C')
            break;
        if(probability == 1)
            computer(board,ROW,COL);
        else
            user(board,ROW,COL);
        implement(board, ROW, COL);
        ret = judgment(board, ROW, COL);
        if(ret != 'C')
            break;
    }
    if(ret =='*' )
    {
        printf("玩家赢了！🤗\n");
    }
    else if(ret =='#')
    {
        printf("电脑赢了！😜\n");
    }
    else if(ret=='Q')
    {
        printf("平局！\n");
    }
    else
        printf("继续游戏\n");
    implement(board, ROW, COL);

} 
/*
1生成的原坐标，是2，2没重叠，占位成功
2生成的原坐标，是2，2重叠，占位失败，重新生成
3生成的原坐标，不是2，2，可以替换为2，2，下新位置棋
4生成的原坐标，不是2，2，不可以替换为2，2，下原位置棋
5
6棋盘满了，平局
*/
