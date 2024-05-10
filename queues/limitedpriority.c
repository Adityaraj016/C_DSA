//limited set of priorities
#include<stdio.h>

struct queues{
    int size;
    int *Q;
};

// void create(struct queues *q,int size){
//     q->Q=(int *)malloc(size*sizeof(int));
// }

// void insert(char *exp){
//     while(exp[i] !=)
// }
int main()
{
    struct queues q1,q2,q3;
    printf("enter the size of q1,q2,q3 respectively\n");
    scanf("%d%d%d",&(q1.size), &(q2.size), &(q3.size));
    // create(&q1,q1.size);
    // create(&q2,q2.size);
    // create(&q3,q3.size);
    char *exp="ABCDEFGHIJKLMNOPQRSTUVWZYZ";
    printf("%c",exp[3]);
    //insert(exp);


}