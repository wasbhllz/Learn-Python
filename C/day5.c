// 12.20
#include <stdio.h>
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