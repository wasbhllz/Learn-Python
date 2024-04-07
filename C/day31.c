// 24.04.07
#include <stdio.h>
/*
int main(){
    int arr[10]={0};
    int*ps=arr; //指针初始化为数组首元素地址
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++)
    printf("%d",*(ps+i)); //指针地址增加后解引用打印，与arr[i]所指向的值是一样的
    return 0;
}
//数组能够从左往右访问越界后一位，但不能从右往左越界前一位
*/
//指针数组
int main(){
    int arr[]={1,2,3};
    int arr1[]={2,3,4};
    int arr2[]={3,4,5};
    int*pa[3]={arr,arr1,arr2}; //用指针数组来模拟二维数组
    for(int i=0;i<3;i++)
    {
        int j;
        for(j=0;j<3;j++)
        {
            printf("%d ",pa[i][j]); //pa[1]相当于访问arr数组,pa[1][j],相当于访问arr[j]
        }
        printf("\n");
    }
    return 0;
}