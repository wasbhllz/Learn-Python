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

// 综合练习2
// 石头、剪刀、布游戏
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

// 24.02.27
// 两个数字交换
void  d (int* x,int* y ){
    int d = *x; // 临时存储
    *x =*y;
    *y = d;
}
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d\n",&a,&b);
    printf("%d %d",a,b);
    d(&a, &b); // 修改指针的值需要取地址，引用不需要取地址
    printf("%d %d",a,b);
    return 0;
}

// 24.02.28
// 找出100~200之间的质数
# include <math.h> // 数学库
int main(){
    int q = 0;
    int w = 0;
    for (q = 101;q<200;q+=2){
        int c = 1;
        for (int x = 2; x < sqrt(q);x++){ // sqrt()函数用来开平方，来源<math.h>
            if (q % x == 0){
                c = 0;
                break;
            }
        }
        if(c == 1){
            printf("%d ", q);
            w++;
        }
         
    }
    printf("质数有%d个",w);
return 0;
}

// 判断输入的数是否为质数
# include <math.h>
int prime(int x){
    int e = 0;
    for (e = 2; e < sqrt(x);e++)
    {
        if(x % e == 0)
            return 0;
            }
    return 1;
}
int main(){
    int a = 0;
    scanf("%d", &a);
    if(prime(a) == 1){
        printf("%d是质数",a);
        }
        if(prime(a) == 0){
            printf("%d不是质数", a);
            }
        return 0;
}

// 查找闰年
int main(){
    int year = 0;
    for (year = 1800; year <= 2024;year++){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("%d ",year);
    }
    return 0;
}

// 二分查找的函数
# include <stdio.h>
int find(int* a,int b,int c){ // 数组传的是指针，所以要写成int*
    int f = 0;
    while(f <= c){
        int mad = f + (c - f) / 2; // 二分查找的索引
        if(a[mad] < b) // 写成数组[索引]
            f = mad + 1;
            else if(a[mad] > b)
                c = mad - 1;
                else
                    return mad;
    }
    return -1;
}
int main(){
    int d[] = {1,2,3,4,5,6,7,8,9,10};
    int c = 12;
    int b = sizeof(d) / sizeof(d[0])-1; // 最大范围
    if(find(d, c, b) != -1) // 传了3个元素：数组，目标，索引最大范围
        printf("找到了");
    else
        printf("没找到");
    return 0;
}

// 24.03.1
// 函数的链式访问
int main(){
printf("%d",printf("%d",printf("%d",123))); // printf()函数返回值是字符的个数
return 0;
}

// 函数的递归
void a(unsigned e){ // 在一个函数里调用了另一个函数，所以存储在了栈帧中
    if(e>9)
        a(e/10);
    printf("%d",e%10);
}
int main(){
    unsigned e = 0;
    scanf("%u",&e);
    a(e);
    return 0;
}

// 24.03.3
// 自制strlen函数求字符数
int my_strlen(char* w){
    int a = 0;
    while(*w != '\0'){ // 单引号表示字符常量
        w++;
        a++;
        }
    return a;
}
int main(){
    char arr[]= "abc";
    int e = my_strlen(arr);
    printf("%d\n",e);
    return 0;
}

// 用递归求字符数
int kk(char* s){
    if(*s != '\0') // 指针指向的元素是否等于'\0'
    return 1+(kk(s+1)); // 表示s指针指向的后面一个地址
    else
        return 0;
}
int main(){
    char a []= "I love you !";
    printf("%d\n", kk(a));
    return 0;
}
*/
// 用递归求n的阶乘
# include <stdio.h>
int factorial(int s){
if(s == 1)
    return 1;
    return factorial(s - 1) * s;
}
int main(){
int s = 0;
scanf("%d",&s);
printf("%d的阶乘是%d",s,factorial(s));
return 0;
}