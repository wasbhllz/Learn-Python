// 24.02.20
#include <stdio.h>
/*
//指针打印
struct hh{
char name[20];
int age;
char race[20];
};
int main(){
    struct hh a = {"魈", 1000, "仙人"};
    struct hh *b = &a; // 创建指向结构体的指针*b
    printf("%s\n%d\n%s", b->name, b->age, b->race); //用`->`来通过指针访问结构体的成员
    return 0;
}

// 24.02.22
// 输入的数字,字符,空格都能打印出来
int main(){
    char u[30];
    scanf("%[^\n]",u); // 使用[^\n]让scanf读取空格,直到遇到\n为止
    printf("%s",u);
    return 0;
}

// 只能打印输入的字符
int main(){
    char n[100];
    scanf("%s",n); // 数组n是地址所以不用额外打&
    while (scanf("%s",n) != EOF){ // 用获得的输入来与文件结束标志作比较
        printf("%s",n);
        }
    return 0;
}

// for 循环
int main(){
    int n;
    for (n = 0; n < 10; n++) // 和while循环不同在于控制不在循环语句中
    {
        printf("%d\n",n);
    }
    return 0;
}

// 嵌套for循环
// 先从外层for循环进去判断，再进入内层for循环判断
int main(){
    for (int q = 0; q < 5; q++){
        printf("%s", "我爱小白散！🥰");
        if (q != 1){
        for (int w = 0; w < 1;w++)
            printf("%s", "饮月君也好帅！😍");
        }
    }
            return 0;
    }

// 24.02.23
// do while循环
// 至少先执行一次do语句,再进行条件判断后是否循环,总结：先干为敬
int main(){
    int g =0;
    do{
        printf("无限进步！🤩");
        g++;
        }
    while (g < 2);
    return 0;
}

// n的阶乘
int main(){
    int n = 0;
    int s = 1;
    int a = 1;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    for (s = 1; s <= n; s++)
        a = a * s;
        printf("%d! = %d",n,a);
    return 0;
}

// 题目：1!+2!+3!+...10!
int main(){
    int n = 1;
    int s = 1;
    int a = 1;
    int num = 0;
    for (n = 1; n <= 10;n++){ //注意括号范围
            a = a * n;
            num = a + num;
            }
    printf("%d",num);
    return 0;
}

// 24.02.24
// 有序数组的二分查找
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

// 24.02.25
// 综合练习1
// 猜数字游戏
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
*/
// 电脑关机程序
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


