// 02.24
/*
// 有序数组的二分查找
# include <stdio.h>
int main(){
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 8;
    int least = 0; // 查找的最小范围
    int u = sizeof(num) / sizeof(num[0]); //数组的数量
    int utmost = u - 1; // 索引查找的最大范围
    while (least <= utmost){
        int middle = (least + utmost) / 2; // 二分查找
    if (num[middle]<n)
        least = middle + 1; // 改变最小范围
    else if(num[middle]>n)
        utmost = middle - 1; // 改变最大范围
    else{
        printf("找到了！🤩 是索引%d号",utmost);
        break;
        }
    }
    if (least > utmost)
        printf("本数组中暂无该数据😭");
        return 0;
}

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
    
    int e = rand() % 100 + 1;
    0~RAND_MAX(32767)
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

// goto语句可以跳转到指定的标签位置，在一个函数体范围内
// 会跳转到
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

// 02.26
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