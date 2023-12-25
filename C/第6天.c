// 12.22
#include <stdio.h>
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