#include<stdio.h>
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
int main(){
    int n;
    printf("enter the element you want from fibonacci series\n");
    scanf("%d",&n);
    int r=fib(n);
    printf("the %dth elment is %d",n,r);

    return 0;
}