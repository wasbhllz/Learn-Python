// 24.02.27
// 两个数字交换
# include<stdio.h>
void  d (int* x,int* y ){
    int d = *x; //临时存储
    *x =*y;
    *y = d;
}
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d\n",&a,&b);
    printf("%d %d",a,b);
    d(&a, &b);
    printf("%d %d",a,b);
    return 0;
}

