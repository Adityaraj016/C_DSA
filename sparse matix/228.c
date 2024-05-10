//sparse matroix representation

#include<stdio.h>
#include<stdlib.h>

struct sparse{
    int row;
    int col;
    int ele;
    struct sparse *next;
}*spmatrix=NULL;

void create(int m,int n){
    struct sparse *t,*last;
    int i,j,x;
    printf("eneter all elements of sparse matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d", &x);
        if(x != 0){
            if(spmatrix == NULL){
            spmatrix= (struct sparse *)malloc(sizeof(struct sparse));
            spmatrix->row=i;
            spmatrix->col=j;
            spmatrix->ele=x;
            spmatrix->next=NULL;
            last=spmatrix;
            }
            else{
                t=(struct sparse *)malloc(sizeof(struct sparse));
                t->row=i;
                t->col=j;
                t->ele=x;
                t->next=NULL;
                last->next=t;
                last=t;
            }
        }
    }
    }
    
    
}
void Display(struct sparse *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->ele);
 p=p->next;
 }
}
//3 tuple format
void Display2(struct sparse *p)
{
    printf("\n");
 while(p!=NULL)
 {
 printf("%d %d %d\n",p->row,p->col,p->ele);
 p=p->next;
 }
}

void display1(struct sparse *p,int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j==p->col){
                printf("%d ",p->ele);
                p=p->next;
            }
            else{
                printf("0 ");
            }
    }
    printf("\n");
}
}

int main(){
    int m,n;
    printf("enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    create(m,n);
    printf("the linked list\n");
    Display(spmatrix);
    printf("\nsparse matrix elements are\n");
    Display2(spmatrix);   //main yAHI HAI 3 TTUPLE ME REPRESENT KARNA
    printf("\nsparse matrix is\n");
    display1(spmatrix,m,n);   //bas sab elements ek row ka zero hone par kaam ni kar raha hai
    return 0;
}