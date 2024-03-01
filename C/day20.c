// 24.02.28
/*
// 找出100~200之间的质数
# include <stdio.h>
# include <math.h> // 数学库
int main(){
    int q = 0;
    int w = 0;
    for (q = 101;q<200;q+=2){
        int c = 1;
        for (int x = 2; x < sqrt(q);x++){ // sqrt()函数用来开平方，来源<math.h>
            if (q % x == 0){
                c = 0;
                break;
            }
        }
        if(c == 1){
            printf("%d ", q);
            w++;
        }
         
    }
    printf("质数有%d个",w);
return 0;
}

// 判断输入的数是否为质数
# include <stdio.h>
# include <math.h>
int prime(int x){
    int e = 0;
    for (e = 2; e < sqrt(x);e++)
    {
        if(x % e == 0)
            return 0;
            }
    return 1;
}
int main(){
    int a = 0;
    scanf("%d", &a);
    if(prime(a) == 1){
        printf("%d是质数",a);
        }
        if(prime(a) == 0){
            printf("%d不是质数", a);
            }
        return 0;
}

// 查找闰年
# include <stdio.h>
int main(){
    int year = 0;
    for (year = 1800; year <= 2024;year++){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("%d ",year);
    }
    return 0;
}

// 二分查找的函数
# include <stdio.h>
int find(int* a,int b,int c){ // 数组传的是指针，所以要写成int*
    int f = 0;
    while(f <= c){
        int mad = f + (c - f) / 2; // 二分查找的索引
        if(a[mad] < b) // 写成数组[索引]
            f = mad + 1;
            else if(a[mad] > b)
                c = mad - 1;
                else
                    return mad;
    }
    return -1;
}
int main(){
    int d[] = {1,2,3,4,5,6,7,8,9,10};
    int c = 12;
    int b = sizeof(d) / sizeof(d[0])-1; // 最大范围
    if(find(d, c, b) != -1) // 传了3个元素：数组，目标，索引最大范围
        printf("找到了");
    else
        printf("没找到");
    return 0;
}
