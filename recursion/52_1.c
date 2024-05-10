//static variables
#include <stdio.h>
int fun(int n)
{
 static int x=0;
 if(n>0)
 {
 x++;
 return fun(n-1)+x;
 }
 return 0;
}
int main() {
 int r,s;
 r=fun(5);
 printf("%d\n",r);
 //ye call ke baad x ka value 5 hojayega

 s=fun(5);
 printf("%d\n",s);
 //ye call ke baad x ka value 10 hojayega,so 10*5=50

 return 0;
}