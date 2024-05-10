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
void rearrange(struct Array *arr1)
{
    int i=0;
    int j=arr1->length-1;
    while(i<j){
        while(arr1->A[i]<0){
            i++;
        }
        while(arr1->A[j]>=0){
            j--;
        }
        if(i<j){
            int temp=arr1->A[i];
            arr1->A[i]=arr1->A[j];
            arr1->A[j]=temp;
        }
    }
}
int main()
{
 struct Array arr1={{2,-3,9,16,-18,21,28,-32,35},10,9};
 rearrange(&arr1);
 Display(arr1);
 return 0;
}