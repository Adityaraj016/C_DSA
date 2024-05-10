#include<stdio.h>
#include<stdlib.h>
void *fun(int n) {
 int *p;
 p=(int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
 }
 return (p);
}
int main()
{
    int *a;
    a=fun(5);
    for(int i=0;i<5;i++){
    printf("%d\t",a[i]);
 }

 
}