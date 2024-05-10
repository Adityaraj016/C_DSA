// #include<stdio.h>
// int main()
// {
//     int A[5];
//     A[0]=12;
//     A[1]=15;
//     A[3]=25;

//     printf("%d\n",sizeof(A));
//     printf("%d",A[1]);
// }

#include<stdio.h>
// void display(int A[],int n){
//     for (int i=0; i<n ;i++){
//         printf("%d\n",A[i]);
//     }
// }
void display(int *A,int n){
    for (int i=0; i<n ;i++){
        printf("%d\n",(A[i]));
    }
}
int main()
{
    int A[10]={2,4,6,8,10};
    
    display(A,5);
    // printf("%d\n",sizeof(A));
    // // printf("%d\n",A[1]);
    // // printf("%d\n",A[5]);

    // for(int i=0;i<10;i++){
    //     printf("%d\n",A[i]);
    // }
    return 0;
}