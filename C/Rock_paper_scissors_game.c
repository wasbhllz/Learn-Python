// 24.02.24
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
    int user = 0;
    while(1){
        int conmputer = rand() % 3 + 1;
            srand(time(0));
            printf("欢迎来到石头、剪刀、布游戏！\n游戏规则是：1——石头，2——剪刀，3——布\n你选择出什么呢？😁\n");
            int w = scanf("%d", &user);
                if(w == conmputer)
                    printf("平局了！\n");
                    else if(w ==1 && conmputer == 2 || w == 2 && conmputer == 3 || w == 3 && conmputer == 1){
                        printf("胜利了！😎\n");
                        break;
                    }
                    else
                    {
                    printf("你输了啊！😫\n");
                    break;
                    }
                break;
    }
    return 0;
}