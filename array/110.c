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

void reverse(struct Array *arr1){
    for(int i=0,j=arr1->length-1;i<j;i++,j--){
        int temp=arr1->A[i];
        arr1->A[i]=arr1->A[j];
        arr1->A[j]=temp;
    }
}



void Reverse(struct Array *arr)
{
 int B[arr->length];
 int i,j;

 //B=(int *)malloc(arr->length*sizeof(int));
 for(i=arr->length-1,j=0;i>=0;i--,j++)
 B[j]=arr->A[i];
 for(i=0;i<arr->length;i++)
 arr->A[i]=B[i];

}
int main()
{
 struct Array arr1={{2,3,9,19,18},10,5};
 reverse(&arr1);
 //printf("%d",Max(arr1));
 Display(arr1);
 return 0;
}