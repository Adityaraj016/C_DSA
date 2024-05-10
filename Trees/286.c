//working perfectly fine
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
}*root=NULL;

struct queue{
    int data;
    struct queue *next;
}*front=NULL,*rear=NULL;


void enqueue(int x)
{
    struct queue *t;
    t=(struct queue*)malloc(sizeof(struct queue));
    if(t==NULL){
        printf("queue is full\n");
    }else{
    t->data=x;
    t->next=NULL;
    if(front==NULL){
       
        front=rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }
 }
}

int dequeue(){
    int x=-1;
    if(front==NULL){
        printf("queue is empty\n");
    }
    else{
        struct queue *p=front;
        x=p->data;
        front=front->next;
        free(p);
        
    }
    return x;
}

int isempty(){
    if(front==NULL){
        return 0;
    }
    else{
        return 1;
    }
}
void createtree(){
    struct node *r,*s;
    int x;
    root=(struct node*)malloc(sizeof(struct node));
    printf("%u",root);
    printf("enter root value\n");
    scanf("%d",&x);
    
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);
    while(isempty()==1){
        r=dequeue();
        printf("enter left child of %d\n",r->data);
        scanf("%d",&x);
        if(x!=-1){
            s=(struct node*)malloc(sizeof(struct node));
            s->data=x;
            s->lchild=s->rchild=NULL;
            r->lchild=s;
            enqueue(s);
        }

        printf("enter right child of %d\n",r->data);
        scanf("%d",&x);
        if(x!=-1){
            s=(struct node*)malloc(sizeof(struct node));
            s->data=x;
            s->lchild=s->rchild=NULL;
            r->rchild=s;
            enqueue(s);
        }
    }

}

void Preorder(struct node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}


void Inorder(struct node *p)
{
 if(p)
 {
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}
void Postorder(struct node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}

int main(){
    createtree();
    Preorder(root);
    printf("\npostorde\n");
    Postorder(root);
    printf("\ninorder\n");
    Inorder(root);
    return 0;
}