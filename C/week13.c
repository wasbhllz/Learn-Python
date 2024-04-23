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
153/10 3
(153/pow(3,3)) 5
53%pow(10,1) 3
100000
pow(10,0)

*/
// 24.04.23
// 打印1~100000内的水仙花数
#include <math.h>
int main(){
    int i, b, temp;
    for (int i = 1; i < 100000;i++){
        //计算幂
        int b = (int)log(i)+1;
        int num = i;
        int sum = 0;
        //计算单个数的幂之和
        temp = i;
        while(temp>0){
            temp = temp / 10;
            sum = sum + pow(temp, b); //每位数字的幂
            temp = temp % 10;
            }
        if(sum==num)
            printf("%d\n", num);
    }
    return 0;
}