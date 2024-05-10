//Display a doubly Linked List
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

 Display(first);
 printf("\nmaximum=%d\n",maximum(first));
 

 return 0;
}