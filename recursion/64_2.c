//factorial
#include<stdio.h>

int Ifact(int n)
{
    if(n==0){
        return 1;
    }
    int f=1,i; 
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
 
 return f;
}
int main()
{
    int n;
    printf("enter the number of you want factorial of:\n");
    scanf("%d",&n);
    int r=Ifact(n);
    printf("factorial=%d ",r);
    return 0;
}
