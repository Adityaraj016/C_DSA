#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[] ="aanchal";
    int i=0,j,a;
    while(A[i] != '\0'){
        i++;
    }
    
    i=i-1;
    printf("%d ",i);

    
    for(a=0,j=i;j>a;a++,j--){
        char temp;
        temp=A[a];
        A[a]=A[j];
        A[j]=temp;
    }
    
    
    printf("\n%s",A);
    return 0;
}