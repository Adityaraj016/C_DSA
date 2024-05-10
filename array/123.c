//find missing elemnts in an usnsoretd array
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={3,7,4,9,12,6,1,11,2,10};
    int low,high;
    low=A[1];
    high=A[9];
    for(int i=0;i<10;i++){
        if(A[i]<low){
            low=A[i];
        }
    }
    for(int i=0;i<10;i++){
        if(A[i]>high){
            high=A[i];
        }
    }
    
    printf("low=%d\nhigh=%d\n",low,high);
    int *H;
    H=(int*)malloc((high+1)*sizeof(int));
    for(int i=0;i<=high;i++){
        H[i]=NULL;
    }
    printf("hash table\n");
    for(int i=0;i<=high;i++){
       printf("%d ",H[i]);
    }

    //find missing elments
    for(int i=0;i<10;i++){
        H[A[i]]++;
    }
    for(int i=low;i<=high;i++){
        if(H[i]==0){
            printf("\nmissig element=%d\n",i);
        }
    }
    return 0;
    
}