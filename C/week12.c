// 24.04.16
#include <stdio.h>
/**/
int main(){
    int a = 9;
    int b = 9;
    for (int i = 0; i < a;i++){
        for (int j = 0; j < b;j++){
            if(i<a-1)
                printf("___");
            if(j<b-1)
                printf("|");
        }
        printf("\n");
        if(i=a-1)
            printf("   ");
    }
            return 0;
}


