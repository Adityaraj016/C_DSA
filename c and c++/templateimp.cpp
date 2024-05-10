#include<stdio.h>
#include<iostream>

using namespace std;
template<class T>
class arithametic
{
    private:
    T a;
    T b;

    public:
    arithametic(T x,T y);
    T add();
    T sub();

};
    template<class T>
    arithametic<T>::arithametic(T x,T y)
    {
        a=x;
        b=y;
    }
    template<class T>
    T arithametic<T>::add()
    {
        return a+b;
    }
    template<class T>
    T arithametic<T>::sub()
    {
        return a-b;
    }
   



int main(){
    
    // arithametic<int>ar(10,5);
    
    // cout<<"sum "<<ar.add()<<endl;
    // cout<<"difference "<<ar.sub()<<endl;

    arithametic<float>ar(10.0,5.8);
    
    cout<<"sum "<<ar.add()<<endl;
    cout<<"difference "<<ar.sub()<<endl;
}