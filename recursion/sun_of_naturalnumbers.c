#include <stdio.h>
int fun(int n)
{
 
 if(n>0)
 {
 
 return fun(n-1)+n;  //n*n karenge to sum of squares of first n natural numners mil jayega
 }
 return 0;
}
int main() {
 int r,s;
 r=fun(5);
 printf("%d\n",r);
 return 0;
}