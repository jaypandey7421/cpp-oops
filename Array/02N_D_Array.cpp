#include <iostream>
using namespace std;


int main(){
    int d2_array[2][4] = {{2, 3, 7, 10},{4, 19, 21, 13}};
    cout<<"2-D array: "<<d2_array[0][2];
    int d3_array[3][2][5] = {
        {
            {2, 10, 11, 13, 15},{17, 20, 33, 91, 12}
        },
        {
            {221, 230, 319, 330, 332},{333, 439, 421, 427, 421}
        },
        {
            {113,119, 109, 111, 100},{777,701, 709, 702, 701}
        }
    };
    cout<<endl<<"3_D Array: "<<d3_array[1][1][4];

    return 0;
}