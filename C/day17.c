// 24.02.25

// 综合练习1
// 猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 调用系统时间
void w(){
    printf("#🍀🍀🍀🍀🍀🍀\n");
    printf("🍀🍀1.play🍀🍀\n");
    printf("🍀🍀0.exit🍀🍀\n");
    printf("#🍀🍀🍀🍀🍀🍀\n");
}
void game(){
    int s = 0;
    int y = 0;

    // 生成随机数的函数,游戏设置范围0~100
    // rand()函数的随机数生成范围是
    // 0~RAND_MAX(32767)

    int e = rand() % 100 + 1;
    while(1){
        for (y = 0; y < 7;y++){ // 猜数字次数设置
        printf("请猜数字:😊\n");
        scanf("%d", &s); // 更新用户输入
            if (s > e)
            {
                printf("猜大了😉\n");
            }
            else if (s < e)
            {
                printf("猜小了😯\n");
            }
            else{
            printf("恭喜你,猜对了❤️\n奖励你散宝的亲亲!\n");
            break; 
            }
        }
        printf("很可惜,挑战失败了!😭\n正确答案是:%d\n", e);
        break;
    }   
}
int main()
{
   int a = 0;

   // 设置随机数随时间戳变化为种子，来初始化随机数生成器
   // srand()函数用来设置：随机数生成器的种子。不调用srand()函数每次启动时会生成一样的随机数
   // time(NULL)是空指针，返回当前的系统时间
   // unsigned int将time(NULL)的返回值转换为无符号类型

   srand((unsigned int)time(NULL));
   do {
    w();
    printf("请输入代码：\n");
    scanf("%d",&a);
   switch(a) //根据用户输入判断真假
   {
    case 1:
    {
       printf("猜数字游戏现在开始！\n限制:在7次之内猜对哦!\n"); //忘记码break;
       game(); //调用自制游戏函数
       break; 
    }
    case 0:
    {
        printf("已退出程序,欢迎下次光临\n");
        break;
    }
    default:{
        printf("输入错误,请重新输入\n");
        break;
    }
    }
   } 
   while (a);
   return 0;
}

// goto语句可以跳转到指定的标签位置，在一个函数体范围内会跳转到标签所在
/*
// 电脑关机程序
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main(){
    char input[20] = {0};
    system("shutdown -s -t 60"); //调用系统的关机命令,时间设置为60秒
hh:
    printf("您的电脑将在60秒后关机\n请输入:我爱散宝\n来解除危机!🤯\n");
    scanf("%s", input);
    if(strcmp(input,"我爱散宝") == 0){
        system("shutdown -a"); //取消关机命令
        }
        else
        goto hh;
        return 0;
}
*/

