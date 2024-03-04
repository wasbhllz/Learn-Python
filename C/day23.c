// 24.03.04
/*
// 用递归求第n个斐波那契数列
# include <stdio.h>
int fibonacci(int a){
    if(a<=2)
        return 1;
    else
        return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
    int a = 0;
    scanf("%d",&a);
    printf("第%d个斐波那契数是%d",a,fibonacci(a));
    return 0;
}

// 用迭代求斐波那契数列
# include <stdio.h>
int fibonacci_2(int n){
    long long a = 1;
    long long b = 1;
    long long z = 1; // 预测值
    int w = 0; // 计数
    if(n == 1 ||n == 2)
        return 1;
    else
        for(w = 3;w<=n;w++){
            a = b;
            b = z;
            z = a + b;
            }
        return z;
}
int main(){
    int a = 0;
    scanf("%d",&a);
    printf("第%d个斐波那契数是%d\n",a,fibonacci_2(a));
    return 0;
}
*/
// 青蛙跳台阶问题
# include <stdio.h>
int main(){
    int steps =0;
    scanf("%d",&steps);
    printf("青蛙跳到第%d层台阶有%d种方法",steps,frog(steps));
    return 0;
}