//power function
#include<stdio.h>
int power2(int m,int n){
    if(n==0){
        return 1;
    }
    int i=1,pow=1;
    for(i=1;i<=n;i++){
        pow=pow*m;
    }
    return pow;
}
int main()
{
    int x,y;
    printf("enter the number and its power\n");
    scanf("%d%d",&x,&y);
    int r=power2(x,y);
    printf("final number=%d ",r);
    return 0;
}