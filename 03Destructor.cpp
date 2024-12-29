#include <iostream>
using namespace std;

class Box{
    public:
        int length;
        int breadth;
        int height;

    // Default Constructor
    Box(){
        cout<<"Default constructor called"<<endl;
        length = 10;
        breadth = 15;
        height = 12;
    }

    // Parameterized constructor 
    Box(int l, int b, int h){
        cout<<"Parameterized Constructor called."<<endl;
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Box( Box &b){
        cout<<"Copy constructor called"<<endl;
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    // Destructor
    ~Box(){
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    Box *box1 = new Box();
    cout<<"Length: "<<box1->length<<", "<<"Breadth: "<<box1->breadth<<", "<<"Heaight: "<<box1->height<<endl;
    //delete box1;

    Box box2(20, 15, 25);
    cout<<"Length: "<<box2.length<<", "<<"Breadth: "<<box2.breadth<<", "<<"Height: "<<box2.height<<endl;

    Box box3 = *box1;
    cout<<"Length: "<<box3.length<<", "<<"Breadth: "<<box3.breadth<<", "<<"Height: "<<box3.height<<endl;
    delete box1;


    return 0;
}