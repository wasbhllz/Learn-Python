// 02.22
/*
// 输入的数字,字符,空格都能打印出来
# include <stdio.h>
int main(){
    char u[30];
    scanf("%[^\n]",u); // 使用[^\n]让scanf读取空格,直到遇到\n为止
    printf("%s",u);
    return 0;
}

// 只能打印输入的字符
# include <stdio.h>
int main(){
    char n[100];
    scanf("%s",n); // 数组n是地址所以不用额外打&
    while (scanf("%s",n) != EOF){ // 用获得的输入来与文件结束标志作比较
        printf("%s",n);
        }
    return 0;
}

// for 循环
# include <stdio.h>
int main(){
    int n;
    for (n = 0; n < 10; n++) // 和while循环不同在于控制不在循环语句中
    {
        printf("%d\n",n);
    }
    return 0;
}
*/
// 嵌套for循环
// 先从外层for循环进去判断，再进入内层for循环判断
# include <stdio.h>
int main(){
    for (int q = 0; q < 5; q++){
        printf("%s", "我爱小白散！🥰");
        if (q != 1){
        for (int w = 0; w < 1;w++)
            printf("%s", "饮月君也好帅！😍");
        }
    }
            return 0;
    }
