// 24.03.25
#include <stdio.h>
/*
// 位移操作符
int main()
{
    int a = 8;
    int d= a << 2; //二进制补码左移2位，乘2^(位移n)
    int s =a >> 2; //二进制补码右移2位，除2^(位移n)
    printf("%d,%d,%d", a, d,s);
    return 0;
}

// 按位操作符（跟逻辑门相似）
int main(){
    int a = 5;
    int c = 6;
    int b = a & c;
    int z = a | c;
    int s = a ^ c;
    int x = ~a;
    printf("%d,%d,%d,%d,%d", a, c, b, z, s);
    return 0;
}
*/
// 重点题目
// 题目：在不创建临时变量的情况下，将两个变量的值交换
int main(){
    int a = 5;
    int b = 8;
    a = a ^ b; //a被赋予了a和b的异或结果，即a ^ b。
    b = a ^ b; //此时a已经被更新为a ^ b，因此b被赋予了a ^ b与b的异或结果，即a ^ b ^ b，等价于a。
    a = a ^ b; //此时b已经被更新为原来的a，而a已经被更新为a ^ b，因此a被赋予了a ^ b与原始a的异或结果，即a ^ a ^ b，等价于b。
    printf("%d,%d", a, b);
    return 0;
}