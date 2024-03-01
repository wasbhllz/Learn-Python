// 24.03.1
/*
// 函数的链式访问
# include <stdio.h>
int main(){
printf("%d",printf("%d",printf("%d",123))); // printf()函数返回值是字符的个数
return 0;
}
*/
// 函数的递归
# include <stdio.h>
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
