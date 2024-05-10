//deQueue using Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;

}*front=NULL,*rear=NULL;

void frontenqueue(int x){
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    if(front==NULL){
        t->next=NULL;
    front=rear=t;
    }
    else{
        t->next=front;
        front=t;
    }

}
void lastenqueue(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 if(t==NULL)
 printf("Queue is FUll\n");
 else
 {
 t->data=x;
 t->next=NULL;
 if(front==NULL)
 front=rear=t;
 else
 {
 rear->next=t;
 rear=t;
 }
 }

}
int frontdequeue()
{
 int x=-1;
 struct Node* t;

 if(front==NULL)
 printf("Queue is Empty\n");
 else
 {
 x=front->data;
 t=front;
 front=front->next;
 free(t);
 }
 return x;
}

int lastdequeue()
{
 int x=-1;
 struct Node* t=front;

 if(front==NULL)
 printf("Queue is Empty\n");
 else
 {
 while(t->next != rear){
    t=t->next;
 } //printf("%d ",t->data);
 x=rear->data;
 t->next=NULL;
 free(rear);
 rear=t;
 }
 return x;
}
void Display()
{
 struct Node *p=front;
 while(p)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int main()
{
 lastenqueue(10);
 lastenqueue(20);
 lastenqueue(30);
 lastenqueue(40);
 frontenqueue(50);
 Display();


 printf("\n");
 

 printf("deleted=%d \n",frontdequeue());
 printf("deleted=%d ",lastdequeue());
//  printf("deleted=%d \n",frontdequeue());
//  printf("deleted=%d ",lastdequeue());
//  printf("deleted=%d \n",frontdequeue());
//  printf("deleted=%d ",lastdequeue());
printf("\n");
 Display();
 //return 0;
}