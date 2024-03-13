#include "game.h"
char interface(){
    printf("🎉欢迎来到扫雷游戏！\n请输入>>\n");
    printf("💎💎💎💎💎💎💎💎💎\n");
    printf("💎💎💣 1.开玩！💎💎\n");
    printf("💎💎💣 0.退出！💎💎\n");
    printf("💎💎💎💎💎💎💎💎💎\n");
}
int main(){
    int input = 0;
    do{
        interface();
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            printf("🎊游戏开始！\n");
            game();
            break;
        case 0:
        printf("👋再见！\n");
            break;
        default:
            printf("输入错误！\n");
        }
    }
    while (input);
    return 0;
}
