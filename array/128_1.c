//finding a pair with sum k with using hashtable
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    //int A[10]={1,2,4,5,6,8,9,10,11,12};
    int k=10;
    int low,high;
    low=A[1];
    high=A[9];
    for(int i=0;i<10;i++){
        if(A[i]<low){
            low=A[i];
        }
        else if(A[i]>high){
            high=A[i];
        }
    }
    // for(int i=0;i<10;i++){
    //     if(A[i]>high){
    //         high=A[i];
    //     }
    // }
    
    printf("low=%d\nhigh=%d\n",low,high);
    int *H;
    H=(int*)malloc((high+1)*sizeof(int));
    for(int i=0;i<=high;i++){
        H[i]=0;
    }
    printf("\nhash table before increment\n");
    for(int i=0;i<=high;i++){
       printf("%d ",H[i]);
    }

    printf("\nthe pairs with sum equal to k\n");
    for(int i=0;i<10;i++){
        if(H[k-A[i]] !=0 && k-A[i]>=0 ){     // == 1 hi lena hoga kyuki not equal to 0 lenge to 10-11 negative hoga wo bhi aajayega
            printf("\n%d + %d =%d\n",A[i],k-A[i],k);
        }
        H[A[i]]++;
    }
    printf("hash table after increment\n");
    for(int i=0;i<=high;i++){
       printf("%d ",H[i]);
    }
    return 0;
}