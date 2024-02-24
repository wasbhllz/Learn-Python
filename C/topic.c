// 02.21
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
    printf("year=%4d\nmonth=%02d\ndate=%02d",a,b,c); // 打印输出的字宽可以用格式指定符"%4d"来指定
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
*/
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