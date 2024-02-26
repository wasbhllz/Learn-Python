// 02.23
/*
// do while循环
// 至少先执行一次do语句,再进行条件判断后是否循环,总结：先干为敬
# include <stdio.h>
int main(){
    int g =0;
    do{
        printf("无限进步！🤩");
        g++;
        }
    while (g < 2);
    return 0;
}



// n的阶乘
# include <stdio.h>
int main(){
    int n = 0;
    int s = 1;
    int a = 1;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    for (s = 1; s <= n; s++)
        a = a * s;
        printf("%d! = %d",n,a);
    return 0;
}

// 1!+2!+3!+...10!
# include <stdio.h>
int main(){
    int n = 1;
    int s = 1;
    int a = 1;
    int num = 0;
    for (n = 1; n <= 10;n++){ //注意括号范围
            a = a * n;
            num = a + num;
            }
    printf("%d",num);
    return 0;
}
*/
// 有序数组的二分查找
# include <stdio.h>
int main(){
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 8;
    int least = 0; // 查找的最小范围
    int u = sizeof(num) / sizeof(num[0]); //数组的数量
    int utmost = u - 1; // 索引查找的最大范围
    while (least <= utmost){
        int middle = (least + utmost) / 2; // 二分查找
    if (num[middle]<n)
        least = middle + 1; // 改变最小范围
    else if(num[middle]>n)
        utmost = middle - 1; // 改变最大范围
    else{
        printf("找到了！🤩 是索引%d号",utmost);
        break;
        }
    }
    if (least > utmost)
        printf("本数组中暂无该数据😭");
        return 0;
}