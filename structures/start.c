#include<stdio.h>

struct rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct rectangle *r1;
    r1->length=10;
    r1->breadth=11;
    printf("size=%d\n",sizeof(r1));
    printf("length=%d  breadth=%d\n",r1->length,r1->breadth);
    return 0;
}