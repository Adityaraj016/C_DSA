#include<stdio.h>
#include<stdlib.h>
struct stack{
   int data;
   struct stack *next;
}*first=NULL;

void push(int x){
   struct stack *t;
   t=(struct stack*)malloc(sizeof(struct stack));
   if(t==NULL){
      printf("stack is full\n");
   }
   else{
      t->data=x;
      t->next=first;
      first=t;

   }
}

int pop(){
   int x=-1;
   if(first==NULL){
      printf("stack is empty\n");
   }
   else{
      struct stack *t=first;
      x=t->data;
      first=first->next;
      free(t);
   }
   return x;
}

void display(){
   while(first!=NULL){
      printf("%d ",first->data);
      first=first->next;
   }
}


int main(){
   push(10);
   push(20);
   push(30);
   
   pop();
   printf("%d\n",pop());
   pop();
   
   
   return 0;
}