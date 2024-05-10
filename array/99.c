//delete element
#include<stdio.h>
#include<stdlib.h>

struct array{
    int A[20];
    int size;
    int length;
};

int delete(struct array *arr,int index){
    int x;
    if(index>= 0 && index <=arr->length){
        x=arr->A[index];
        for(int i=index;i< arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    
    else{
        return 0;
    }
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
    int index,x;
    printf("enter size of an array\n");
    scanf("%d",&arr.size);
    printf("\n enter number of element in array \n ");
    scanf("%d", &arr.length );
    printf("enter array element\n");
    for (int i = 0 ; i <arr.length ; ++i) {
        scanf("%d",&arr.A[i]);
    }
    
    printf("enter the position you want to delete element\n");
    scanf("%d",&index);

    int d=delete(&arr,index);
    display(arr);
    printf("\nthe deleted element from position %d is %d\n",index,d);
    return 0;
}