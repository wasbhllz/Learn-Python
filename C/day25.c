// 24.03.06
/*
// 辗转相除法
// 二维数组的创建和打印
# include <stdio.h>
int main(){
    int arr[3][4] = {
        {2, 3},
        {3, 4}, 
        {5, 6},
        }; // 用花括号来排列数组的位置,可以不完全初始化，没有指定的显示为0
    char* b[][3] = { // 打印字符串数组使用char*，打印不能省略列
        {"🍕","🍔","🍟"},
        {"🌭","🍿","🍳"},
        {"🧇","🥞","🧈"}
        };
    printf("%d\n", arr); // 直接打印的话传的是数组a的首地址
    for(int i = 0;i<3;i++){// 二维数组的嵌套打印
        for(int j = 0;j<4;j++)
            printf("%d ",arr[i][j]);
            printf("\n"); // 数组换行
            }
    for(int i = 0;i<3;i++){ 
        for(int j = 0;j<3;j++)
            printf("%s ",b[i][j]);
            printf("\n");
            }
        return 0;
}

// 应用:冒泡排序,半知半解
# include <stdio.h>
void bubbles(int* arr,int d){
    for(int i = 0;i<d-1;i++){ // 外层循环,索引记得-1
        for(int j = 0;j<d-1-i;j++){ // 相邻两数比较的循环
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }    
        }
    }
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int d = sizeof(arr)/sizeof(arr[0]);
    bubbles(arr,d);
    for(int s = 0;s<d;s++)
        printf("%d ",arr[s]);
            return 0;
}
*/
// 应用:选择排序，半知半解
# include <stdio.h>
void choose(int* arr,int size){
    int max;
    for(int i = 0;i<size-1;i++){
        max = i;
        for(int j = i+1;j<size;j++){ // 记得排序完后要随着i+1
            if(arr[j]>arr[max]){
                int temp = arr[max];
                    arr[max] = arr[j];
                    arr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    choose(arr,size);
    for(int s =0;s<size;s++)
        printf("%d ",arr[s]);
        return 0;
}
