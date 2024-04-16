// 24.03.04
# include <stdio.h>
/*
// 用递归求第n个斐波那契数列
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

// 三个数组排序
void swap(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a, &b, &c);
    if(a<b)
        swap(&a, &b);
        if(a<c)
            swap(&a, &c);
            if(b<c)
                swap(&b, &c);
            printf("%d %d %d", a, b, c);
            return 0;
}

// 打印1~100之内所以3倍数的数字
int main(){
    int d = 0;
    for (d = 3; d < 100;d+=3)
            printf("%d ", d);
            return 0;
}

// 给定两个数，求最大公约数
int common(int a,int b){
    int c = 0;
    for (c = a; c >= 2;--c)
    if(b%c==0 && a%c ==0)
        return c;
}
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("最大公约数是%d",common(a, b));
    return 0;
}

// 24.03.05
// 辗转相除法
// 给定两个数，求最大公约数
int main(){
    int a = 0;
    int b = 0;
    int c;
    scanf("%d %d",&a, &b);
    while(b!= 0){
        c = a % b; // 交换
        a = b;
        b = c;
        }
        printf("%d", a);
    return 0;
}

// 求1/1-1/2+1/3···1/99-1/100的值
int main(){
    int a = 0; // 分数要写浮点数类型了
    float b = 0;
    int c = 1;
    for(a = 1;a<=100;a++){
        b = b+c*(1.0/a); // 记得累加之前的值
        c = -c;
        }
    printf("%lf",b);
    return 0;
}

// 用循环打印倒三角形状的九九乘法表
int main(){
    int a = 1;
    int b = 1;
    for(b = 1;b<10;b++){
        for(a = 9;a>=b;--a){
            printf("%d x %d = %2d  ",a,b,a * b); // "%2d"是两位右对齐
            if(a == b) // 避免重复输出
        printf("\n");
        }
        
    }
    return 0;
}

// 青蛙跳台阶问题
int frog(int n){
    int s = 0;
    if(0 <n<= 2)
        return n;
    for(int a = 2;n-a<=n;a+=2){
        for(int d = 0;a!=n;d++)
            s++;
    }
    return s;
}
int main(){
    int steps = 0;
    scanf("%d",&steps);
    printf("青蛙跳到第%d层台阶有%d种方法\n",steps,frog(steps));
    return 0;
}

// 24.03.06
// 辗转相除法
// 二维数组的创建和打印
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

// 应用:选择排序，半知半解
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
*/
// 24.03.07
// 应用:选择排序，比较熟练
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
