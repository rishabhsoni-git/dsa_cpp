#include <iostream>
int decimal_to_binary(int n);
int binary_to_decimal(int n);
int binarySum(int a, int b, int carry);   // addition b/w binary numbers
bool isBinary(long int n);      // check is a number is binary or not
bool isOdd_binary(long int n);  // check Is a binary num is odd or even. also for decimal
int long long numIn_memory(int n);  // convert num(s) in formate as store in memory.

// ----------------------------
int main()
{
    int n;
    std::cout << "Enter number : ";
    std::cin >> n;
    std::cout << numIn_memory(n) << std::endl;
    return 0;
}
//-------------------------------

bool isBinary(long int binary)
{
    int reminder = 0;
    while (binary > 0)
    {
        reminder = binary % 10;
        if (reminder != 1 && reminder != 0)
        {
            return false;
        }
        binary /= 10;
    }
    return true;
}
int binarySum(int a, int b, int carry){
    /*  0+0 = 0 | 0+1 = 1 | 1+0 = 1 | (1+1 = 0 & carry = 1)  */

    if(a == 0 && b==0){ // end point
        return carry;
    }
    int sum =0, ans =0;
    int lsbA = a % 10;
    int lsbB = b % 10;

    if( carry == 0)
    {
        // carry independ
        if(lsbA == 1 && lsbB == 1){
            carry = 1;
            ans = 0;
        }
        else{
            carry = 0;
            ans = lsbA + lsbB;
        }
    }
    else{
        // carry depended
        if(lsbA == 1 && lsbB == 1){
            carry = 1;
            ans = 1;
        }
        else if(lsbA == 0 && lsbB == 0){
            carry = 0;
            ans = 1;
        }
        else{
            carry = 1;
            ans = 0;
        }
    }
    sum  = (binarySum(a/10,b/10,carry)*10) + ans; // recursive condition
    return sum; 
}
int decimal_to_binary(int decimal)
{
    if( decimal < 0){
        // for negative number
        decimal = decimal * (-1);
    }
    int long binary = 0;
    int power = 1; // 1, 10, 100, 1000.....
    int reminder = 0;
    while (decimal > 0)
    {
        // logic
        reminder = decimal % 2;
        binary = binary + (reminder * power);
        // updation
        decimal /= 2;
        power *= 10;
    }
    return binary;
}
int binary_to_decimal(int binary)
{
    if (isBinary(binary))
    {
        int decimal = 0;
        int power = 1; // 1, 2, 4, 8, 16.....
        int reminder = 0;
        while (binary > 0)
        {
            // logic
            reminder = binary % 10;
            decimal += (reminder * power);
            // updation
            binary /= 10;
            power *= 2;
        }
        return decimal;
    }
    else
    {
        std::cout << "Number is not binary\n";
        return 0;
    }
}
bool isOdd_binary(long int binary)
{
    if (isBinary(binary))
    {   // check even odd for binary
        int lsb = binary % 10;
        if (lsb == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {   // check even odd for decimal
        std::cout << "Number is Not Binary\n";
        if (binary % 2 == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int long long numIn_memory(int num){
    int long long result =0;
    if(num >= 0){
        /*
            for positive number - It convert into binary and then store in memory.
            I : change into binary
            II : store in memory
        */
        result = decimal_to_binary(num);
    }
    else{
        /*
            for negative number - It first convert into 2's compliment and then sotre in memory.
            I : change into binary.
            II : add MSB = 0 before III or MSB = 1 after III.
            III : 1's compliment of number.
            IV : 2's compliment of number.
            V : Store in memory.
        */
        int binary = decimal_to_binary(num);    // binary form of digit value
        int power = 1;  // to add MSB
        while(binary > 0){  // 1's compliment
            int digit = binary % 10;
            if(digit == 1){
                digit = 0;
            }
            else{
                digit = 1;
            }
            result += (digit*power);
            binary /= 10;
            power *= 10;
        }
        result += power; // now MSB = 1 added;
        result = binarySum(result,1,0); // 2's compliment
    }
    return result;
}

