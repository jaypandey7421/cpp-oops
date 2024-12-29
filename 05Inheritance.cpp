#include <iostream>
using namespace std;

class Box{
    public:
        int length;
    protected:
        int breadth;
    private:
        int height;
};

class SmallBox: public Box{
    // length is public
    // breadth is protected
    // height is not accessible from SmallBox
};

class BigBox:   protected Box{
    // length is protected
    // breadth is protected
    // height is not accessible from BigBox
};

class MediumBox: private Box{
    // length is private
    // breadth is private
    // height is not accessible from MediumBox
};

int main(){
    Box box;
    // box.length = 10; // OK
    // box.breadth = 10; // Error
    // box.height = 10; // Error

    SmallBox smallBox;
    // smallBox.length = 10; // OK
    // smallBox.breadth = 10; // Error
    // smallBox.height = 10; // Error

    BigBox bigBox;
    // bigBox.length = 10; // Error
    // bigBox.breadth = 10; // Error
    // bigBox.height = 10; // Error

    MediumBox mediumBox;
    // mediumBox.length = 10; // Error
    // mediumBox.breadth = 10; // Error
    // mediumBox.height = 10; // Error

    return 0;
}