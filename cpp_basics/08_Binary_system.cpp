/*
    Here we learn about Bitwise Operators, conversions and check whether a string or num is binary or not.
    
    Some bitwise operators
    1. AND (&):     just like multiplication of bits. 1*1=1, 0*1=0, 0*0=0
    2. OR (|):      similar to addition operations. 1+1=1, 0+1=1, 0+0=0
    3. XOR (^):     same bit = 0 and for different bit = 1. 1^1=0, 1^0=1, 0^0=0
    4. NOT (~):     convert bit from 0 to 1 and 1 to 0. ~1=0, ~0=1
    5. Left Shift (<<):     101<<3 = 101000 --> 5<<3 = 40
    6. Right Shift (>>):    101>>2 = 001    --> 5>>2 = 1
*/

#include <iostream>
#include <string>
using namespace std;

bool isBinary(long long binary);    // decimal to binary
bool isBinary(const string& binary);

int main(){
    int x = 17;
    

    return 0;
}

bool isBinary(long long binary){
    if(binary < 0) return false; // edge case
    while(binary > 0){
        int r = binary % 10;
        if(r != 0 && r != 1) return false;  // or if(r > 1)
        // update
        binary /= 10;
    }
    return true; // 0 is consider as binary
}
bool isBinary(const string& binary){
    if(binary.empty() || binary[0] == '-') return false;

    for(char digit : binary){   // for-each loop
        if(digit != '0' && digit != '1') return false;
    }
    return true;
}

