#include <iostream>
using namespace std;

class MyFriend{
    private:
        int random;
    public:

        MyFriend(int r){
            random = r;
        }

        friend void show(MyFriend &p);
};

void show(MyFriend &p){
    cout<<"Private member: "<<p.random<<endl;
}

int main(){
    MyFriend obj(11);
    show(obj);

    return 0;
}