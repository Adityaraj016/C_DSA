//Sum of N natural numbers
#include<stdio.h>
int sum(int n)
{
 if(n==0)
 {
 return 0;
 }
 else
 {
 return sum(n-1)+n;
 }
}

int main()
{
    int n;
    printf("enter the number of natural numbers you want sum of:\n");
    scanf("%d",&n);
    int r=sum(n);
    printf("sum=%d ",r);
    return 0;
}