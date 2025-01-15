#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName = "Saroj";
    string lastName = "Chaudhari";
    string fullName = firstName.append(lastName);

    cout<<"First Nmae: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName;
    cout<<endl<<"Full name: "<<firstName + " "+ lastName;
    cout<<endl<<fullName;
    cout<<endl<<"Name length: "<<fullName.length();
    cout<<endl<<"Name size: "<<fullName.size();

    return 0;
}


// String concatenation
// string fullName = firstName + " " + lastName;
//or
// string fullName = firstName.append(lastName);

//String size
// string message = "This is your message";
// cout<<message.length();
//or
// cout<<message.size();