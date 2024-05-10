//inserting
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

int count(struct Node *p){
    int count=0;
    while(p != NULL){
        count++;
        p=p->next;
    }
    return count;
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;

 if(index < 0 || index > count(p))
 return;
 else{
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)    //for(i=1;i<=index-1;i++);
 p=p->next;
 t->next=p->next;
 p->next=t;

 }
 }


}
int main()
{

 int A[]={10,20,30,40,50};
 int n,x;
 create(A,5);


 printf("%d\n",count(first));
 printf("enter the position you want to insert(index starting from 1 so to insert before 1 you have to input zero) and number also\n");
 scanf("%d%d",&n,&x);
 Insert(first,n,x);   //using isnert function also we can create a linked list
 Display(first);

//  Insert(first,0,10);

//  Insert(first,1,20);
//  Insert(first,2,30);
//  Insert(first,3,150);
//  Insert(first,4,10);
//  Display(first);
 return 0;
}