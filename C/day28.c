// 24.03.12
// 将输入的字符串逆向打印
/**/
# include <stdio.h>
# include <string.h>
char reverse_string(char* string)
{
    int len = strlen(string);
    for(int a = len;0 <= a;a--)
    {
        printf("%s",string[a]);
    }
}
int main()
{
    char string[] = {0};
    scanf("%s",&string);
    return 0;
}

