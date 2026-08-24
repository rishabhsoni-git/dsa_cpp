#include <iostream>

// Operators use to perform various operations.
/*
    Kind of Operators -
        1. Unary Operators (!, ++, --)
        2. Binary Operators (*, /, %, +, -)
        3. Logical Operators (||, && , >>, << )
        4. Bit-wise Operators (&, |, ^)
        5. Comperision Operators (<, <=, >, >=, ==, !=)
        6. Assignmen Operator (=).
*/

int main(){
    
    std::cout << "5*3+7/2-5%2*8 = " << 5*3+7/2-5%2*8 << std::endl; // solve using operator(op) precedence.

    int x = 10, y = 10; // assignment op

    std::cout << "x++ = " << x++ << "  ++y =  " << ++y << std::endl; // z = x++ (z = x then x = x + 1)

    x = 10; y = 10; // same value

    std::cout << "x-- = " << x-- << "  --y =  " << --y << std::endl; // z = --x (x = x - 1 then z = x)

    std::cout << "!True = " << !true << std::endl; // -> false

    std::cout << "!False = " << !false << std::endl; // -> true

    std::cout << (true && false) << std::endl; // logical AND -> false

    std::cout << (true || false) << std::endl; // logical OR -> true

    std::cout << (6 == 9) << std::endl; // compression op -> false = 0

    std::cout << (6 < 9) << std::endl; // -> true = 1

    std::cout << (6 >= 6) << std::endl; // -> true = 1

    std::cout << (6 >= 9) << std::endl; // -> false = 0

    std::cout << (13 & 7) << std::endl; // -> (1101 & 0111 = 0101) = 5  bitwise AND

    std::cout << (13 | 7) << std::endl; // -> (1101 & 0111 = 1111) = 15  bitwise OR

    std::cout << (13 ^ 7) << std::endl; // -> (1101 & 0111 = 1010) = 10  bitwise XOR

    std::cout << (5 << 3) << std::endl; // -> (5*2*2*2) = 40  bitwise left shift op

    std::cout << (5 >> 1) << std::endl; // -> (5/2) = <int>2.5 = 2  bitwise right shift op

    return 0;
}