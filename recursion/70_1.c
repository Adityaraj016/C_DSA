#include<stdio.h>
double e(float x, int n)
{
    double s=1;
    if(n==0)
    return s;
    else{
    for(int i=n;i>0;i--){
    s=1+x/i*s;  //int x loge to x*s/i lkna hoga
                //due to typecasting
    }
    return s;
    }
}


int main()
{
 printf("%lf \n",e(4,10));
 return 0;
}