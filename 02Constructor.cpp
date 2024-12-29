#include <iostream>
using namespace std;

class Box {
    public:
        int length;
        int breadth;
        int height;
    
    // Default constructor
    Box(){
        cout<<"Default Constructor called!"<<endl;
        length = 10;
        breadth = 20;
        height = 30;
    }

    // Parameterized constructor
    Box(int l, int b, int h){
        cout<<"Parameterized constructor called!"<<endl;
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Box(Box &b){
        cout<<"Copy constructor called!"<<endl;
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
};

int main(){
    Box box1;
    cout<<"Length: "<<box1.length<<", "<<"Breadth: "<<box1.breadth<<", "<<"Height: "<<box1.height<<endl;
    Box box2(12, 10, 13);
    cout<<"Length: "<<box2.length<<", "<<"Breadth: "<<box2.breadth<<", "<<"Height: "<<box2.height<<endl;
    Box box3 = box2;
    cout<<"Length: "<<box3.length<<", "<<"Breadth: "<<box3.breadth<<", "<<"Height: "<<box3.height<<endl;


    return 0;
}