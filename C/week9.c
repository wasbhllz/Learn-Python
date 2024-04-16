// 24.03.11
# include <stdio.h>
/*
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

// 24.03.12
// 将输入的字符串逆向打印
# include <string.h>
int main()
{
    char string[20]; // 输入数组时，需要初始化数组的长度
    scanf("%s",string);
    int len = strlen(string);
    for(int a = len-1;0 <= a;a--)
        printf("%c",string[a]);
    return 0;
}
*/
// 24.03.13
// 将两个变量的字符串交换打印
void exchange(int a[],int b[],int len)
{
    for (int e = 0; e < len;e++)
    {
        int temp = a[e];
        a[e] = b[e];
        b[e] = temp;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 0};
    int len = sizeof(a) / sizeof(a[0]-1);
    exchange(a, b, len);
    for(int e =0;e<len;e++)
            printf("%d ", a[e]);
    printf("\n");
    for (int e = 0; e < len; e++)
        printf("%d ", b[e]);
    return 0;
}