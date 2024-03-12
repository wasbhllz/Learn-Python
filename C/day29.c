// 24.03.13
// 将两个变量的字符串交换打印
/*
# include <stdio.h>
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
*/