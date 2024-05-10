//polynomial addition
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n,x;

 printf("Enter the maximum degree of x of polynomial 1:\n");
 scanf("%d",&n);
 printf("Enter the maximum degree of x of polynomial 1:\n");
 scanf("%d",&x);
 int max=n;
 if(max<x){
    max=x;
 }
 int a[n],b[x],c[max];
 printf("max=%d\n",max);
//  a=(int*)malloc(n+1*sizeof(int));
//  b=(int*)malloc(x+1*sizeof(int));
 
//  c=(int*)malloc(max+1*sizeof(int));
 
 printf("Enter the polunomial 1 from lowest degree to the highest degree:\n");
 for(i=0;i<=n;i++)
 {
  scanf("%d",&a[i]);
 } 
 printf("Enter the polunomial 2 from lowest degree to the highest degree:\n");
 for(i=0;i<=x;i++)
 {
  scanf("%d",&b[i]);
 } 
 printf("The resultant polynomial is:\n");
 if(n>=x){
 for(i=0;i<=n;i++){
   c[i]=a[i];
    }
    for(i=0;i<=x;i++){
    c[i]+=b[i];
    }
 }
 else{
    for(i=0;i<=x;i++){
    c[i]=b[i];
    }

    for(i=0;i<=n;i++){
        c[i]+=a[i];
    }
 }
for(i=0;i<=max;i++){
    printf("%dx^%d ",c[i],i);
    if(i>=0 && i<max){
        printf("+");
    }
}
 return 0;
}