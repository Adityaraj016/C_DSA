#include<stdio.h>
#include<stdlib.h>

struct rectangle{
    int length;
    int breadth;
};
void change(struct rectangle r1)
{
    r1.length=15;
    r1.breadth=20;
    printf("%d %d\n",r1.length,r1.breadth);
 
}
int main()
{
 struct rectangle r = {10,5};
 change(r);
 printf("%d %d\n",r.length,r.breadth);
 
}

//call by value me actual parameter doesnot change
