#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}

void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}

struct Node * LSearch(struct Node *p,int key)
{
 struct Node *q;

 while(p!=NULL)
 {
 if(key==p->data)
 {
 q->next=p->next;   //quiki uspe peeche wala note to uspehi point karega to usko chamge karke current wala
 //jispe point kar raha hai uspe lana hai  //video 184
 p->next=first;
 first=p;
 return p;
 }
 q=p;
 p=p->next;
 }
 return NULL;

}
struct Node * RSearch(struct Node *p,int key)
{
 if(p==NULL)
 return NULL;
 if(key==p->data)
 return p;
 return RSearch(p->next,key);

}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 create(A,8);
 temp=LSearch(first,20);
//  printf("%u ",temp->next);
//   printf("%d ",temp->next);
//    printf("%d \n",temp->data);

   if(temp != NULL){
    printf("key is found %d\n",temp->data);
   }
   else{
    printf("\nKey not Found\n");
   }

   Display(first);
 

 return 0;
}