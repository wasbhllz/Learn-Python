// 24.05.07
#include <stdio.h>
/**/
//
int main(){
    char arr[100]={0};
    while(scanf("%s",arr)!=EOF){
        arr++;
    }
    int len = arr-1;
    return 0;
}