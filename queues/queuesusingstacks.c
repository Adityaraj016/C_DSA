//queue using two stacks
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL;

void push1(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=first;
 first=t;
 }

}
int pop1()
{
 struct Node *t;
 int x=-1;

 if(first==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=first;
 first=first->next;
 x=t->data;
 free(t);
 }
 return x;
}

void push2(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=second;
 second=t;
 }

}
int pop2()
{
 struct Node *t;
 int x=-1;

 if(second==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=second;
 second=second->next;
 x=t->data;
 free(t);
 }
 return x;
}

int isempty1(){
    if (first == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty2(){
    if (second == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int x){
    push1(x);
}

int dequeue(){
    int x=-1;
    if(isempty2()){
        if(isempty1()){
            printf("queue is empty");
        }
        else{
            while(!isempty1()){
                push2(pop1());
            }
        }
    }
    return pop2();
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printf("%d\n",dequeue());
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    return 0;
}