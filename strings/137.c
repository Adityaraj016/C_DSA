
//check pallindrome#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[] ="mam";
    
    int i,j,a;
    int pal=0;
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
    for(a=0,j=0;A[a] != '\0' /*|| A[j] != '\0'*/;a++,j++){
        if(B[a] != A[j]){
             pal++;
            break;
        }
    }
    if(pal == 1){
        printf("\nnot pallindrome");
    }
    else{
        printf("\npallindrome");
    }
    
    

    return 0;
}