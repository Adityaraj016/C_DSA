//to delete
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

int Length(struct Node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;

 }while(p!=Head);
 return len;
}

int delete(struct Node *p,int index){
    struct Node *r;
    r=Head;
    int i,x;
    if(index<=0  || index>Length(p)){
        return -1;
    }
    if(index==1){
        p=p->next;
        do{
            r=r->next;
        }while(r->next != Head);
        r->next=p;
        x=Head->data;
        free(Head);
        Head=p;
        return x;
    }
    else{
        for(i=0;i<index-2;i++){
            p=p->next;
        }
        for(i=0;i<index-1;i++){
            r=r->next;
        }
        x=r->data;
        p->next=r->next;
        free(r);
        
        return x;

    }

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

 //delete(Head,1);
 printf("deleted=%d\n",delete(Head,2));



 Display(Head);
 return 0;
}