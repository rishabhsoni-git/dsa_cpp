/* 
    Number appear more then half times is known as majority element. There exist at most one majority element in an array.
*/

#include <iostream>
#include <vector>
#include <algorithm>    // use only for sort() in sorting method.
using namespace std;

int majorityEle(const vector<int> vect); // burte force approach : time complexity O(n^2);
int majorityEle_sorting(vector<int> vect); // find Majority element with help of sorting. : time complexity O(n*logn + n) = O(n*logn).
int majorityEle_mooreAlgo(const vector<int> vtr); // Moore's Voting algorithm : time complexity O(n).

int main(){
    vector<int> vtr = {1,2,3,4};
    cout << "Vector : ";
    for(int val : vtr){
        cout << val << " ";
    }
    cout << endl << "Majority element : " << majorityEle_mooreAlgo(vtr) << endl;

    return 0;
}

int majorityEle(const vector<int> vect){
    int n = vect.size();
    for(int i : vect){
        int count = 0;
        for(int j : vect){
            if(i == j){
                count++;    // count no of appearence of a number.
            }
        }
        if(count > n/2){  // check for majority elements
            return i;
        }
    }
    return -1;
}
int majorityEle_sorting(vector<int> vect){
    //sorting
    sort(vect.begin(), vect.end());
    // logic
    int n = vect.size();
    int count = 0;
    for(int val : vect){
        int temp;
        if(val != temp){
            count = 0;
        }
        count++;
        if(count > n/2){
            return val;
        }
        temp = val;
    }
    return -1;
}
int majorityEle_mooreAlgo(const vector<int> vtr){
    int ans,count = 0;
    for(int i=0; i<vtr.size(); i++){
        if(count == 0){
            ans = vtr[i];
        }
        
        if(vtr[i] == ans){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int val : vtr){
        if(val == ans){
            count++;
        }
    }
    if(count > vtr.size()/2){
        return ans;
    }
    else{
        return -1;
    }
}

