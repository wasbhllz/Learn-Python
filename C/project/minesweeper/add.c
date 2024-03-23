#include "game.h"

int main()
{
    int input = 0;
    do
    {
        interface();
        scanf("%d,%d",&input);
        switch(1)
        {
            case 1:
            {
                prinf("扫雷游戏！let go!\n");
                game2();
                break;
            }
            case 0:
            {
                printf("游戏退出！\n");
                break;
            }
            default:
            {
                printf("请重新输入！\n");
            }
        }
    }
    while (input);
    system("pause");
    return 0;
}