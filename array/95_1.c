//array by heap memory
//normally bhi kar skate hai bina malloc ke
//jo ki stack memory me stpre hoga
#include<stdio.h>
#include<stdlib.h>

struct array{
    int A;
    int size;
    int length;
};

void display(struct array arr){
    printf("enter the elements of array\n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    struct array arr={{2,4,6,8,10},20,5};

    display(arr);
    return 0;
}