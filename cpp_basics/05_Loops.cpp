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
    bool isPrime = true;
    for(int i = 2; i*i <= num; ++i) {
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime && num >= 1) {
        std::cout << num << " is a prime number\n";
    }
    else {
        std::cout << num << " is not a prime number\n";
    }

    // while loop - calculate sum of numbers from 1 to 5
    std::cout << "\nEnter a number for sum calculation (1 to n): ";
    int n;
    std::cin >> n;
    int sum = 0;
    int j = 1;
    while(j <= n) {
        sum += j;
        j++;
    }
    std::cout << "Sum: " << sum << "\n";

    // do...while loop - calculate factorial of a number
    int fact = 1;
    int k;
    std::cout << "\nEnter a number for factorial calculation: ";
    std::cin >> k;
    do {
        fact *= k;
        k--;
    } while(k > 0);
    std::cout << "Factorial: " << fact << "\n";

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
    int secondlast = 0, last = 1, present, count;
    std::cout << "\nEnter the number of terms for Fibonacci series: ";
    std::cin >> count;
    std::cout << "Fibonacci Series: " << secondlast << " " << last << " ";
    for(int i = 2; i < count; ++i) {
        present = secondlast + last;
        std::cout << present << " ";
        secondlast = last;
        last = present;
    }
    std::cout << "\n";

    // reverse a number using loops
    int number, reversed = 0;
    std::cout << "\nEnter a number to reverse: ";
    std::cin >> number;
    while(number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    std::cout << "Reversed Number: " << reversed << "\n";

    // sum of digits of a number using loops
    int numToSum, sumOfDigits = 0;
    std::cout << "\nEnter a number to find the sum of its digits: ";
    std::cin >> numToSum;
    while(numToSum != 0) {
        sumOfDigits += numToSum % 10;
        numToSum /= 10;
    }
    std::cout << "Sum of digits: " << sumOfDigits << "\n";

    std::cout << "\nEnd of loop examples. Thank you!\n";
    
    return 0;
}
