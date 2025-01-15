# Array Notes

**Array Decay:** When you pass an array to a function like `printArrayF(int arr[])`, it undergoes "array decay." This means the array is implicitly converted to a pointer to its first element (i.e., int* arr).

**Vector:** The difference between an array and a vector, is that the size of an array cannot be modified. A vector however, can grow or shrink in size as needed.
```cpp
 // Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print vector elements
for (string car : cars) {
  cout << car << "\n";
}
```
