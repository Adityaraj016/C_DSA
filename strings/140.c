//finding anagram in string
#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[]="medical";
    char B[]="decimal";
    char low,high;
    int anagram=0;
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
    for(int i=0;B[i] !='\0';i++){
        H[B[i]]--;
    }
    printf("hash table after increment\n");
    for(int i=low;i<=high;i++){
       printf("%d ",H[i]);
    }
    for(int i=low;i<=high;i++){
        if(H[i]!='0'){
            printf("\nnot anagrams\n");
            anagram++;
            break;
        
        }
        
    }
    if(anagram==0){
        printf("\nyou have entered two strings which are anagrams of each other.\n");
    }
    
    free(H);
    return 0;
}

// //finding anagram in string
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     char A[]="medical";
//     char B[]="decimal";
//     int anagram=0;
    

//     int H[26]={0};
    
//     printf("hash table before increment\n");
//     for(int i=0;i<26;i++){
//        printf("%d ",H[i]);
//     }

//     //find duplicate elments
//     for(int i=0;A[i] !='\0';i++){
//         H[A[i]-97]++;
//     }
//     for(int i=0;B[i] !='\0';i++){
//         H[B[i]-97]--;
//     }
//     printf("hash table after increment\n");
//     for(int i=0;i<26;i++){
//        printf("%d ",H[i]);
//     }
//     for(int i=0;i<26;i++){
//         if(H[i]!=0){
//             printf("\nnot anagrams\n");
//             anagram++;
//             break;
        
//         }
        
//     }
//     if(anagram==0){
//         printf("\nyou have entered two strings which are anagrams of each other.\n");
//     }
//     // else{
//     //     printf("not anagrams\n");
//     // }
//     //free(H);
//     return 0;
// }