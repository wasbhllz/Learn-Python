// 24.04.16
#include <stdio.h>
/*
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
int main(){
    int a = 0;
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a;i++){
        for (int j = 0; j < a-(a-1);j++){
            arr[i][0] = 1;
            arr[i][j] = 1;
            }
        }
        for (int i = 0; i < a;i++){
        for (int j = 0; j < a;j++){
        printf("%d ",arr[i][j]);
            }
        }
    return 0;
}
