// #include<stdio.h>
// #include<iostream>

// using namespace std;

// class arithametic
// {
//     private:
//     int a;
//     int b;

//     public:
    
//     arithametic(int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     int add()
//     {
//         return a+b;
//     }
//     int sub()
//     {
//         return a-b;
//     }
   

// };

// int main(){
//     arithametic ar(10,5);
    
//     cout<<"sum "<<ar.add()<<endl;
//     cout<<"difference "<<ar.sub()<<endl;
// }




//both are same codes

#include<stdio.h>
#include<iostream>

using namespace std;

class arithametic
{
    private:
    int a;
    int b;

    public:
    arithametic(int x,int y);
    int add();
    int sub();

};
    
    arithametic::arithametic(int x,int y)
    {
        a=x;
        b=y;
    }
    int arithametic::add()
    {
        return a+b;
    }
    int arithametic::sub()
    {
        return a-b;
    }
   



int main(){
    arithametic ar(10,5);
    
    cout<<"sum "<<ar.add()<<endl;
    cout<<"difference "<<ar.sub()<<endl;
}