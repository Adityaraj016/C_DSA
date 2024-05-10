#include<stdio.h>
#include<stdlib.h>

int valid(char *A){
    for(int i=0;A[i]!='\0';i++){
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57)){
            return 0;
        }
    }
    return 1;
}
int main(){
    char *A ="ani3321";
    int value=valid(A);
    if(value == 0){
        printf("invalid string\n");
    }
    else if(value == 1){
        printf("valid string\n");
    }
    return 0;
}

