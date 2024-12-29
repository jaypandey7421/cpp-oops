#include <iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent constructor called."<<endl;
        }
};

class Parent01{
    public:
        Parent01(){
            cout<<"Parent01 constructor called."<<endl;
        }
};

class Child: public Parent{
    public:
        Child(){
            cout<<"Child constructor called."<<endl;
        }
};

class Child01: public Parent{
    public:
        Child01(){
            cout<<"Child01 constructor called."<<endl;
        }
};

class GrandChild: public Child{
    public:
        GrandChild(){
            cout<<"GrandChild constructor called."<<endl;
        }
};

class MultipleInheritance: public Parent, public Parent01{
    public:
        MultipleInheritance(){
            cout<<"multipleInheritance constructor called."<<endl;
        }
};

int main(){
    Child child;  // Single inheritance
    GrandChild grandChild;    // Multilevel inheritance
    MultipleInheritance multipleInheritance;  // Multiple inheritance
    Child chil_d;        // Hierarchical inheritance
    Child01 child_01;    // Hierarchical inheritance



    return 0;
}