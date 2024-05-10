//insert in sorted array
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
void insert(struct Array *arr1,int x)
{
    int i=arr1->length-1;
if(arr1->length == arr1->size){
    return;
}
    while(arr1->A[i]>x){
        arr1->A[i+1]=arr1->A[i];
        i--;
    }
    arr1->A[i]=x;

}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 insert(&arr1,19);
 Display(arr1);
 return 0;
}