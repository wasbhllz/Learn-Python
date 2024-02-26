// 24.02.23
/*
// do while循环
// 至少先执行一次do语句,再进行条件判断后是否循环,总结：先干为敬
# include <stdio.h>
int main(){
    int g =0;
    do{
        printf("无限进步！🤩");
        g++;
        }
    while (g < 2);
    return 0;
}



// n的阶乘
# include <stdio.h>
int main(){
    int n = 0;
    int s = 1;
    int a = 1;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    for (s = 1; s <= n; s++)
        a = a * s;
        printf("%d! = %d",n,a);
    return 0;
}
*/
// 1!+2!+3!+...10!
# include <stdio.h>
int main(){
    int n = 1;
    int s = 1;
    int a = 1;
    int num = 0;
    for (n = 1; n <= 10;n++){ //注意括号范围
            a = a * n;
            num = a + num;
            }
    printf("%d",num);
    return 0;
}

