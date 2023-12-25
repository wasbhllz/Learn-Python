// 12.23
#include <stdio.h>
// \\和\"相当于转义转义字符
// 常用转义字符
int main(){
    printf("哈哈\r"); // 光标移到本行开头
    printf("哈哈\n"); // 换行
    printf("\051"); // 八进制的转义序列
    printf("\x29"); // 十六进制的转义序列
    return 0;
}
// 数组:按顺序排列的同类型序列
int main(){
      int arr[] = {1,2,3,4,5};
      int a = 0;
      while(a < 5){
            printf("%d", arr[a]);
            a++;
      }
      return 0;
} 

// 题目
int main(){
      printf("     00\n     00\n000000000000\n000000000000\n    0  0\n    0  0");
      return 0;
}