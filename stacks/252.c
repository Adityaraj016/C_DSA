//evaluation of postfix

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char data;
    struct node *next;
}*top=NULL;

void push(int x){
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t == NULL){
        printf("stack is full\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct node *t=top;
    int x=-1;
    if(top == NULL){
        return x;
    }
    else{
        x=t->data;
        top=top->next;
        free(t);
    }
    return x;
}

int stacktop(){
    if(top == NULL){
        return 0;
    }
    else{
        return top->data;
    }
}


void display(){
    struct node *p;
    p=top;
    while(p != NULL){
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
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        return 1;
    }
    else {
        return 0;
    }
    free(temp);
}

int isoperand(char x){
    if(x=='+' || x=='-' ||x=='*' || x=='/'){
        return 0;
    }
    else{
        return 1;
    }
}

int pre(char x){    //precedence
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    else{
        return 0;
    }
}

int evaluate(char *postfix){
    int i=0;
    int x1,x2,r=0;
    for(i=0;postfix[i] != '\0';i++){
        if(isoperand(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            x2=pop();
            x1=pop();
            switch(postfix[i]){
                case '+' :
                r=x1 + x2;
                break;

                case '-' :
                r=x1 - x2;
                break;

                case '*' :
                r=x1 * x2;
                break;

                case '/' :
                r=x1 / x2;
                break;
            }
            push(r);
            
        }
    }
    return top->data;

}

int main(){
    char *postfix="234*+82/-";
    printf("%d ",evaluate(postfix));
}