#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
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
int count(struct Node *p){
    int count=0;
    while(p != NULL){
        count++;
        p=p->next;
    }
    return count;
}
void RemoveDuplicate(struct Node *p)
{
 struct Node *q=NULL;
 q=p;
 p=p->next;
 while(p!=NULL)
 {
 if(p->data!=q->data)
 {
 q=p;
 p=p->next;
 }
 else
 {
 q->next=p->next;
 free(p);
 p=q->next;
 }
 }

}

int main()
{

 int A[]={10,25,25,35,35,40,50};
 create(A,7);
 int x=count(first);

 //printf("%d\n",Delete(first,3));
 //sorted(first,x);
 RemoveDuplicate(first);
 Display(first);

 return 0;
}