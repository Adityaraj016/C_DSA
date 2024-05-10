// #include<stdio.h>

// struct Rectangle
// {
// int length;
// int breath;
// };
// int main( )
// {
// struct Rectangle r = { 10, 5 };
// struct Rectangle *p = &r;
// printf("%d\n",p->length);
// printf("%d\n",r.length);
	 

// r.length = 15 ;	 	 	 	
// p-> length = 20 ; 
// printf("%d\n",p->length);

// }

#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
int length;
int breath;
};
int main( )
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breath=10;
printf("%d\n",p->length);

}