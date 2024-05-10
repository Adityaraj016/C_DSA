//finding duplicates for string using hash table
#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[]="FindiFng";
    char low,high;
    low=A[0];
    high=A[0];
    for(int i=0;A[i]!='\0';i++){
        if(A[i]<low){
            low=A[i];
        }
    }
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>high){
            high=A[i];
        }
    }
    
    printf("low=%c\nhigh=%c\n",low,high);
    int size=high-low;
    char *H;
    H=(char*)malloc((size+1)*sizeof(char));
    for(int i=low;i<=high;i++){
        H[i]='0';
    }
    printf("hash table before increment\n");
    for(int i=low;i<=high;i++){
       printf("%d ",H[i]);
    }

    //find duplicate elments
    for(int i=0;A[i] !='\0';i++){
        H[A[i]]++;
    }
    printf("hash table after increment\n");
    for(int i=low;i<=high;i++){
       printf("%d ",H[i]);
    }
    printf("\nduplicate char and its count\n");
    for(int i=low;i<=high;i++){
        if(H[i]>49){
            printf("\nchar=%c  %d times\n",i,H[i]-48);
        }
    }

    return 0;
}