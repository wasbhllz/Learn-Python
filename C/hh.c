#include <stdio.h>
extern int num; //声明来自外部的符号
int main()
{
     int num2 = 0; //初始化值
     scanf("%d %d", &num, &num2); //scanf()输出函数
     int sum = num + num2; //求和
     printf("%d", sum);

     return 0;
}
