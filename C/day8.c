// 12.24
#include <stdio.h>
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