// 24.02.21
// ASCII码转字符
/*
#include <stdio.h>
int main() {
    int a = 0xABCDEF; // 表示16进制
        printf("%15d\n",a);
    return 0;
}

// 生日的输入输出
#include <stdio.h>
int main() {
    int a, b,c;
    int result = scanf("%4d%2d%2d", &a, &b,&c); // 为避免scanf重复调用导致出现两次提示
    if (result !=3){ // 判断读取输入是否成功,读取成功一个值返回1，否则返回EOF
        printf("输入的不是整数,请重新输入\n");
        return 1;
    }
    printf("year=%4d\nmonth=%02d\ndate=%02d",a,b,c); // 打印输出的字宽可以用格式指定符"%4d"来指定，可以使打印更加美观
    return 0;
}

// 缩短二进制
#include <stdio.h>
int main() {
    int a = 1234;
    printf("%#o %#X",a,a); //"%#o"会在八进制前显示导0，"%#X"在十六进制数前显示前导0X
    return 0;
}

// ASCII码转字符
#include <stdio.h>
int main() {
    char a[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33}; // 整型转变为字符型
        printf("%s", a);
    return 0;
}

// 字符转ASCII码
#include <stdio.h>
int main() {
    char a[100];
    scanf("%s", a); //数组本身是首元素地址，所以不用&取地址
    printf("%d\n", a);
    return 0;
}

// 嵌套printf先打印括号内的
#include<stdio.h>
int main() {
    printf("\n%d", printf("%s","Hello world!"));
    return 0;
    }

//计算带余除法
#include <stdio.h>
int main() {
    int a, b;
    int q = scanf("%d %d", &a, &b);
    int c = a/b;
    int d = a%b;
    if(q == 2)
        printf("%d %d\n", c,d);
    return 0;
}

// 24.03.31
//序列中删除指定数字
#include <stdio.h>
int main() {
    int a = 0;
    scanf("%d",&a);
    int arr[a];
    int i = 0;
    for(i= 0;i<a;i++)
        scanf("%d",&arr[i]);
    int del = 0;
    scanf("%d",&del);
    int j =0;
    for(i=0;i<a;i++){
        if(arr[i]!= del)
            arr[j++] =arr[i];
        }
    for(i=0;i<j;i++)
        printf("%d ",arr[i]);
    return 0;
}

//递归题目
//青蛙跳台阶
#include <stdio.h>
int recursion(int a){
    if(a<=2)
        return a;
    else
        return recursion(a-1)+recursion(a-2);
}
int main() {
    int a = 0;
    scanf("%d",&a);
    printf("%d",recursion(a));
    return 0;
}

// 24.03.01
//最高分与最低分之差
#include <stdio.h>
int main() {
    int a =0;
    scanf("%d",&a);
    int arr[a];
    int i =0;
    for(i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    //最高
    int max=arr[0];
    for(i=1;i<a;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    //最低
    int small=arr[0];
    for(i=1;i<a;i++){
        if(arr[i]<small){
        small =arr[i];
        }
    }
    printf("%d",max-small);
    return 0;
}

//矩阵元素定位
#include <stdio.h>
int main() {
    int arr[10][5];
    int x,y;
    int z,c;
    int a= 0;
    scanf("%d %d",&x,&y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d %d",&z,&c);
    if(z<=x&&c<=y)
    printf("%d",arr[z-1][c-1]);
    return 0;
}

//矩阵转置
#include <stdio.h>
int main() {
    int arr[10][10];
    int arr2[10][10];
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr2[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//字母大小写转换
#include <stdio.h>
#include <ctype.h>
int main() {
    char a = 0;
    while (scanf("%c", &a) != EOF) {
        if (islower(a)) //判断是否为小写字符的函数,头文件是<ctype.h>
            printf("%c\n", toupper(a)); //转换为大写字符的函数
        else if (isupper(a)) //判断是否为大写字符的函数
            printf("%c\n", tolower(a)); //转换为小写字符的函数
    }
    return 0;
}

//最高分数
#include <stdio.h>
int main() {
    int a;
    int i = 0;
    int max = 0;
    for (i = 0; i < 3; i++) {
        scanf("%d ", &a);
        if (a > max)
            max = a;
    }
    printf("%d", max);
    return 0;
}

// 24.04.02
//变种水仙花数
#include <stdio.h>
int main() {
    int i=0;
    for(i=10000;i<=99999;i++){
    if(((i/10000)*(i%10000))+((i/1000)*(i%1000))+((i/100)*(i%100))+((i/10)*(i%10))==i)
    printf("%d ",i);
    }
    return 0;
}

// 24.04.03
//统计数据正负个数
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int arr[20] = {0};
    for (int i = 0; i <= 10; i++) {
        scanf("%d ", &arr[i]);
        if (arr[i] > 0)
            a++;
        else if (arr[i] < 0)
            b++;
    }
    printf("positive:%d\nnegative:%d",a,b);
    return 0;
}

// 重点题目
// 24.04.08
#include <stdio.h>
int main() {
    int a, b, c;
    a = 5;
    c = ++a;
    b = ++c, c++, ++a, a++; // 因为逗号表达式的优先级最低，所以b会先被赋值，再计算逗号表达式的值,所以b=7
    b += a++ + c;
    printf("a = %d,b = %d,c = %d",a,b,c);
    return 0;
}

// 24.04.09
#include <stdio.h>
int main(void) {
    int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, *p[4], i;
    for (i = 0; i < 4; i++)
 p[i] = &a[i * 3];
    printf("%d\n", p[3][2]);
    return 0;
}


//写一个函数返回二进制中1的个数
#include <stdio.h>
int count(int a){
    int cont = 0;
    while (a){ //当没有有效位数可移，a的数值会变为0
    if(a&1) //二进制位与1
        cont++; //计数增加
        a >>= 1; //右移
    }
    return cont;
}
int main() {
    int a = 0;
    scanf("%d", &a);
    printf("%d", count(a));
    return 0;
}

// 24.04.12
//写一个函数判断是否是2的n次方
#include <stdio.h>
int count(int a){
    if(a&(a-1)==0)
    printf("Yes");
    else
    printf("No");
}
int main() {
    int a = 0;
    scanf("%d", &a);
    count(a);
    return 0;
}

//求两个数二进制中不同位的个数
#include <stdio.h>
int count(int a, int b)
{
    int c = a ^ b; // 先异或出不同的位数为1
    int d = 0;
    while(c){
        c = c & (c - 1); //这个操作的效果是每次循环都会消除 c 中的一个 1，直到 c 变为 0
        d++; // 再一个个判断最右边一位是否为1，为1加1
    }
    return d;
}
int count2(int a, int b)
{
    int d = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((((a >> i) & 1)) != ((b >> i) & 1)) // 比较一个个右移的位数中有哪些不同
            d++;
    }
    return d;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", count(a,b));
    return 0;
}

// 24.04.14
// 获取一个整数的二进制序列中所有的奇数和偶数，分别打印出二进制序列
#include <stdio.h>
int count(int a){
    int cont = 0;
    int odd = 0;
    for (int i = 30; i >=0;i-=2){
        printf("%d",(a >> i)&1);
    }
    printf("\n");
    for (int j = 31; j >= 1;j-=2){
        printf("%d",(a >> j)&1);
        }
}
int main() {
    int a = 0;
    scanf("%d", &a);
    count(a);
    return 0;
}

// 24.04.15
// X形图案
// 打印图案的题，先找到图案的规律再写
#include <stdio.h>
int main() {
    int a=0;
    while(scanf("%d",&a)==1)
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j)
                printf("*");
            else if(i+j==a-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/ 
// 获得月份天数
#include <stdio.h>

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        if (a % 4 == 0) {
            if (b == 2)
                printf("29\n");
        } else if(b == 2)
            printf("28\n");
        if((b<8 && b%2==1)||(b>7 && b%2==0))
            printf("31\n");
        else if(b != 2 &&((b<8 && b%2==0)||(b>7 && b%2==1)))
            printf("30\n");
            }
return 0;
}
