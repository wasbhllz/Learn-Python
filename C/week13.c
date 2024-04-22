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
153/pow(10,2) 1
153%pow(10,2)+153/pow(10,1) 5
153%pow(10,2)+153/pow(10,1)+153%pow(10,1) 3
100000
pow(10,0)

*/

int solo(int a){
    int sum = 0;
    for (int i = 10; i < 100000;i++){
        for (int j = 0; j <= 5;j++){
            if(i/pow(10,j)==1){
                sum = i / pow(10,j);
                sum *= i / pow(10,j);
            }
            sum += i / pow(10,j);
        }
    }
}
int main(){
    int a = 0;
    add(solo(a));
    return 0;
}