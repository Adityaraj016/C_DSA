//Tower of Hanoi
#include <stdio.h>
void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
    TOH(n-1,A,C,B);
    //printf("from tower %d to %d\n",A,C);
    printf("(%d,%d)\n",A,C); //follow these steps to move disc
    TOH(n-1,B,A,C);
    }
}
int main()
{
    int n;
    printf("enter the number of disc in tower A\n");
    scanf("%d",&n);
    TOH(n,1,2,3);
    return 0;
}


