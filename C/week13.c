// 24.04.22
#include <stdio.h>
/*
// strcpy(a,b) 函数的功能是将字符串b拷贝到字符串a中，并返回a
#include <string.h>
int main(){
    char arr[] = "Hello world!";
    char a[] = "xxxxxxxxxx";
    printf("%s", strcpy(a,arr)); // 拷贝字符串的函数，头文件<string.h>
    return 0;
}

//自制拷贝函数
#include <assert.h>
void my_strcpy(char* a, char* arr){
    assert(a != NULL && arr != NULL); //判断是否为空指针，断言函数assert()，头文件<assert.h>，用于调试目的
    while((*a++ = *arr++)){} //后面没有语句跟随时，使用{}空语句填充
    *a = '\0'; //添加字符串结束符
}
int main(){
    char arr[] = "Hello world!";
    char a[20] = "xxxxxxxxxx";
    my_strcpy(a, arr);
    printf("%s",a);
    return 0;
}

// 计算数字n前5项的求和，例：5+55+555+5555+55555
#include <math.h>
int add(const int a){
    int sum;
    for (int i = 0; i < 5;i++){
        for (int j = 0; j <= i;j++){
            sum += a * pow(10,j); //n次方计算，头文件<math.h>
        }
    }
    return sum;
}
int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d",add(n));
    return 0;
}

153=1^3+5^3+3^3
从右往左取单个数字
153%10 1
(153/10) 5
153/10 3
100000
pow(10,0)

// 24.04.25
// 打印1~100000内的水仙花数
#include <math.h>
int main(){
    for (int i = 1; i < 100000;i++){
        //计算数字位数
        int b = (int)log10(i)+1;
        int sum = 0;
        //计算单个数的幂之和
        int temp = i;
        while(temp>0){
            int num = temp%10; //最右边的数字
            sum += pow(num, b); //每位数字的幂
            temp /= 10; //最左边的数字
            }
        if(sum==i)
            printf("%d\n", i);
    }
    return 0;
}

// 打印菱形
int main(){
    int line2 = 0;
    scanf("%d", &line2);
    int line = (line2 / 2)+1;
    // 打印上半部分
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - 1 - i; j++)
        {
            printf(' ');
    for (int i = 0; i < line;i++){
        for (int j = 0; j < line-1-i;j++){
            printf(" ");
        }
        printf("\n");
        for (int j = line; j <= (line * 2 - 1); j += 2)
        {
            printf('*');
        for (int j = 0; j < i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    // 打印下半部分
    for (int i = 0; i < line-1;i++){
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < (line-1-i)*2-1;j++){
                printf("*");
            }
            printf("\n");
    }
    return 0;
}

// 24.04.26
// 打印K图形
int main(){
    int a = 0;
    scanf("%d", &a);
    // 上
    for (int i = 0; i < a;i++){ //i控制列
        printf("**");
        for (int j = 0; j < a-i;j++){ //j控制前行
            printf(" ");
        }
        for (int z = 0; z < a-i;z++){
            printf("*");
            }
        printf("\n");
    }
    //中
    printf("***\n");
    //下
    for (int i = 0; i < a;i++){
        printf("**");
        for (int j = 0; j <= i;j++){
            printf(" ");
        }
        for (int z = 0; z <= i;z++){
            printf("*");
            }
        printf("\n");
    }
    return 0;
    }
*/
// 24.04.27
// 买汽水问题
// 1元1瓶汽水，2个空瓶能换1瓶汽水，小明有20元，最多能买多少瓶汽水
int main(){
    int money = 0;
    scanf("%d", &money);
    int a = 0;
    int c = 0;
    int drink = money;
    int bottle = drink;
    while(drink >=1){
        bottle = drink+c;
        a += drink;
        drink = bottle / 2;
        c = bottle % 2;
    }
    printf("%d", a);
    return 0;
}
