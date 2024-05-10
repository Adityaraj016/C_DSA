//improve linear search;

#include<stdio.h>
#include<stdlib.h>

struct array{
    int A[20];
    int size;
    int length;
};

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int linearsearch(struct array *arr,int ele){
    for(int i=0;i<arr->length;i++){
        if(ele == arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;

}

void display(struct array arr){
    printf("the elements of array\n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    struct array arr;
    int ele,x;
    printf("enter size of an array\n");
    scanf("%d",&arr.size);
    printf("\n enter number of element in array \n ");
    scanf("%d", &arr.length );
    printf("enter array element\n");
    for (int i = 0 ; i <arr.length ; ++i) {
        scanf("%d",&arr.A[i]);
    }
    
    printf("enter the element you want to search\n");
    scanf("%d",&ele);

    int r=linearsearch(&arr,ele);
    display(arr);
    printf("\nthe element %d is found on position %d\n",ele,r);
    return 0;
}