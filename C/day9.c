// 23.12.25
#include <stdio.h>
// 单位换算题目1
int main(){
      int r;
      scanf("%d",&r);
      float o =r*3.156e7;
      printf("%e",o);
      return 0;
}

// 单位换算题目2
int main(){
      int u =0 ;
      scanf("%d",&u);
      printf("%d夸脱水 = ",u);
      int i =u*950 ;
      float v = i/3e-23;
      printf("%e个水分子",v);
      return 0;
}

// 单位换算题目3
int main(){
      float t = 2.54e-2;
      int y;
      scanf("%d",&y);
      printf("输入您的身高%d英寸", y);
      float m = y * t;
      printf("您的身高是%.2f米",m);
      return 0;
}

// 单位换算题目4
int main(){
      int b;
      scanf("%d",&b);
      int a =b/2;
      int c =b*8;
      int d =b*16;
      int e =b*48;
      printf("%d杯 = %d司 = %d大汤 = %d茶勺",b,a,c,d,e);
      return 0;
}

// strlen标识符,求字符的大小,单位字节
int main(){
      char e[] = "我是娜维娅老板的狗！"; //存储字符串可以用数组
      printf("%d",strlen(e)); //忘记加"%d"了,printf()只能将字符串做为第一参数
      return 0;
}