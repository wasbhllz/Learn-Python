// 24.03.1
/*
// 函数的链式访问
# include <stdio.h>
int main(){
printf("%d",printf("%d",printf("%d",123))); // printf()函数返回值是字符的个数
return 0;
}

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

// 24.03.3
# include <stdio.h>
int my_strlen(char* w){
    int a = 0;
    while(*w != '\0'){ // 单引号表示字符常量
        w++;
        a ++;
        }
    return a;
}
int main(){
    char arr[]= "abc";
    int e = my_strlen(arr);
    printf("%d\n",e);
    return 0;
}

# include <stdio.h>
int kk(char* s){
    if(*s != '\0') // 指针指向的元素是否等于'\0'
    return 1+(kk(s+1)); // 表示s指针指向的后面一个地址
    else
        return 0;
}
int main(){
    char a []= "I love you !";
    printf("%d\n", kk(a));
    return 0;
}

// 用递归求n的阶乘
# include <stdio.h>
int factorial(int s){
if(s == 1)
    return 1;
    return factorial(s - 1) * s;
}
int main(){
int s = 0;
scanf("%d",&s);
printf("%d的阶乘是%d",s,factorial(s));
return 0;
}
*/
// 用递归求n的K次方
int power(int s,int a){
    if(a !=1){
    return power(s*(a-2));
    }
    else 
        return s * a;
}
int main(){
int s = 0;
int a = 0;
scanf("%d %d",&s,&a);
printf("%d的%d次方是%d",s,a,power(s));
return 0;
}