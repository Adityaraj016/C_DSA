// #include<stdio.h>

// int main(){
//     int a=0,b=1;
//     int n;
//     printf("enter the element you want from fibonacci series\n");
//     scanf("%d",&n);
//     int arr[n];
//     if(n<=1)
//     {
//         printf("the %dth elment is %d",n,n);
//     }
//     else{
//     for(int i=2;i<=n;i++){
//         arr[i]=a+b;
//         a=b;
//         b=arr[i];
        
//     }
//     printf("the %dth elment is %d",n,arr[n]);
// }
//     return 0;
// }

#include<stdio.h>
int fib(int n){
    int a=0,b=1;
    int arr[n];
    if(n<=1)
    {
        return n;
    }
    else{
    for(int i=2;i<=n;i++){
        arr[i]=a+b;
        a=b;
        b=arr[i];
        
    }
    return arr[n];
    }

}
int main(){
    int a=0,b=1;
    int n;
    printf("enter the element you want from fibonacci series\n");
    scanf("%d",&n);
    int r=fib(n);
    printf("the %dth elment is %d",n,r);

    return 0;
}