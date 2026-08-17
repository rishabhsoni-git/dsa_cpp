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
bool isPositive(int n);
int min(int a, int b);
int max(int a, int b);
int sumToN(int n);              // calculate sum of numbers from 1 to n.
long long factorial(int n);     // calculate n factorial.
int sumDigits(int n);           // calculate sum of all digits in a number.
int magicNum(int n);            // calculate sum of digits till only single digit number appear.
int nCr(int n, int r);          // claculate Binomial cofficient for n and r
void binomialcoffs(int n);      // Print Binomial cofficient for n and for all (r<n).

// ********************************************************************
/*
    Main function : It is the entry point of the program where execution starts. It is called by the operating system when the program is run. The main function can return an integer value to indicate the success or failure of the program's execution.
*/
int main() {
    // Function calls
    std::cout << "NOTE: Wrong input will return 0 or -1 for some functions.\n";

    std::cout << "Enter a number to check if it's positive: ";
    int num;
    std::cin >> num;
    if (isPositive(num)) {
        std::cout << num << " is positive.\n";
    } else {
        std::cout << num << " is not positive.\n";
    }

    std::cout << "\nEnter two numbers to find the minimum and maximum: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "Minimum: " << min(a, b) << "\n";
    std::cout << "Maximum: " << max(a, b) << "\n";

    std::cout << "\nEnter a number to calculate the sum of numbers from 1 to n: ";
    std::cin >> num;
    std::cout << "Sum from 1 to " << num << ": " << sumToN(num) << "\n";

    std::cout << "\nEnter a number to calculate its factorial: ";
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

bool isPositive(int n) {
    if (n >= 0) {
        return true;
    }
    return false;
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

long long factorial(int n) {
    if (isPositive(n)) {
        long long fact = 1;
        for (int i = 0; i < n; i++) {
            fact *= (i + 1);
        }
        return fact;
    }
    return 0;
}

int sumToN(int n) {
    if (isPositive(n)) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (i + 1);
        }
        return sum;
    }
    return 0;
}

int sumDigits(int n) {
    int sum = 0, r = 0;
    while (n > 0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}

int magicNum(int n) {
    while (n >= 10) {
        n = sumDigits(n);   // magic() function call sumDigits() function which will return sum of digits to magic() function. 
    }
    return n;
}

int nCr(int n, int r) {
    if (isPositive(n) && isPositive(r) && r <= n) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
    return -1;  // return -1 if n or r is negative or r > n
}

void binomialcoffs(int n) {
    if (isPositive(n)) {
        for (int r = 0; r <= n; r++) {
            printf("nCr(%d, %d) = %d\n", n, r, nCr(n, r));  // calling nCr() function to calculate Binomial cofficient for n and r.
        }
    }
    return;  // return -1 if n is negative
}