#include <iostream>
using namespace std;

class Parent{
    public:
        virtual  void show(){
            cout << "Parent class show()" << endl;
        }

        void display(){
            cout << "Parent class display()" << endl;
        }
};

class Child: public Parent{
    public:
        void show(){
            cout<<"Child class show()"<<endl;
        }
        void display(){
            cout<<"Child class display()"<<endl;
        }
};

int main(){
    Parent *p;
    Child c;
    p = &c;

    p->show();
    p->display();

    return 0;
}