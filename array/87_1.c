//2 d array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    int *B[3];
    int **C;
    int i,j;


    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
     
    printf("enter elements of B\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++){
    scanf("%d",&B[i][j]);
    }
    }

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    printf("enter elements of C\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++){
    scanf("%d",&C[i][j]);
    }
    }

    printf("the elements of A \n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++){
    printf("%d ",A[i][j]);
    }
    printf("\n");
    }

    printf("the elements of B\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++){
    printf("%d ",B[i][j]);
    }
    printf("\n");
    }

    printf("the elements of C\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++){
    printf("%d ",C[i][j]);
    }
    printf("\n");
    }
    return 0;
}