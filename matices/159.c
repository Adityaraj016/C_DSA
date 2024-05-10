//menu driven program  for matices
// lower triangular
#include<stdio.h>
#include<stdlib.h>

void set(int A[],int i,int j,int x){
    if(i>=j){
    A[i*(i-1)/2+(j-1)]=x;
    }

}

int get(int A[],int i,int j){
    if(i>=j){
    return A[i*(i-1)/2+(j-1)];
    }
    else{
    return 0;
    }
}

void display(int A[],int n){
    int i,j;
    printf("the matrix is\n");
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
    if(i>=j){
    printf("%d ",A[i*(i-1)/2+(j-1)]); 
    }  //agar i and j=0 lete to m.A[i*(i+1)/2+(j-1)-1] hota
    else{
    printf("0 ");
    }
    }
    printf("\n");
    }

}
int main()
{
    int *A;
    int i,j,ch,n,x;
    printf("enter the dimesion of the matrix\n");
    scanf("%d",&n);
    A=(int*)malloc(n*(n+1)/2*sizeof(int));

    do{
        printf("\n Enter your choice:\n");
        printf("1.Create an array for matrix elements\n2.Set\n3.Get\n4.Display\n5.Exit\n");

        printf("enter your choice:\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("enter the  lower triangular matrix in rows\n");
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                scanf("%d",&x);
                set(A,i,j,x);
                }
            }
            break;

            case 2:
            printf("enter row number and column number and element you want to enter\n");
            scanf("%d%d%d",&i,&j,&x);
            set(A,i,j,x);
            break;

            case 3:
            printf("enter the row no and column number\n");
            scanf("%d%d",&i,&j);
            int m=get(A,i,j);
            printf("%d\n",m);
            break;

            case 4:
            display(A,n);
            break;

        }
    }while(ch<5);

    return 0;
}