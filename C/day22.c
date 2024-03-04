// 24.03.3
/*
// 自制strlen函数求字符数
# include <stdio.h>
int my_strlen(char* w){
    int a = 0;
    while(*w != '\0'){ // 单引号表示字符常量
        w++;
        a++;
        }
    return a;
}
int main(){
    char arr[]= "abc";
    int e = my_strlen(arr);
    printf("%d\n",e);
    return 0;
}
// 用递归求字符数
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
*/
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
