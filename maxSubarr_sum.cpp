#include <iostream>
using namespace std;

// Brute Force Approachs
void maxSubarraySum_3n(const int arr[], int size);  // Maximum Subarray Sum - using 3 nested loop , complexity O(n^3).
void maxSubarraySum_2n(const int arr[], int size);    // Maximum Subarray Sum - using 2 nested loop , complexity O(n^2).
// Kadane's Algorithm
void kadanAlgo(const int arr[], int size);  // Maximum Subarray Sum - using single loop , complexity O(n).

int main(){
    int n=10;
    int arr[n] = {1,-2,-3,4,5,-4,-2,8,-1,2};
    maxSubarraySum_2n(arr, n);
    maxSubarraySum_3n(arr, n);
    kadanAlgo(arr,n);
    return 0;
}

void maxSubarraySum_3n(const int arr[], int size){
    int maxSum = __SIG_ATOMIC_MIN__;
    cout << "All possible sub-array's sum are - \n";
    for(int start=0; start<size; start++){ // starting index of sub-array
        for(int end=start; end<size; end++){ // ending index of sub-array
            int currSum = 0;    // current sum
            for(int k=start; k<=end; k++){   // use to take elements of sum-array one by one from starting each time. 
                currSum += arr[k];
            }
            cout << "("<< currSum << ")  "; // this is only for understanding.
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Max sum = " << maxSum << endl;
}
void maxSubarraySum_2n(const int arr[], int size){
    int maxSum = __SIG_ATOMIC_MIN__;
    cout << "All possible sub-array's sum are - \n";
    for(int start=0; start<size; start++){
        int currSum = 0;    // current sum
        for(int end=start; end<size; end++){
            currSum += arr[end];    // currSum holds sum of all previour subarray of length = end-1.
            cout << "("<< currSum << ")  "; // this is only for understanding.
            maxSum = max(currSum,maxSum);
        }
        cout << endl;
    }
    cout << "Max sum = " << maxSum << endl;
}
void kadanAlgo(const int arr[], int size){
    int maxSum = 0, currSum = 0;
    for(int i=0; i<size; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Maximum Sum = " << maxSum << endl;
}
