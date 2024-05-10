#include<stdio.h>
int NCR(int,int);

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
    if(r==0 || r==n){
        return 1;
    }
    else{
    return NCR(n-1,r-1) + NCR(n-1,r) ;  //by pascals rule
    //diagram in copy
    }
}

