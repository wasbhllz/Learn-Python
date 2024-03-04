// 24.03.04
/*
// 用递归求第n个斐波那契数列
# include <stdio.h>
int fibonacci(int a){
    if(a<=2)
        return 1;
    else
        return fibonacci(a-1)+fibonacci(a-2);
}
int main(){
    int a = 0;
    scanf("%d",&a);
    printf("第%d个斐波那契数是%d",a,fibonacci(a));
    return 0;
}

// 用迭代求斐波那契数列
# include <stdio.h>
int fibonacci_2(int n){
    long long a = 1;
    long long b = 1;
    long long z = 1; // 预测值
    int w = 0; // 计数
    if(n == 1 ||n == 2)
        return 1;
    else
        for(w = 3;w<=n;w++){
            a = b;
            b = z;
            z = a + b;
            }
        return z;
}
int main(){
    int a = 0;
    scanf("%d",&a);
    printf("第%d个斐波那契数是%d\n",a,fibonacci_2(a));
    return 0;
}

// 青蛙跳台阶问题
# include <stdio.h>
int main(){
    int steps =0;
    scanf("%d",&steps);
    printf("青蛙跳到第%d层台阶有%d种方法",steps,frog(steps));
    return 0;
}
*/
// 半知半解
// 选择排序:将数字从大到小输出
# include <stdio.h>
int sort(int* arr,int num){
    int i,j,max,temp;
    for(i = 0; i<num-1;i++){ // 遍历整个列表
        max = i; // 当前位置为最大的数
        for(j=i+1;j<num;j++){
            if(arr[j]>arr[max])
            max = j; // 更换新的最大的数
            if(max!=i){
            temp = arr[max]; // 将最大字符的位置存储到临时变量
            arr[max] = arr[i]; // 更换原来和最大数之间的位置
            arr[i] =temp; // 将之前下标为i的位置交换到原来最大字符的位置
            }
        }
    }
}
int main(){
    int arr[] = {1,2,4,6,8,3,5,7,9};
    int num = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<num;i++)
        printf("%d ",arr[i]);
        printf("\n");
        sort(arr,num);
        printf("排序后：\n");
    for(int i = 0;i<num;i++)
        printf("%d ",arr[i]);
        return 0;
}

