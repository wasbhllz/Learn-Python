// 23.12.10
# include "game.h"

void interface(){
   printf("欢迎来到三子棋！\n############\n###1.pary###\n###2.quit###\n############\n");
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
               printf("退出游戏，再见！\n");
               break;
            default:
               printf("输入错误，请重新输入\n");
               break;
         }
   } while (input);
   return 0;
}

