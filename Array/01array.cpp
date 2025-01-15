#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i= 0; i< n; i++){
        cout << arr[i] << " ";
    }
}

template <typename T, size_t N>
void printArrayForEach(T (&arr)[N]){
    // For-each loop expects variable to be container
    cout <<"Array for-each: ";
    for(int x: arr){
        cout<< x << " ";
    }
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    //int temp;
    while (start < end)
    {
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int arr[7] = {89, 66 , 45, 23, 77, 88, 15};
    cout << "Array elements are: ";

    printArray(arr,7);
    cout << endl;
    printArrayForEach(arr);
    reverseArray(arr, 7);
    cout<<endl;
    printArrayForEach(arr);
    cout<<endl<<"Array size: "<<sizeof(arr)/ sizeof(arr[0]);

    return 0;
}