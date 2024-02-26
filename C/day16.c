// 24.02.24
/*
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
*/
// 类似字幕遮罩的效果
# include <stdio.h>
# include <windows.h>
# include <stdlib.h>
int main(){
    char b[] = "I can free!";
    char a[]="###########";
    int c = 0;
    int d = strlen(a)-1;
    printf("%s\n", a);
    while (c <= d)
    {
        a[c] = b[c];
        a[d] = b[d];
        Sleep(500); // 暂停500毫秒相当于0.5秒，来源<windows.h>
        printf("%s\n", a);
        system("cls"); // 清屏，system库函数，可以调用系统命令，来源<stdlib.h>
        c++;
        d--;
    }
    return 0;
}

