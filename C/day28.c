// 24.03.12
// 将输入的字符串逆向打印
/**/
# include <stdio.h>
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

