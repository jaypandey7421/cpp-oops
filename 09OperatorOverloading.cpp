#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:

        Complex(int r, int i){
            real = r;
            imag = i;
        }

        int getReal(){
            return real;
        }
        int getImag(){
            return imag;
        }

        Complex operator + (Complex &obj){
            Complex temp(0, 0);
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }
};

int main(){
    Complex obj1(25, 39);
    Complex obj2(12, 13);

    Complex result = obj1 + obj2;
    cout << "Real: " <<result.getReal() << " Imaginary: i" << result.getImag() << endl;

    return 0;
}