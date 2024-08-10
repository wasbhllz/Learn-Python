// 24.05.18
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*
// 反转字符串
// 反转整个字符串
void hh(char *left,char*right){
    assert(left);
    assert(right); // 断言预防野指针
    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
// 反转单个字符串
void xx(char *left){
    while (*left)
    {
        char *right = left;
        while (*right != ' '&& *right != '\0')
        {
            right++;
        }
        hh(left,right-1);
        if(*right!='\0') // 不要越界
            right++;
        left = right;
    }
}
int main(){
    char arr[100]={0};
    gets(arr); // gets函数可以读取除'\n'之外连续的字符串
    int len = strlen(arr);
    hh(arr,arr+len-1); // 首元素地址+数组长度-1=最后一个字符的地址
    xx(arr);
    printf("%s", arr);
    return 0;
}
*/
