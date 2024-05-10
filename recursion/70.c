#include<stdio.h>
double e(int x, int n)
{
 static double s=1;
 if(n==0)
 return s;
 else
 s=1+x*s/n;
 return e(x,n-1);

}
int main()
{
 printf("%lf \n",e(4,10));
 return 0;
}

#include<stdio.h>
double e(int x, int n)
{
    double s=1;
    if(n==0)
    return s;
    else{
    for(int i=n;i>0;i--){
    s=1+x*s/i;
    }
    return s;
    }
}


int main()
{
 printf("%lf \n",e(4,10));
 return 0;
}