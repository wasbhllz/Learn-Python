// 24.03.05
/*
// 辗转相除法
// 给定两个数，求最大公约数
# include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c;
    scanf("%d %d",&a, &b);
    while(b!= 0){
        c = a % b; // 交换
        a = b;
        b = c;
        }
        printf("%d", a);
    return 0;
}

// 求1/1-1/2+1/3···1/99-1/100的值
# include <stdio.h>
int main(){
    int a = 0; // 分数要写浮点数类型了
    float b = 0;
    int c = 1;
    for(a = 1;a<=100;a++){
        b = b+c*(1.0/a); // 记得累加之前的值
        c = -c;
        }
    printf("%lf",b);
    return 0;
}

// 用循环打印倒三角形状的九九乘法表
# include <stdio.h>
int main(){
    int a = 1;
    int b = 1;
    for(b = 1;b<10;b++){
        for(a = 9;a>=b;--a){
            printf("%d x %d = %d  ",a,b,a * b);
            if(a == b) // 避免重复输出
        printf("\n");
        }
        
    }
    return 0;
}
*/
// 青蛙跳台阶问题
# include <stdio.h>
int frog(int n){
    int s = 0;
    if(0 <n<= 2)
        return n;
    for(int a = 2;n-a<=n;a+=2){
        for(int d = 0;a!=n;d++)
            s++;
    }
    return s;
}
int main(){
    int steps = 0;
    scanf("%d",&steps);
    printf("青蛙跳到第%d层台阶有%d种方法\n",steps,frog(steps));
    return 0;
}

