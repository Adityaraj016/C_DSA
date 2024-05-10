#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*Head;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 Head=(struct Node *)malloc(sizeof(struct Node));
 Head->data=A[0];
 Head->next=NULL;
 last=Head;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
 last->next=Head;
}



void Display(struct Node *h)
{
 do
 {
 printf("%d ",h->data);
 h=h->next;
 }while(h!=Head);
 printf("\n");
}

int main()
{
 int A[]={2,3,4,5,6};
 create(A,5);



 Display(Head);
 return 0;
}

