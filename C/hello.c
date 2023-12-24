#include <stdio.h>
/*
// 12.10
int main(){
   //我的第一个 C 程序
   printf("Hello, World!");
   return 0;
}
// 单行注释
/* 多行
注释块 

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
*/
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

