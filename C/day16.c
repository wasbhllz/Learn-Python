// 02.24
/*
// 类似字幕遮罩的效果
# include <stdio.h>
# include <windows.h>
# include <stdlib.h>
int main(){
    char b[] = "I can free!";
    char a[]="###########";
    int c = 0;
    int d = strlen(a)-1;
    printf("%s\n", a);
    while (c <= d)
    {
        a[c] = b[c];
        a[d] = b[d];
        Sleep(500); // 暂停500毫秒相当于0.5秒，来源<windows.h>
        printf("%s\n", a);
        system("cls"); // 清屏，system库函数，可以调用系统命令，来源<stdlib.h>
        c++;
        d--;
    }
    return 0;
}

// 模拟用户登录的程序
# include <stdio.h>
# include <string.h>
int main(){
    char z[20] = {0}; //初始化
    int x = 0;
    for (x = 0; x < 3;x++){ // 三次循环
    printf("请输入密码：\n");
    scanf("%s", z); // 数组本就是地址，不用再取地址
    if(strcmp(z,"zxcvbn") == 0){ // strcmp库函数,判断数组内的字符串是否相等，相等返回值为0,来源<string.h>
        printf("密码正确！\n登陆成功!😊");
        break;
    }
    else 
        printf("密码错误\n");
    } 
    if(x == 3)
        printf("三次输入错误,程序退出");
    return 0;
}

// 02.25
// 猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 调用系统时间
void w(){
    printf("🍀🍀🍀🍀🍀🍀\n");
    printf("🍀🍀1.play🍀🍀\n");
    printf("🍀🍀0.exit🍀🍀\n");
    printf("#🍀🍀🍀🍀🍀🍀\n");
}
void game(){
    int s = 0;
    int y = 0;
    int e = rand() % 100 + 1; // 生成随机数的函数,游戏设置范围0~99,函数调用的范围是0~RAND_MAX(32767)
    while(1){
        for (y = 0; y < 5;y++){ // 猜数字次数设置
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
   srand((unsigned int)time(NULL)); //设置随机数随时间戳的改变而更加随机,time(NULL)是空指针
   do {
    w();
    printf("请输入代码：\n");
    scanf("%d",&a);
   switch(a) //根据用户输入判断真假
   {
    case 1:
    {
       printf("猜数字游戏现在开始！\n限制:在5次之内猜对哦!\n"); //忘记码break;
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

// 电脑关机程序
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main(){
    char input[20] = {0};
    system("shutdown -s -t 60"); //调用系统的关机命令,时间设置为60秒
hh:
    printf("您的电脑将在60秒后关机\n请输入:我是散宝的老婆\n来解除危机!🤯\n");
    scanf("%s", input);
    if(strcmp(input,"我是散宝的老婆") == 0){
        system("shutdown -a"); //取消关机命令
        
        }
        else
        goto hh;
        return 0;
}
*/