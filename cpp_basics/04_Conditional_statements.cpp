/*
    Conditional Statements are used to perform different actions based on different conditions. In C++, we have the following conditional statements:
    1. if statement
    2. if...else statement
    3. if...else if...else statement
    4. switch statement
    5. ternary operator (?:)
*/

#include <iostream>
using namespace std;
int main() {
    char ch1;
    std::cout << "\nEnter a character for checking case: ";
    std::cin >> ch1;

    // if statement - check if a char is uppercase or lowercase (using ascii values)
    if(ch1 >= 65 && ch1 <= 90) {
        std::cout << "Character is uppercase\n";
    }
    else if(ch1 >= 97 && ch1 <= 122) {
        std::cout << "Character is lowercase\n";
    }
    else {
        std::cout << "Character is not an alphabet\n";
    }

    // check if a character is a uppercase or lowercase letter (without using ascii values)
    cout << "\nChecking without using ascii values" << endl;
    if(ch1 >= 'A' && ch1 <= 'Z') {
        std::cout << "Character is uppercase\n";
    }
    else if(ch1 >= 'a' && ch1 <= 'z') {
        std::cout << "Character is lowercase\n";
    }
    else {
        std::cout << "Character is not an alphabet\n";
    }

    // if...else statement - check if number is even or odd
    int num2;
    std::cout << "\nEnter a number for checking if it's even or odd: ";
    std::cin >> num2;
    if(num2 % 2 == 0) {
        std::cout << "Number is even\n";
    }
    else {
        std::cout << "Number is odd\n";
    }

    // switch statement - check grade based on marks
    int marks;
    std::cout << "\nEnter your marks for grade checking: ";
    std::cin >> marks;
    switch(marks / 10) {
        case 10:
        case 9:
            std::cout << "Grade: A\n";
            break;
        case 8:
            std::cout << "Grade: B\n";
            break;
        case 7:
            std::cout << "Grade: C\n";
            break;
        case 6:
            std::cout << "Grade: D\n";
            break;
        default:
            std::cout << "Grade: F\n";
    }

    // ternary operator - check if number is positive or negative
    int num3;
    std::cout << "\nEnter a number for checking if it's positive or negative using ternary operator: ";
    std::cin >> num3;
    std::string result = (num3 > 0) ? "Number is positive" : (num3 < 0) ? "Number is negative" : "Number is zero";
    std::cout << result << "\n";

    std::cout << "\nEnd of conditional statement examples. Thank you!\n";
    return 0;
}