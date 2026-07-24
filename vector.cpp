#include <iostream>
#include <vector>
using namespace std;
int singleUnique(vector<int> &dyarr );  //find single unique value using bitwise operator.
void multiUnique(vector<int> &arr );    //print multiple unique values using nested loop.
int linearSearc(vector<int> &vact, int target); //search target value.
void reverseVector(vector<int> &vact);  //reversing a vector.

int main(){

    int x = 0;
    vector<int> flexible;
    cout << "\tEnter values (enter '-1' for exit): " << endl;
    cin >> x;
    while(x != -1){
        flexible.push_back(x);
        cin >> x;
    }
    for(int val : flexible){
        cout << val << ' ';
    }
    cout << endl;
    cout << "\tUnique Values are - " << endl;
    multiUnique(flexible);
    int target = 0;
    cout << "\tEnter value to find : ";
    cin >> target;
    cout << "\tIndex = " << linearSearc(flexible,target) << endl;
    cout << "\tReversing vector..." << endl;
    reverseVector(flexible);
    for(int val : flexible){
        cout << val << ' ';
    }
    cout << endl;
    return 0;
}

int singleUnique(vector<int> &dyarr ){
    int value=0;
    for(int block : dyarr){
        value = value ^ block;
    }
    return value;
}
void multiUnique(vector<int> &arr ){
    int value=0;
    for(int i: arr){
        int count = 0;
        for(int j:arr){
            if(i == j){
                count++;
            }
        }
        if(count == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}
int linearSearc(vector<int> &vact, int target){
    int index = 0;
    for(int val : vact){
        if(val == target)
        {
            return index;
        }
        index++;
    }
    return -1;
}
void reverseVector(vector<int> &vact){
    int size = vact.size();
    for(int i=0; i<size/2; i++){
        int temp = vact.at(i);
        vact.at(i) = vact.at(size-1-i);
        vact.at(size-1-i) = temp;
    }
}