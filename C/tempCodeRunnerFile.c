# include <stdio.h>
int my_strlen(char* w){
    int a = 0;
    while(w != "\0"){
        w++;
        a++;
}
return a;
}
int main(){
    char arr[]= "abc";
    int e = my_strlen(arr);
    printf("%d",e);
    return 0;
}