// 24.02.26
/*
// 随机数生成
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
    srand(time(NULL));
    int a = rand();
    printf("%d", a);
    return 0;
}
*/
// 24.02.26
// 石头、剪刀、布游戏
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
    int user = 0;
    int q = 0;
    int score = 0; 
    char *choice[20] = {"👊", "✌️", "✋"};
    while (1)
    {
        srand((unsigned)time(NULL));
        int conmputer = rand() % 3 + 1;
        printf("👀 欢迎来到石头、剪刀、布游戏！\n❗ 游戏规则是：0——石头，1——剪刀，2——布\n");
        for (q = 0; q < 3; q++)
        {
            printf("你选择出什么呢？😁\n");
            scanf("%d", &user);
            if (user == conmputer){
                score ++;
                printf("%s %s ，平局了！得分+1\n", choice[user], choice[conmputer]);
                }
                else if (user == 1 && conmputer == 2 || user == 2 && conmputer == 3 || user == 3 && conmputer == 1){
                    score +=2;
                    printf("%s %s ，对了！得分+2 😎\n", choice[user], choice[conmputer]);       
                }
            else
            {
                printf("%s %s ,不对，再来一次！😫 本次不加分呢\n", choice[user], choice[conmputer]);
            }
        }
        if(score == 0){
            printf("得分：%d,你输了，机会用完了！😭\n",score);
            break;
        }
        else if(score == 4){
            printf("得分：%d,赢了真棒！👍\n",score);
            break;
            }
        else{
            printf("得分：%d,别灰心！再接再厉！🤗",score);
            break;
            }
    }
    return 0;
}