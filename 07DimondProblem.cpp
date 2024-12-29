#include <iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent constructor called."<<endl;
        }
};

class Child01: public Parent{
    public:
        Child01(){
            cout<<"Child01 constructor called."<<endl;
        }
};

class Child02: public Parent{
    public:
        Child02(){
            cout<<"Child02 constructor called."<<endl;
        }
};

class GrandChild: public Child01, public Child02{
    public:
        GrandChild(){
            cout<<"GrandChild constructor called."<<endl;
        }
};

int main(){
    GrandChild grandChild;    // Diamond problem

    return 0;
}