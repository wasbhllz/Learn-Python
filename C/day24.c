// 24.03.05
/**/
// 辗转相除法
// 给定两个数，求最大公约数
# include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c;
    scanf("%d %d",&a, &b);
    while(b!= 0){
        c = a % b;
        a = b;
        b = c;
        }
        printf("%d", a);
    return 0;
}
