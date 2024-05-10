#include<stdio.h>
#include<stdlib.h>

struct rectangle{
    int length;
    int breadth;
};
struct rectangle *fun(){    //struct rectangle ko same as int leke samjho
    struct rectangle *p;
    p=(struct rectangle*)malloc(sizeof(struct rectangle));
    p->length=10;
    p->breadth=7;
    return (p);
}

int main()
{
 struct rectangle  *ptr = fun();
 
 printf("%d %d\n",ptr->length,ptr->breadth);
 
}