//Polynomial Linked List
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
 int coeff;
 int exp;
 struct Node *next;
}*poly1=NULL,*poly2=NULL;
void create1()
{
 struct Node *t,*last=NULL;
 int num,i;

 printf("Enter number of terms for poly 1\n");
 scanf("%d",&num);
 printf("Enter each term with coeff and exp\n");

 for(i=0;i<num;i++)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 scanf("%d%d",&t->coeff,&t->exp);
 t->next=NULL;
 if(poly1==NULL)
 {
 poly1=last=t;
 }
 else
 {
 last->next=t;
 last=t;
 }
 }
}
void create2()
{
 struct Node *t,*last=NULL;
 int num,i;

 printf("Enter number of terms for poly 2\n");
 scanf("%d",&num);
 printf("Enter each term with coeff and exp\n");

 for(i=0;i<num;i++)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 scanf("%d%d",&t->coeff,&t->exp);
 t->next=NULL;
 if(poly2==NULL)
 {
 poly2=last=t;
 }
 else
 {
 last->next=t;
 last=t;
 }
 }
}
void Display(struct Node *p)
{
 while(p)
 {
 printf("%dx^%d ",p->coeff,p->exp);
 if(p->next != NULL){
    printf("+");
 }
 p=p->next;
 }
 printf("\n");
}
int Eval(struct Node *p, int x)
{
 int val=0;

 while(p)
 {
 val+=p->coeff*pow(x,p->exp);
 p=p->next;
 }
 return val;
}
int main()
{
 create1();
 create2();
 printf("polynomial 1\n");
 Display(poly1);
 printf("polynomial 2\n");
 Display(poly2);
 printf("polynomial 1 evaluation\n");
 printf("%d\n",Eval(poly1,1));
 printf("polynomial 2 evaulation\n");
 printf("%d\n",Eval(poly2,1));
 return 0;
}