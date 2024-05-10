#include<stdio.h>
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are\n");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}