#include <stdio.h>
// 声明:告知类型
// 头文件相当于预备资料
/*
// 12.13
int num = 1;
int main(){ 
   printf("先苦后甜才是第 %d 位.\n",num); 
   int a, b;
    a = 10;
    b = 2 * a;
    printf("%d的2倍是%d!", a, b);
   // system("pause")运行窗口暂停
   return 0;
   getchar(); // 函数运行窗口暂停
}
//忘记在预处理文件前打# 

// 12.18
extern int num; //声明来自外部的符号
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
}

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

// 12.22
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

// 12.23
// \\和\"相当于转义转义字符
// 常用转义字符
int main(){
    printf("哈哈\r"); // 光标移到本行开头
    printf("哈哈\n"); // 换行
    printf("\051"); // 八进制的转义序列
    printf("\x29"); // 十六进制的转义序列
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

// 12.24
int main(){
      int ascii = 0;
      scanf("输入数值转为ASCII码:%d",&ascii);
      printf("%c",ascii);
return 0;
}
*/
int main(){
double w;
scanf("%lf",w);
printf("%e\n%a",w,w); // 转为指数型
//转为十六进制
return 0;
}