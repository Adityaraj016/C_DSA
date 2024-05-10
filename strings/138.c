//finding duplicates in string
#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[] ="Findinig";
    int i,j;
    
    for(i=0;A[i]!= '\0';i++){
        int dup=1;
        for ( j=i+1;A[j] !='\0';j++){
            if(A[i] == A[j] && A[j] != 0){
                dup++;
                A[j]='0';
            }

        }
    
   
        if(dup>1 && (A[i])!='0'){
            printf("char %c appeared %d times\n",A[i],dup);
    }
    }
    return 0;
}