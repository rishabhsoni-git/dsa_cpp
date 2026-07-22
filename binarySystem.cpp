#include <iostream>
using namespace std;

string decimal_to_binary(int decimal);
int binary_to_decimal(const string binary);
bool isBinary(const string binary);     // check Is a string is binary or not
bool isOdd_binary(const string binary); // check Is a binary num is odd or even
string insideMemory(const int decimal); // convert number(either +ve or -ve) in formate as store in memory.
string oneCompliment(string binary);    // calculate 1's compliment for -ve number.
string twoCompliment(string binary);    // calculate 2's compliment for -ve number.

// ----------------------------
int main()
{
    int decimal;
    string binary;
    cout << "Enter Decimal no : ";
    cin >> decimal;

    if (decimal >= 0)
    {
        binary = decimal_to_binary(decimal);
        cout << "-> Number is Positive\n";
        cout << "-> Binary : " << binary << endl;
        cout << "-> Number in memory : " << insideMemory(decimal) << endl;
        if (isOdd_binary(binary))
        {
            cout << "-> Number is Odd \n";
        }
        else
        {
            cout << "-> Number is Even \n";
        }
    }
    else
    {
        binary = decimal_to_binary(decimal * (-1));
        cout << "-> Number is Negative\n";
        cout << "-> Binary of magnitude : " << binary << endl;
        cout << "-> 1's compliment : " << "1" + oneCompliment(binary) << endl;
        cout << "-> Number in memory (2's compliment) : " << insideMemory(decimal) << endl;
        if (isOdd_binary(binary))
        {
            cout << "-> Number is Odd \n";
        }
        else
        {
            cout << "-> Number is Even \n";
        }
    }
    return 0;
}
//-------------------------------

bool isBinary(const string binary)
{
    int length = binary.size();
    for (int i = 0; i < length; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            return false;
        }
    }
    return true;
}
bool isOdd_binary(const string binary)
{
    if (!isBinary(binary))
    {
        cout << "Number is not binary! \n Error occure while checking odd or even" << endl;
        exit(0);
    }

    int lsb = binary.size() - 1;
    if (binary[lsb] == '1')
    {
        return true;
    }
    return false;
}
string decimal_to_binary(int decimal)
{
    if (decimal < 0)
    {
        cout << "Number is negative!\n";
        exit(0);
    }

    string binary;
    int reminder = 0;
    char bit;
    while (decimal > 0)
    {
        // logic
        reminder = decimal % 2;
        if (reminder == 1)
        {
            bit = '1';
        }
        else
        {
            bit = '0';
        }
        binary = bit + binary;
        // updation
        decimal /= 2;
    }
    if (!isBinary(binary))
    {
        cout << "Errer occure in decimal to binary conversion!\n";
        exit(0);
    }
    return binary;
}
int binary_to_decimal(const string binary)
{
    if (!isBinary(binary))
    {
        cout << "Number is not binary \nErrer occure in binary to decimal conversion!\n";
        exit(0);
    }
    int decimal = 0, reminder = 0;
    int length = binary.size();
    int power = 1; // 1, 2, 4, 8, 16.....

    for (int i = length - 1; i >= 0; i--)
    {
        // logic
        if (binary[i] == '1')
        {
            reminder = 1;
        }
        else
        {
            reminder = 0;
        }
        decimal += (reminder * power);

        // updation
        power *= 2;
    }
    return decimal;
}
string oneCompliment(string binary)
{
    int length = binary.size();
    if (length > 32)
    {
        cout << "Length of Binary must be less then or equal to 32.\n";
        exit(0);
    }
    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            binary[i] = '0';
        }
        else
        {
            binary[i] = '1';
        }
    }
    return binary;
}
string twoCompliment(string binary)
{
    int length = binary.size();
    if (length > 32)
    {
        cout << "Length of Binary must be less then or equal to 32.\n";
        exit(0);
    }
    binary = oneCompliment(binary); // 1's compliment

    char carry = '1', sum = '0';

    for (int i = binary.size() - 1; i >= 0; i--)
    {
        char bit = binary[i];
        if (bit == '1' && carry == '1')
        {
            sum = '0';
            carry = '1';
        }
        else if (bit == '0' && carry == '0')
        {
            sum = '0';
            carry = '0';
        }
        else
        {
            sum = '1';
            carry = '0';
        }
        binary[i] = sum;
    }
    return binary;
}
string insideMemory(const int decimal)
{
    string binary;
    if (decimal < 0)
    {
        int temp = decimal * (-1);
        binary = decimal_to_binary(temp);
    }
    else
    {
        binary = decimal_to_binary(decimal);
    }

    int length = binary.size();
    string longBinary(32 - length, '0');
    longBinary = longBinary + binary;

    if (decimal < 0)
    {
        return twoCompliment(longBinary);
    }
    else
    {
        return longBinary;
    }
}

// int binarySum(int a, int b, int carry)
// {
//     /*  0+0 = 0 | 0+1 = 1 | 1+0 = 1 | (1+1 = 0 & carry = 1)  */

//     if (a == 0 && b == 0)
//     { // end point
//         return carry;
//     }
//     int sum = 0, ans = 0;
//     int lsbA = a % 10;
//     int lsbB = b % 10;

//     if (carry == 0)
//     {
//         // carry independ
//         if (lsbA == 1 && lsbB == 1)
//         {
//             carry = 1;
//             ans = 0;
//         }
//         else
//         {
//             carry = 0;
//             ans = lsbA + lsbB;
//         }
//     }
//     else
//     {
//         // carry depended
//         if (lsbA == 1 && lsbB == 1)
//         {
//             carry = 1;
//             ans = 1;
//         }
//         else if (lsbA == 0 && lsbB == 0)
//         {
//             carry = 0;
//             ans = 1;
//         }
//         else
//         {
//             carry = 1;
//             ans = 0;
//         }
//     }
//     sum = (binarySum(a / 10, b / 10, carry) * 10) + ans; // recursive condition
//     return sum;
// }
// long long numIn_memory(int num)
// {
//     long long result = 0;
//     if (num >= 0)
//     {
//         /*
//             for positive number - It convert into binary and then store in memory.
//             I : change into binary
//             II : store in memory
//         */
//         result = decimal_to_binary(num);
//     }
//     else
//     {
//         /*
//             for negative number - It first convert into 2's compliment and then sotre in memory.
//             I : change into binary.
//             II : add MSB = 0 before III or MSB = 1 after III.
//             III : 1's compliment of number.
//             IV : 2's compliment of number.
//             V : Store in memory.
//         */
//         int binary = decimal_to_binary(num); // binary form of digit value
//         int power = 1;                       // to add MSB
//         while (binary > 0)
//         { // 1's compliment
//             int digit = binary % 10;
//             if (digit == 1)
//             {
//                 digit = 0;
//             }
//             else
//             {
//                 digit = 1;
//             }
//             result += (digit * power);
//             binary /= 10;
//             power *= 10;
//         }
//         result += power;                  // now MSB = 1 added;
//         result = binarySum(result, 1, 0); // 2's compliment
//     }
//     return result;
// }
