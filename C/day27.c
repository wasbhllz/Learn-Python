// 24.03.11
// 复习了棋盘数组打印；逻辑
int main(int row,int col)
{
    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            printf(" %d ");
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
        {
            for(int j =0;j<col;j++){
                printf("---");
                if(j<col)
                    printf("|");
                    }
        }
        printf("\n");
    }
}
