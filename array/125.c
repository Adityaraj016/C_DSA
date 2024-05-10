//finding duplicates for sorted and unsorted both
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={3,15,5,5,9,12,15,15,15,20};
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
        H[i]=0;
    }
    printf("hash table before increment\n");
    for(int i=0;i<=high;i++){
       printf("%d ",H[i]);
    }

    //find duplicate elments
    for(int i=0;i<10;i++){
        H[A[i]]++;
    }
    printf("hash table after increment\n");
    for(int i=0;i<=high;i++){
       printf("%d ",H[i]);
    }
    printf("\nduplicate numbers and its count\n");
    for(int i=low;i<=high;i++){
        if(H[i]>1){
            printf("\n%d  %d\n",i,H[i]);
        }
    }

    return 0;
}