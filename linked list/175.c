//Display a Linked List
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
struct Node
{
 int data;
 struct Node *next;
};
struct Node *first=NULL;  //ye structure banane ke baad hi dikhana hoga

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));  //ye banane se first ko uska adrress mill gaya
 printf("%u\n",first);
 first->data=A[0];
 first->next=NULL;
 last=first;            //last me first ka adress stiore hoga
 printf("%u\n",last);

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node)); //ye banane se harbaar address mil ja raha
 t->data=A[i];
 t->next=NULL;
 last->next=t;    //last-> me t address 
 last=t;          //last me t kla address
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
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);

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