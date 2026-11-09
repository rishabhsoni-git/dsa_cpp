/*
    loops are used to execute a block of code repeatedly until a certain condition is met. In C++, there are several types of loops, including:
    1. for loop
    2. while loop
    3. do...while loop
*/

#include <iostream>
int main() {
    
    // for loop - print even numbers from 2 to 10
    std::cout << "\nEven numbers from 2 to 10: ";
    for(int i = 2; i <= 10; i += 2) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // for loop - check if a number is prime or not
    int num;
    std::cout << "\nEnter a number for prime checking: ";
    std::cin >> num;
    bool isPrime = num >= 2;
    for(int i = 2; isPrime && i <= num / i; ++i) {
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        std::cout << num << " is a prime number\n";
    }
    else {
        std::cout << num << " is not a prime number\n";
    }

    // while loop - calculate the sum of numbers from 1 to n
    std::cout << "\nEnter a number for sum calculation (1 to n): ";
    int n;
    std::cin >> n;
    long long sum = 0;
    long long j = 1;
    while(j <= n) {
        sum += j;
        j++;
    }
    std::cout << "Sum: " << sum << "\n";

    // for loop - calculate factorial of a number (using a bounded range)
    long long fact = 1;
    int k;
    std::cout << "\nEnter a number for factorial calculation: ";
    std::cin >> k;
    if (k < 0 || k > 20) {
        std::cout << "Factorial is demonstrated only for values from 0 to 20.\n";
    } else {
        for (int factor = 2; factor <= k; ++factor) {
            fact *= factor;
        }
        std::cout << "Factorial: " << fact << "\n";
    }

    // nested loops - print a multiplication table
    std::cout << "\nMultiplication Table:\n";
    for(int i = 1; i <= 10; ++i) {
        for(int j = 1; j <= 10; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << "\n";
    }

    // break statement - exit a loop when a certain condition is met
    std::cout << "\nNumbers from 1 to 10 (break at 5): ";
    for(int i = 1; i <= 10; ++i) {
        if(i == 5) {
            break; // exit the loop when i is 5
        }
        std::cout << i << " ";
    }
    std::cout << "\n";
    // continue statement - skip the current iteration of a loop when a certain condition is met
    std::cout << "\nNumbers from 1 to 10 (skip 5): ";
    for(int i = 1; i <= 10; ++i) {
        if(i == 5) {
            continue; // skip the current iteration when i is 5
        }
        std::cout << i << " ";
    }
    std::cout << "\n";

    // for-each loop, we can also use the range-based for loop (introduced in C++11) to iterate over elements of a container (like an array or vector)
    std::cout << "\nElements of array using for-each loop: ";
    int arr[] = {1, 2, 3, 4, 5};
    for(int x : arr) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    // fibonacci series using loops
    long long secondlast = 0, last = 1, present;
    int count;
    std::cout << "\nEnter the number of terms for Fibonacci series: ";
    std::cin >> count;
    std::cout << "\nFibonacci Series: ";
    if (count < 0 || count > 93) {
        std::cout << "Choose between 0 and 93 terms.\n";
        count = 0;
    }
    if (count > 0) {
        std::cout << secondlast;
    }
    if (count > 1) {
        std::cout << " " << last;
    }
    for(int i = 2; i < count; ++i) {
        present = secondlast + last;
        std::cout << " " << present;
        secondlast = last;
        last = present;
    }
    std::cout << "\n";

    // reverse a number using loops
    int number;
    long long reversed = 0;
    std::cout << "\nEnter a number to reverse: ";
    std::cin >> number;
    const bool wasNegative = number < 0;
    int remaining = number;
    while(remaining != 0) {
        int digit = remaining % 10;
        reversed = reversed * 10 + digit;
        remaining /= 10;
    }
    std::cout << "Reversed Number: " << (wasNegative ? -reversed : reversed) << "\n";

    // sum of digits of a number using loops
    int numToSum;
    long long remainingDigits;
    int sumOfDigits = 0;
    std::cout << "\nEnter a number to find the sum of its digits: ";
    std::cin >> numToSum;
    remainingDigits = numToSum;
    if (remainingDigits < 0) {
        remainingDigits = -remainingDigits;
    }
    while(remainingDigits != 0) {
        sumOfDigits += static_cast<int>(remainingDigits % 10);
        remainingDigits /= 10;
    }
    std::cout << "Sum of digits: " << sumOfDigits << "\n";

    std::cout << "\nEnd of loop examples. Thank you!\n";
    
    return 0;
}
