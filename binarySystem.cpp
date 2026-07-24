#include <iostream>
using namespace std;

string decimal_to_binary(int decimal);
int binary_to_decimal(const string binary);
bool isBinary(const string binary);     // check Is a string is binary or not
bool isOdd_binary(const string binary); // check Is a binary num is odd or even
string insideMemory(const int decimal); // convert number(either +ve or -ve) in formate as store in memory.
string oneCompliment(string binary);    // calculate 1's compliment for -ve number.
string twoCompliment(string binary);    // calculate 2's compliment for -ve number.
string binarySum(string a, string b);

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

    cout << "-- Addition --\nEnter two binary number : ";
    string a,b;
    cin >> a;
    cin >> b;
    cout << "Sum = " << binarySum(a,b) << endl;
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
string binarySum(string a, string b)
{
    if(!isBinary(a) || !isBinary(b)){
        cout << "Number must be binary for addition\n";
        exit(0);
    }
    int lenA = a.size();
    int lenB = b.size();
if(lenA != lenB){
    if(lenA == min(lenA,lenB)){
        string prefix(lenB-lenA, '0');
        a = prefix + a;
        lenA = a.size();
    }
    else{
        string prefix(lenA-lenB, '0');
        b = prefix + b;
        lenB = b.size();
    }
}
    string result;
    char carry = '0';
    for (int i = lenA-1; i>=0; i--)
    {
        char sum;
        if (carry == '0') // carry independ
        {
            if(a[i] == '1' && b[i]=='1')
            {
                carry = '1';
                sum = '0';
            }
            else if(a[i] == '0' && b[i]=='0')
            {
                carry = '0';
                sum = '0';
            }
            else{
                carry = '0';
                sum = '1';
            }
        }
        else //carry depended
        {
            if(a[i] == '1' && b[i]=='1')
            {
                carry = '1';
                sum = '1';
            }
            else if(a[i] == '0' && b[i]=='0')
            {
                carry = '0';
                sum = '1';
            }
            else{
                carry = '1';
                sum = '0';
            }
        }
        result = sum + result;
    }
    return carry + result;
}