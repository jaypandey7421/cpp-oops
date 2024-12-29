#include <iostream>
using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box box1; // Object of type Box.
    box1.length = 20;
    box1.breadth = 25;
    box1.height = 10;
    cout<<"length: "<<box1.length<<endl;
    cout<<"breadth: "<<box1.breadth<<endl;
    cout<<"height: "<<box1.height<<endl;

    Box *box2 = new Box(); // Object of type Box the pointer way.
    box2->length = 30;
    box2->breadth = 35;
    box2->height = 15;
    cout<<"Box2 volume: "<<box2->length*box2->breadth*box2->height<<endl;

    return 0;
}