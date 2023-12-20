#include <stdio.h>
/* extern int num; //声明来自外部的符号
int main()
{
     int num2 = 0; //初始化值
     scanf("%d %d", &num, &num2); //scanf()输出函数
     int sum = num + num2; //求和
     printf("%d", sum);

     return 0;
}


#include <stdio.h>
int main(void)
{
      int a, b;

      a = 5;
      b = 2; //第7行
      b = a; //第8行
      a = b; //第9行
      printf("%d %d\n", b, a);
      return 0;
} 

// 编写一个程序把你的年龄转换成天数，并显示这两个值。
int main(){
int san = 0;
printf("输入你的年龄");
scanf("%d",&san); //忘记加&了
int dan = san * 12 * 30;
printf("你的年龄大概有%d天\n", dan);
return 0;
}*/

//定义函数时:先声明,再调用,后定义
void jolly(void);
void deny(void);

int main(){
       jolly();
       jolly();
       jolly();
       deny();
      return 0;
}
void jolly(void){
            printf("For he's a jolly good fellow!\n");
      }
void deny(void){
            printf("Which nobody can deny!");
      }

