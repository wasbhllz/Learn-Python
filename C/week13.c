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
*/
//
int main(){
    int line2 = 0;
    scanf("%d", &line2);
    int line = (line2 / 2)+1;
    // 打印上半部分
    for (int i = 0; i < line;i++){
        for (int j = 0; j < line-1-i;j++){
            printf(' ');
        }
        printf("\n");
        for (int j = line; j <= (line*2-1);j+=2){
                printf('*');
        }
        printf("\n");
    }
    for (int i = 1; i <= 11;i++){
        for (int j = 1; j <= line-1+;j++){
            printf(' ');
        }
        printf("\n");
        for (int j = 13; j > 6;j--){
            printf('*');;
        }
        printf("\n");
    }
        return 0;
}
