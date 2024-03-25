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
    int b = a & c; //按位与，相当于逻辑门中的与门：AND,比较二进制补码中，如果两个都为1为1，都不为1为0
    int z = a | c; //按位或,相当于逻辑门中的或门：OR，如果两个有一个为1为1，都不为1为0
    int s = a ^ c; //按位异或,同0异1
    int x = ~a; //按位取反，将1变为0，将0变为1
    printf("%d,%d,%d,%d,%d", a, c, b, z, s);
    return 0;
}
*/
// 题目：在不创建临时变量的情况下，将两个变量的值交换
int main(){
    int a = 5;
    int b = 8;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d,%d", a, b);
    return 0;
}
