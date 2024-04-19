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
*/
// 24.04.17
// 
void hhh(int a){
    int arr[a][a];
    for(int i = 0; i < a;i++){
        for (int j = 0; j < a;j++){
            arr[i][j] = 0;
            printf("%d ",arr[i][j]);
            }
        }
}
int main(){
    int a = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a;j++){
        printf("%d ",hhh(a));
        }
        printf("\n");
    }
    return 0;
}
