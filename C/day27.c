// 24.03.09
/**/
# include <stdio.h>
# include "game.h"

void interface(){
   printf("欢迎来到三子棋！\n##########\n###1.pary###\n##########\n###2.quit###\n");
}
int main(){
   int input = 0;
   do{
      interface();
      printf("请输入代号：\n");
      scanf("%d",&input);
         switch(input){
            case 1:
               game();
               break;
            case 0:
               break;
            default:
               printf("输入错误，请重新输入：\n");
         }
   } while (input);
        printf("再见！\n");
            return 0;
}
