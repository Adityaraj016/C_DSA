//factorial
#include<stdio.h>
int fact(int n)
{
 if(n==0)
 return 1;
 return fact(n-1)*n;
}
// int Ifact(int n)
// {
//  int f=1,i; 
//  for(i=1;i<=n;i++) 
//  f=f*i;
 
//  return f;
// }
int main()
{
    int n;
    printf("enter the number of you want factorial of:\n");
    scanf("%d",&n);
    int r=fact(n);
    printf("factorial=%d ",r);
    return 0;
}