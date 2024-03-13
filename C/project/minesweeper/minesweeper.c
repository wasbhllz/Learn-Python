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
    while(1)
    {
        interface();
        scanf("%d", &input);
        do
        {
            printf("🎊游戏开始！\n");
            game();
            break;
        } while (input == 1);
            break;
    }
    return 0;
}
