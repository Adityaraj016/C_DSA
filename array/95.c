//array by heap memory
//normally bhi kar skate hai bina malloc ke
//jo ki stack memory me stpre hoga
#include<stdio.h>
#include<stdlib.h>

struct array{
    int *A;
    int size;
    int length;
};

void display(struct array arr){
    printf("enter the elements of array\n");
    for(int i=0;i<arr.size;i++){
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    struct array arr;
    int i,n;
    printf("enter the size of the array\n");
    scanf("%d",&arr.size);
    //arr.length=0;

    arr.A=(int*)malloc(arr.size*sizeof(int));

    printf("enter the number of numbers\n");
    scanf("%d",&n);

    printf("enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;

    display(arr);
    free(arr.A);
    return 0;
}