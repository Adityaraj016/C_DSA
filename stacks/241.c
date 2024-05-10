//Stack using Linked List
//parenthesis balencing
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Node
{
 char data;
 struct Node *next;
}*top=NULL;
void push(char x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=top;
 top=t;
 }

}
char pop()
{
 struct Node *t;
 char x=-1;

 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=top;
 top=top->next;
 x=t->data;
 free(t);
 }
 return x;
}
void Display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%c ",p->data);
 p=p->next;
 }
 printf("\n");
}

int isempty(){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
    free(temp);
}

int isbalenced(char *exp){
    int x=strlen(exp);
    for(int i=0;i<x;i++){
        if(exp[i] == '('){
            push(exp[i]);
        }
        else if(exp[i] == ')'){
            if(top == NULL){
                return 0;
            }
            else{
                pop();
            }
        }
    }
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char *exp ="((a+b)*c))";
    
    int x=isbalenced(exp);
    printf("1 means exp is balenced and 0 mens not balenced\n");
    printf("output=%d ",x);
    Display();
    

    //printf("%c ",pop());

    return 0;
}