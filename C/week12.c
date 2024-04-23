// 24.04.15
#include <stdio.h>
/*
int i;
int main(){
    i--;
    if(i>sizeof(i)) // 因为sizeof(i)返回的是size_t类型的无符号整形值，i是有符号数，所以i需要算数转换为用补码表示的无符号数进行比较，也就是i会变得非常大，所以该表达式会返回真
        printf(">\n");
    else
        printf("<\n");
    return 0;
}

// 24.04.16
int main(){
    int a = 9;
    int b = 9;
    for (int i = 0; i < a;i++){
        for (int j = 0; j < b;j++){
            if(i<a-1)
                printf("___");
            if(j<b-1)
                printf("|");
        }
        printf("\n");
        if(i=a-1)
            printf("   ");
    }
    return 0;
}

// 24.04.19
// 数组传参有点生疏
// 计算杨辉三角形第n列的值
void hhh(int a,int arr[a][a]){
    for(int i = 0; i < a;i++){
        for (int j = 0; j <= i;j++){ //打印为三角形
            if(j==0 || j==i) //对角线的元素都赋值为1
            arr[i][j] = 1;
            else
            arr[i][j] = 0;
            //printf("%d ",arr[i][j]);
        }
        //printf("\n");
    }
}
void bbb(int a,int arr[a][a]){
    for (int i = 0; i < a;i++){
        for (int j = 0; j <= i; j++)
        {
            if(arr[i][j]==0)
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j]; //计算1以外的值
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a = 0;
    scanf("%d", &a);
    int arr[a][a];
    hhh(a,arr); //初始化
    bbb(a,arr);
    return 0;
}
*/
// 三角形判断
int main(){
    int a,b,c;
    while(scanf("%d %d %d", &a,&b,&c)==3){
        if((a+b)>c && (a+c)>b && (b+c)>a){ //满足任意两边之和大于第三边
            if(a==b && b==c && a==c)
                printf("Equilateral triangle!\n");
            else if(a==b ||b==c ||a==c)
                printf("Isosceles triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    return 0;
}

