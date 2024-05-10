//power function
#include<stdio.h>
int power1(int m,int n)
{
 if(n==0){
 return 1;
 }
 if(n%2==0){
 return power1(m*m,n/
2);
 }
 else{
 return m * power1(m*m,(n-1)/2);
 }
}


int main()
{
    int x,y;
    printf("enter the number and its power\n");
    scanf("%d%d",&x,&y);
    int r=power1(x,y);
    printf("final number=%d ",r);
    return 0;
}