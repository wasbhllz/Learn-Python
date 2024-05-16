// 23.12.18
#include <stdio.h>
/*
extern int num; //声明来自外部的符号
int main()
{
     int num2 = 0; //初始化值
     scanf("%d %d", &num, &num2); //scanf()输入函数
     int sum = num + num2; //求和
     printf("%d", sum);

     return 0;
}

// 23.12.19
// 题目:请问，在执行完第7、第8、第9行后，程序的状态分别是什么？
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

// 23.12.20
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
}

// 定义和调用函数题目4
void one_three(void);
void two(void);
int main()
{
    printf("starting now:\n");
    one_three();
    two();
    printf("done!");
    return 0;
}
void one_three(void)
{
    printf("one\n");
}
void two(void)
{
    printf("two\nthree\n");
}

// 23.12.22
// if和else条件判断
int main(){
      int one = 0;
      printf("明天学习吗?");
      scanf("%d", &one);
      if (one == 1){
            printf("大有出息!");
      }
      else{
            printf("好好反思一下.");
      }
      return 0;
}

//while循环
int main(){
      int gao = 0;
      printf("学习C语言");
      while (gao < 20)
      {
            printf("写代码中\n");
            gao++;
      }
      if (gao == 20){
            printf("前途光明!");
      }
      return 0;
}

// 数组:按顺序排列的同类型序列
int main(){
      int arr[] = {1,2,3,4,5};
      int a = 0;
      while(a < 5){
            printf("%d", arr[a]);
            a++;
      }
      return 0;
}

// 题目
int main(){
      printf("     00\n     00\n000000000000\n000000000000\n    0  0\n    0  0");
      return 0;
}

// 23.12.24
// 将输入数值转为ASCII码
int main(){
      int ascii = 0;
      scanf("输入数值转为ASCII码:%d",&ascii);
      printf("%c",ascii);
return 0;
}

// 转义序列的题目
int main(){
double w;
scanf("%lf",w);
printf("%e",w); // "%e"转为指数型
printf("%a", w); // "%a"转为十六进制
int q = 0;
scanf("%d", &q);
printf("%c", q);
return 0;
}

// 定义一个函数求两个整数的较大值
int max(int a, int b){
   if (a > b)
      return a;
   else
      return b;
}
int main(){
   int yu, he;
   scanf("%d %d", &yu,&he);
   int qq = max(yu, he); // 忘记将比大小的结果传入到变量中
   printf("%d",qq);
   return 0;
}

// 多条件判断
int main(){
   int d,n;
   printf("输入:");
   scanf("%d",&d);
   if(d < 0)
      n = 1;
   else if (d == 0)
      n = 0;
   else
      n = -1;
   printf("输出:%d", n);
   return 0;
}
*/