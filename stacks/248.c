//infix to postfix conversion using stack using linked list;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char data;
    struct node *next;
}*top=NULL;

void push(char x){
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

char pop(){
    struct node *t=top;
    char x=-1;
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

char stacktop(){
    if(top == NULL){
        return 0;
    }
    else{
        return top->data;
    }
}

char peak(int x){
    int i;
    struct node *p=top;
    for(i=0;p!=NULL && i<x-1;i++){
        p = p -> next ;
    }
    return p->data;
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


//infix to postfix conversion
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

char *infixtopost(char *exp){
    int i=0,j=0;
    int length=strlen(exp);
    char *postfix;
    postfix=(char *)malloc((length+2)*sizeof(char));    //ek extra space for storing #
    while(exp[i] != '\0'){
        if(isoperand(exp[i])){         //agar 1 hua to jayega nahi to nahi
            postfix[j++]=exp[i++];
        }
        else{
            if(pre(exp[i])>pre(top->data)){
                push(exp[i++]);
            }
            else{
                postfix[j++]=pop();
            }
        }      
    }
    while(top != NULL){
        postfix[j++]= pop();
    }
    postfix[j]='\0';
    return postfix;
}

void delete(char *infixtopostfix){
    int i=0;
    int len=strlen(infixtopostfix);
    while(infixtopostfix[i] != '\0'){
        i++;
    }
    printf("%d ",i);
    i--;
    infixtopostfix[i]='\0';
    printf("%d ",len);

}

int main()
{
    char *exp="a+b+c-d*e*f/g";
    push('#');
    printf("infix expression= %s\n",exp);
    
    char *infixtopostfix=infixtopost(exp);
    delete(infixtopostfix);
    printf("postfix expression=%s \n",infixtopostfix);
    return 0;
}