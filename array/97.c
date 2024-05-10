//inserting
#include<stdio.h>
#include<stdlib.h>

struct array{
    int A[20];
    int size;
    int length;
};

void Append(struct array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }   //append se last me element add hota hai


void insert(struct array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
    for(int i=arr->length;i>index;i--){
        arr->A[i]=arr->A[i-1];
    }
    
    arr->A[index]=x;
    arr->length++;
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
    
    printf("enter the position you want to enter element\n");
    scanf("%d",&index);
    printf("enter the element\n");
    scanf("%d",&x);

    Append(&arr,10);
    insert(&arr,index,x);
    display(arr);
    printf("\n%d\n",arr.length);
    return 0;
}