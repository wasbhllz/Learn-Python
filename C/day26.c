// 24.03.07
/*
// 应用:选择排序，比较熟练
# include <stdio.h>
void boll(char* arr,int size){ // 记得接收数组的是指针
    for(int i = 0;i<size-1;i++){
        for(int j = 0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                char temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
int main(){
    char arr[] = {'d','c','b','a'};
    int size = sizeof(arr)/sizeof(arr[0]);
    boll(arr,size);
    for(int s = 0;s<size;s++)
        printf("%c ",arr[s]); // 记得引用数组的下标
            return 0;
}
*/
# include <stdio.h>
#define ROW 3
#define COL 4
void choose(int* arr[][COL]){
    int max;
    for(int i = 0;i<ROW;i++){
        for(int j = 0;j<COL-1;j++){
        max = j;
            for(int k = j+1;k<j-1;k++){
                if(arr[i][k]>arr[i][max]){
                    int temp = arr[i][k];
                        arr[i][k] = arr[i][max];
                        arr[i][max] = temp;
                }
            }
        }
        printf("\n");
    }
}
int main(){
    int arr[][4]={
    {9,8,7,12},
    {6,5,4,11},
    {3,2,1,10},
    };
    choose(arr);
    for(int i = 0;i<ROW;i++){
        for(int j = 0;j<COL;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

#define ROW 3
#define COL 4

void selectionSort(int arr[][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL - 1; j++) {
            int minIndex = j;
            for (int k = j + 1; k < COL; k++) {
                if (arr[i][k] < arr[i][minIndex]) {
                    minIndex = k;
                }
            }
            // Swap the minimum value with the current element
            int temp = arr[i][j];
            arr[i][j] = arr[i][minIndex];
            arr[i][minIndex] = temp;
        }
    }
}

int main() {
    int arr[ROW][COL] = {
        {10, 5, 8, 1},
        {9, 2, 6, 4},
        {7, 12, 11, 3}
    };

    selectionSort(arr);

    printf("Sorted array:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
