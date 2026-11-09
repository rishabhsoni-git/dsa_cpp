#include <iostream>
#include <array>
using namespace std;

/* Array : It is a data structure which store homogeneous data in a memory serise. */
double sum(float arr[], int size);
int main(){
    // array syntex -
    int arr1[10]; // array decleration
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10}; // array initialization

    // [size of array] while declaration
    // [index value] while accessing data

    // to store data at ith position, the index is i-1;
    arr1[5] = 14;
    cout << "Value stored at arr1[5]: " << arr1[5] << endl;
    // to access data from array-
    cout << arr2[8] << endl; // output - 9;

    // access all the elements of array, use loop
    cout << "Values in arr2 are : ";
    for(int i=0; i<10; i++){
        cout << arr2[i] << ' ';
    }
    cout << endl;

    // A string actually an array of characters
    std::array<char, 5> name{'R', 'a', 'm'}; // Remaining elements are value-initialized to '\0'.
    for(char letter : name)
        cout << (letter == '\0' ? '_' : letter) << ' ';
    cout << endl;

    // array is a pointer itself, meaning name of array is a pointer points toward first element( at index 0 ) of array.
    cout << "The first character is: " << name[0] << endl;

    //while calling a function we only put array name as an arrgument
    float price[] = {12.5, 35.7, 98.3, 98.0, 23.5};
    int m = sizeof(price)/sizeof(float); // m = 5;
    cout << "m = " << m << endl;
    cout << "Total Amount : " << sum(price, m) << endl;

    return 0;
}

double sum(float arr[], int size){
    double total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    return total;
}