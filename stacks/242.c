//Stack using Linked List
//parenthesis balencing
//brackets bhi check karna hai
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

char stacktop(){
    if(top == NULL){
        return 0;
    }
    else{
        return top->data;
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
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(top == NULL){
                return 0;             //a ka value for loop ke bagar niakale hi pura null ho ja rraha
            }                    //same b ka seen hai
            else if(exp[i]==')' && stacktop()=='(' || exp[i]=='}' && stacktop()=='{' || exp[i]==']' && stacktop()=='['){
                pop();     //stacktop ke use  se hogaya
            }
            else{
                return 0;
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
    char *exp ="{((((a+b)*c)))))}";
    
    // int x=isbalenced(exp);
    // printf("1 means exp is balenced and 0 mens not balenced\n");
    // printf("output=%d ",x);
    push('a');
    push('b');
    // push('c');
    // push('d');
    Display();
    

    //printf("%c ",pop());

    return 0;
}