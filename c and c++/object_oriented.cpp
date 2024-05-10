#include<stdio.h>
#include<iostream>

using namespace std;

struct reactangle{
    int length;
    int breadth;

void initialize(int l,int b){
    length=l;
    breadth =b;

}

int area(){
    return length*breadth;

}

int peri(){
    int p;
    p=2*(length+breadth);
    return p;

}

};
int main() {
    reactangle r;

    int l,b;

    printf("Enter the lenght and breath of rectangle\n");
    scanf("%d%d",&l,&b);
    r.initialize(l,b);
    int a=r.area();
    int perimeter=r.peri();

    printf("area=%d\nperi=%d\n",a,perimeter);
    return 0;
    


}