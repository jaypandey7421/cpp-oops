#include <iostream>
using namespace std;

class Box{
    private:
        int length, breadth, height;
    
    public:
        Box(int l, int b , int h){
            cout<<"Parameterized constructor called."<<endl;
            length = l;
            breadth = b;
            height = h;
        }

        void setAtributes(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }

        int getVolume(){
            return length * breadth * height;
        }

        ~Box(){
            cout<<"Destructor called."<<endl;
        }
};

int main(){
    Box box1(5, 8, 10);
    cout<<"Valume of the box: "<<box1.getVolume()<<endl;
    box1.setAtributes(12, 12, 12);
    cout<<"Volume of the box: "<<box1.getVolume()<<endl;


    return 0;
}