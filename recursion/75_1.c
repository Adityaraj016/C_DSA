#include<stdio.h>
int NCR(int,int);
int fact(int);
int main(){
    int n,r,result;
    printf("enter the value of n and r respectively\n");
    scanf("%d%d",&n,&r);
    result=NCR(n,r);
    printf("NCR=%d",result);
    return 0;
}
//function to find factorial using recursion
int NCR(int n,int r){
    int a,b,c;
    if(r==0 || r==n){
        return 1;
    }
    else{
        a=fact(n);
        b=fact(r);
        c=fact(n-r);

        return a/(b*c);
    }
}

int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}