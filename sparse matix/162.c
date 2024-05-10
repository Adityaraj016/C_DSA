//to represent sparse matrix?
#include<stdlib.h>
#include<stdio.h>
struct Element
{
 int i;
 int j;
 int x;
};
struct Sparse
{
 int m;
 int n;
 int num;
 struct Element *ele;
};
void create(struct Sparse *s)
{
 int i;

 printf("Eneter Dimensions\n");
 scanf("%d%d",&s->m,&s->n);
 printf("Number of non-zero\n");
 scanf("%d",&s->num);

 s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
 printf("Eneter non-zero Element with first row no the column number and then no zero element\n");
 for(i=1;i<=s->num;i++)   //malloc se kahi se bhi chalu karke utna element store kar sakte hai
 scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);   //jaruri nahi hai ki i=0 se hi start kare

}
void display(struct Sparse s)
{
 int i,j,k=1;

 for(i=1;i<=s.m;i++)
 {
 for(j=1;j<=s.n;j++)
 {
 if(i==s.ele[k].i && j==s.ele[k].j){
 printf("%d ",s.ele[k++].x);
 }
 else
 printf("0 ");
 }
 printf("\n");
 }
}

int main()
{
 struct Sparse s1;

 create(&s1);
 printf("the sparse matrix\n");
 display(s1);



 return 0;
}
