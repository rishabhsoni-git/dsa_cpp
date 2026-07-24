#include <iostream>
using namespace std;

void scanArr(int arr[], int size);  // take input on an array
void printArr(const int arr[], int size); // print an array
int minArr(const int arr[], int size); // return minimum element of array
int maxArr(const int arr[], int size); // return maximum element of array
int linearSearch(const int arr[], int size, int target);    // return index of targeted value (-1 , if not exist)
void reverseArr(int arr[], int size);   // reversing an array 
int arrSum(const int arr[], int size);  // return sum of all elements of array using recursion
long long arrProduct(const int arr[], int size);  // return product of all elements of array using recursion
void swap_ArrExtream(int arr[], int size);   // swap minimum & maximum element of an array.
void printArrUnique(const int arr[], int size);  // print all unique values of an array.
void printArrIntersection(const int arr[], int asi, const int brr[], int bsi);  // print common elements of two arrays.

int main()
{
    int one[5] = {1,2,3,4,5};
    int two[7] = {4,5,6,7,8,9,10};
    printArr(one,5);
    printArr(two,7);
    printArrIntersection(one,5,two,7);
    return 0;
}

void scanArr(int arr[], int size){
    cout << "Enter values of array -\n";
    for(int i=0; i<size; i++)
    {
        printf("[%d] = ",i);
        cin >> arr[i];
    }
    cin.clear();
}
void printArr(const int arr[], int size){
    cout << "Values of array -\n";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int minArr(const int arr[], int size){
    int index = 0;
    for(int i=0; i<size; i++){
        if(arr[i] < arr[index]){
            index = i;
        }
    }
    return index;
}
int maxArr(const int arr[], int size){
    int index = 0;
    for(int i=0; i<size; i++){
        if(arr[i] > arr[index]){
            index = i;
        }
    }
    return index;
}
int linearSearch(const int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
void reverseArr(int arr[], int size){
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);
    }
}
int arrSum(const int arr[], int size){
    if(size == 1){
        return arr[0];  // base condition
    }
    int sum = arr[size-1] + arrSum(arr, size-1);    // recursive statement
    return sum;
}
long long arrProduct(const int arr[], int size){
    if(size == 1){
        return arr[0];
    }
    long long product = arr[size-1] * arrProduct(arr,size-1);
    return product;
}
void swap_ArrExtream(int arr[], int size){
    int maxIndex = maxArr(arr,size);
    int minIndex = minArr(arr,size);
    swap(arr[maxIndex], arr[minIndex]);
}
void printArrUnique(const int arr[], int size){
    for(int i=0; i<size; i++){
        int copy=0;
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }
            if(arr[i] == arr[j]){
                copy = 1;
                break;
            }
        }
        if(copy == 0){
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
}
void printArrIntersection(const int arr[], int asi, const int brr[], int bsi){
    cout << "Intersection : ";
    for(int i=0; i<asi; i++){
        for(int j=0; j<bsi; j++){
            if(arr[i] == brr[j]){
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}