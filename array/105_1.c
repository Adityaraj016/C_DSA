//recursive binary search
#include<stdio.h>
void Display(int A[],int n)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}
int RBinSearch(int a[],int l,int h,int key)
{
 
    int mid=0;
    if(l<=h)
    {
    mid=(l+h)/2;
    if(key==a[mid]){
    return mid;
    }
    else if(key<a[mid]){
    return RBinSearch(a,l,mid-1,key);
    }
    else{
    return RBinSearch(a,mid+1,h,key);
    }}
    else{
    return -1;
    }
}
int main()
{
    int A[]={2,3,9,16,18,21,28,32,35,38};
    printf("the element is present at index %d",RBinSearch(A,2,38,38));
    Display(A,10);
    return 0;
}