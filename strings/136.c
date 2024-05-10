#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[] ="adi";
    
    int i,j,a;
    // while(A[i] != '\0'){
    //     i++;
    // }
    for(i=0;A[i] != '\0';i++){

    }
    i=i-1;
    printf("%d ",i);

    char B[i];
    for(j=0,a=i;a>=0;j++,a--){
        B[j]=A[a];
    }
    B[j]='\0';
    
    printf("\n%s",B);
    return 0;
}