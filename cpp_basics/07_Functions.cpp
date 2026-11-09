/*  Theory: Functions in C++

    Functions are a block of code that performs a specific task.
    Functions can take inputs, perform operations, and return outputs. 
    In C++, functions can be defined with or without parameters and can return values of various data types.

    There are two types of functions in C++:
    1. User-defined functions: 
    These are functions that are defined by the user to perform specific tasks. They can be called multiple times in a program but not in other programs.
    2. Library functions: 
    These are pre-defined functions provided by C++ standard libraries. They can be used to perform common tasks without the need to write code from scratch.

    Components of a function:
    1. Function Declaration (or Prototype): This tells the compiler about the function's name, return type, and parameters. It is usually placed at the beginning of the program or in a header file.
    2. Function Definition: This contains the actual body of the function, where the operations are performed.
    3. Function Call: This is where the function is invoked in the program. When a function is called, the control of the program is transferred to the function's definition, and after the function completes its task, control returns to the point where the function was called.
    4. Return Statement: This is used to return a value from the function to the calling code. The return type of the function must match the type of value being returned. If a function does not return a value, it is declared with a return type of 'void'.
*/

#include <iostream>
using namespace std;

// Function Declaration
bool isNonNegative(int n);
int minimum(int a, int b);
int maximum(int a, int b);
long long sumToN(int n);        // calculate sum of numbers from 1 to n.
long long factorial(int n);     // calculate n factorial for n in [0, 20].
int sumDigits(int n);           // calculate sum of all digits in a number.
int magicNum(int n);            // calculate sum of digits till only single digit number appear.
long long nCr(int n, int r);    // calculate the binomial coefficient for n and r
void binomialcoffs(int n);      // Print Binomial cofficient for n and for all (r<n).

// ********************************************************************
/*
    Main function : It is the entry point of the program where execution starts. It is called by the operating system when the program is run. The main function can return an integer value to indicate the success or failure of the program's execution.
*/
int main() {
    // Function calls
    std::cout << "NOTE: Wrong input will return 0 or -1 for some functions.\n";

    std::cout << "Enter a number to check if it's non-negative: ";
    int num;
    std::cin >> num;
    if (isNonNegative(num)) {
        std::cout << num << " is non-negative.\n";
    } else {
        std::cout << num << " is negative.\n";
    }

    std::cout << "\nEnter two numbers to find the minimum and maximum: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "Minimum: " << minimum(a, b) << "\n";
    std::cout << "Maximum: " << maximum(a, b) << "\n";

    std::cout << "\nEnter a number to calculate the sum of numbers from 1 to n: ";
    std::cin >> num;
    std::cout << "Sum from 1 to " << num << ": " << sumToN(num) << "\n";

    std::cout << "\nEnter a number (0-20) to calculate its factorial: ";
    std::cin >> num;
    std::cout << "Factorial of " << num << ": " << factorial(num) << "\n";

    std::cout << "\nEnter a number to calculate the sum of its digits: ";
    std::cin >> num;
    std::cout << "Sum of digits of " << num << ": " << sumDigits(num) << "\n";

    std::cout << "\nEnter your DOB to calculate your magic number: ";
    std::cin >> num;
    std::cout << "Magic number: " << magicNum(num) << "\n";

    std::cout << "\nEnter n and r to calculate nCr: ";
    int r;
    std::cin >> num >> r;
    std::cout << "nCr(" << num << ", " << r << "): " << nCr(num, r) << "\n";

    std::cout << "\nEnter n to print all binomial coefficients for n: ";
    std::cin >> num;
    binomialcoffs(num);

    std::cout << "\nAll functions executed successfully!\nThank you for using the function demonstration program.\n";
    return 0;
}
// ********************************************************************

// Function Definitions

bool isNonNegative(int n) {
    return n >= 0;
}

int minimum(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int maximum(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

long long factorial(int n) {
    if (n < 0 || n > 20) {
        return 0;
    }
    long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

long long sumToN(int n) {
    if (n < 0) {
        return 0;
    }
    return static_cast<long long>(n) * (n + 1LL) / 2;
}

int sumDigits(int n) {
    long long value = n;
    if (value < 0) {
        value = -value;
    }
    int total = 0;
    while (value > 0) {
        total += static_cast<int>(value % 10);
        value /= 10;
    }
    return total;
}

int magicNum(int n) {
    long long value = n;
    if (value < 0) {
        value = -value;
    }
    while (value >= 10) {
        int digitSum = 0;
        while (value > 0) {
            digitSum += static_cast<int>(value % 10);
            value /= 10;
        }
        value = digitSum;
    }
    return static_cast<int>(value);
}

long long nCr(int n, int r) {
    if (n < 0 || n > 20 || r < 0 || r > n) {
        return -1;
    }
    r = (r < n - r) ? r : n - r;
    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result = result * (n - r + i) / i;
    }
    return result;
}

void binomialcoffs(int n) {
    if (n < 0 || n > 20) {
        std::cout << "n must be between 0 and 20.\n";
        return;
    }
    for (int r = 0; r <= n; ++r) {
        std::cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << '\n';
    }
}