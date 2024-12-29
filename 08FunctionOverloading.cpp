#include <iostream>
using namespace std;

class FunctionOverloading{
    public:
        void add(int a, int b){
            cout << "Sum of two integers: " << a+b << endl;
        }
        void add(double a, double b){
            cout << "Sum of two doubles: " << a+b << endl;
        }
        void add(int a, int b, int c){
            cout << "Sum of three integers: " << a+b+c << endl;
        }
        void add(float a, float b){
            cout << "Sum of two floats: " << a+b << endl;
        }
};

int main(){
    FunctionOverloading obj;
    obj.add(10, 20);
    obj.add(double(10.2), double(20.5));
    obj.add(10, 20, 30);
    obj.add(float(10.2), float(20.5));

    
    return 0;
}