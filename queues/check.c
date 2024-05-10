#include<stdio.h>
int main(){
    char *exp="ABCDEFGHIJKLMNOPQRSTUVWZYZ";
    printf("%c",exp[3]);
    char a[5];
    a[0]='exp[0]';
    printf("%c"a[0]);
    return 0;
}