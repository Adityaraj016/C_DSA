#include<stdio.h>


struct reactangle{
    int length;
    int breadth;
};
int area(struct reactangle r){
    return r.length*r.breadth;

}

int peri(struct reactangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;

}
int main() {
    struct reactangle r;

    printf("Enter the lenght and breath of rectangle\n");
    scanf("%d%d",&r.length,&r.breadth);

    int a=area(r);
    int perimeter=peri(r);

    printf("area=%d\nperi=%d\n",a,perimeter);
    return 0;
    


}