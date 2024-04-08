// 24.02.21
//ASCII码转字符
/*
#include <stdio.h>
int main() {
    int a = 0xABCDEF; // 表示ASCII码
        printf("%15d\n",a);
    return 0;
}

// 我是大V
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
        printf("    %d\n   %d %d\n  %d %d %d\n %d %d %d %d\n%d %d %d %d %d", a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);

    return 0;
}

// 生日的输入输出
#include <stdio.h>
int main() {
    int a, b,c;
    int result = scanf("%4d%2d%2d", &a, &b,&c); // 为避免scanf重复调用导致出现两次提示
    if (result !=3){ // 判断输入是否为整数,数据项数和占位符的个数相同,即:输入!=1
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
    char a[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33}; // 这些整数表示ASCII码
        printf("%s", a);
    return 0;
}

// 字符转ASCII码
#include <stdio.h>
int main() {
    char a[100];
    scanf("%s", a); //"%s"不用&取地址
    printf("%d\n", a);
    return 0;
}

// 两个字符颠倒顺序
#include <stdio.h>
int main(){
    char a,b;
    scanf("%s %s",a,b);
    printf("%d\n%d",b,a);
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
*/
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


// 1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。使用#define或const创建一个表示60的符号常量或const 变量。通过 while 循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。

// 编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数(例如，用户输入5，则打印5~15的所有整数，包括5和15)。要求打印的各值之间用一个空格、制表符或换行符分开。

// 编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成23.周4天。以下面的格式显示结果:
//18 days are 2 weeks,4 days.

// 通过 while循环让用户重复输入天数，当用户输入一个非正值时(如0或-20)，循环结束。编写一个程序，提示用户输入一个身高(单位:厘米)，并分别以厘米和英寸为单位显示该值，允

