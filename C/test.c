// 23.12.10
# include <stdio.h>
# include "game.h"
int game();
void interface(){
   printf("欢迎来到三子棋！\n##########\n###1.pary###\n##########\n###2.quit###\n");
}
int main(){
   int input = 0;
   do{
      interface();
      printf("请输入代号\n");
      scanf("%d",input);
         switch(1){
            case 1:
               game();
               break;
            case 2:
               break;
            default:
               printf("输入错误，请重新输入：\n");
         }
   } while (input);
      return 0;
}
