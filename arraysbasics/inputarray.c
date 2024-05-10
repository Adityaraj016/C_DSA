#include<stdio.h>
int main()
{
    int n;
    printf("input size of the array\n");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("input %d element\n",i);
        scanf("%d",&A[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d element is %d\n",i,A[i]);
    }
    return 0;
}