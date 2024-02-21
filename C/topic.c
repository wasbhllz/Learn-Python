// 02.21
#include <stdio.h>
int main() {
    int a = 0xABCDEF;
        printf("%15d\n",a);
    return 0;
}

#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
        printf("    %d\n   %d %d\n  %d %d %d\n %d %d %d %d\n%d %d %d %d %d", a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);

    return 0;
}

#include <stdio.h>
int main() {
    int a, b,c;
    scanf("%d%d%d", &a, &b,&c);
        printf("year=%4d\nmonth=%2d\ndate=%2d",a,b,c);
    return 0;
}