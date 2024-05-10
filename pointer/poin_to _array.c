#include<stdio.h>

int main()
{
    int a[5]={2,4,6,8,10};
    int *p;
    p=a;
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
        
    }
    for(int i=0;i<5;i++){
        
        printf("%d\t",p[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        
        printf("%d\t",&p[i]);
    }
    
    return 0;
}