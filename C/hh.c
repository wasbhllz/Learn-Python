// 12.18
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

// 12.19
// 题目:请问，在执行完第7、第8、第9行后，程序的状态分别是什么？
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
}

// 12.20
// 定义和调用函数题目1:先声明,再调用,后定义
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

// 定义和调用函数题目2
void br(void);
void ic(void);
int main(){
      br();
      printf(",");
      ic();
      ic();
      br();
      return 0;}
void br(void){
      printf("Brazil, Russia");
}
void ic(void){
      printf("India, China\n");
}

// 定义和调用函数题目3
int main(){
int toes = 10;
int toes_2 = 10*2;
int toes_3 = toes * toes;
printf("toes = %d\ntoes的两倍 = %d\ntoes的平方 = %d",toes,toes_2,toes_3);
return 0;
}*/

// 定义和调用函数题目4
void one_three(void);
void two(void); 
int main(){
printf("starting now:\n");
one_three();
two();
printf("done!");
return 0;
}
void one_three(void){
printf("one\n");
}
void two(void){
printf("two\nthree\n");
}

