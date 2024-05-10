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
void sorted(struct Array *arr1){
     for (int i = 0; i < arr1->length; i++) {     
        for (int j = i+1; j < arr1->length; j++) {     
           if(arr1->A[i] > arr1->A[j]) {    
               int temp = arr1->A[i];    
               arr1->A[i] = arr1->A[j];  
               arr1->A[j]  = temp;    
           }     
        }     
    }  
}

int main()
{
 struct Array arr1={{2,3,-9,19,-18,8,7},10,7};
 sorted(&arr1);
 //printf("%d",Max(arr1));
 Display(arr1);
 return 0;
}