/* 
    find the pair from an array whose sum is maximum then all other pairs.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vect, int target);    // brute force approach : time complexity O(n^2)
vector<int> pairSumOpt(vector<int> vect, int target);    // two pointer approach : time complexity O(n)

int main(){
    vector<int> vtr = {2,6,10,13,16};
    cout << "Vector : ";
    for(int val : vtr){
        cout << val << " ";
    }
    cout << endl;
    for(int val : pairSum(vtr,15)){
        cout << val << " ";
    }
    cout << endl;
    for(int val : pairSumOpt(vtr,29)){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

vector<int> pairSum(vector<int> vect, int target){
    vector<int> ans; // store require indexes
    for(int i =0; i<vect.size() ; i++){
        for(int j = i+1; j<vect.size() ; j++){
            if(vect[i]+vect[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
vector<int> pairSumOpt(vector<int> vect, int target){
    vector<int> result; // to store pair's indexes
    int st = 0; // start pointer
    int ed = vect.size() -1; // end pointer
    while(st < ed){
        if( vect[st] + vect[ed] == target){  // sum = target
            result.push_back(st);
            result.push_back(ed);
            return result;
        }
        else if( vect[st] + vect[ed] > target){ // sum > target
            ed--;
        }
        else{   // sum < target
            st++;
        }
    }
    return result;

}