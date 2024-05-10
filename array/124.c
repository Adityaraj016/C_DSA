//finding duplicates
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={3,5,5,9,12,15,15,15,20};
    int j=0;
    int lastduplicate=0;
    for(int i=0;i<10;i++){
        if (A[i]==A[i+1]){
            j++;
        }
    }
    printf("no of duplicates=%d\n",j);
    for(int i=0;i<10;i++){
        if (A[i]==A[i+1] && A[i] != lastduplicate){
            printf("duplicate element=%d\n",A[i]);
            lastduplicate=A[i];

        }
    }
    return 0;
}