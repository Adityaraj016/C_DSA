#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *p;
    char *p2;
    float *p3;
    
    p=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        
        printf("enter %d element\n",i);
        scanf("%d",&p[i]);
    }
    for(int i=0;i<5;i++){
        
        printf("%d\t",p[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        
        printf("%d\t",&p[i]);
    }

    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(p2));
    printf("%d\n",sizeof(p3));
    free(p);
    
    return 0;
}