#include<stdio.h>
#include<stdlib.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
}

void rightshift(struct Array *arr1){
    for(int i=0;i<arr1->length;i++){
        arr1->A[i]=arr1->A[i+1];
      
    }
}

void rightrotate(struct Array *arr1){
    int temp=arr1->A[0];
    for(int i=0;i<arr1->length;i++){
        arr1->A[i]=arr1->A[i+1];
      
    }
    arr1->A[arr1->length-1]=temp;
}

void leftshift(struct Array *arr1){
    for(int i=arr1->length;i>=0;i--){
        arr1->A[i]=arr1->A[i-1];
      
    }
}
int main()
{
 struct Array arr1={{2,3,9,19,18},10,5};
 rightrotate(&arr1);
 //printf("%d",Max(arr1));
 Display(arr1);
 return 0;
}