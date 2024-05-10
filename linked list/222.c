//to reverse a doubly lonked list
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
struct Node
{
 struct Node *prev;
 int data;
 struct Node *next;
};
struct Node *first=NULL;  //ye structure banane ke baad hi dikhana hoga

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));  //ye banane se first ko uska adrress mill gaya
 first->prev=NULL;
 first->data=A[0];
 first->next=NULL;
 last=first;        

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node)); //ye banane se harbaar address mil ja raha
 t->data=A[i];
 t->prev=last;
 t->next=NULL;
 last->next=t;     
 last=t;          
 }
}

int Length(struct Node *p)
{
 int len=0;

 len++;
 p=p->next;
while(p!=NULL){
    len++;
 p=p->next;
}
 return len;
}

int delete(struct Node *p,int index){
    struct Node *q=first;
    struct Node *r=first;
    int x,i;
    if(index<=0 || index> Length(p)){
        return -1;
    }

    if(index == 1){
        p=p->next;
    
    x=first->data;
    free(first);
    first=p;
    if(first != NULL){
    first->prev=NULL;
    }
    return x;
    }

    else{
        for(i=0;i<index-2;i++){
            p=p->next;
        }
        q = p->next;
        p->next=q->next;
        if(q->next != NULL){
            r=q->next;     //or simply q->next->prev=p; dono ke jagah
            r->prev=p;
        }
        x=q->data;
        free(q);
        return x;

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


int maximum(struct Node *p){
    int max= INT_MIN ;  //INT_MIN bhi hota hai  //#include<limits.h> add karna hota hai
    while(p != NULL){
        
       
        if(max<p->data){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int main()
{

 int A[]={3,5,7,10,25,8,2,2};
 create(A,8);
 
 
 printf("\ndeleted=%d\n",delete(first,7));
 Display(first);

 return 0;
}