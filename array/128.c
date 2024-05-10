//finfing a pair with sum k
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={1,3,4,4,6,8,9,10,11,12};
    int k=10;
    for(int i=0;i<(10-1);i++){
        for (int j=(i+1);j<10;j++){
            if(A[i]+A[j]==k){
                printf("%d + %d =%d\n",A[i],A[j],k);
            }
    }
    }

    return 0;
}