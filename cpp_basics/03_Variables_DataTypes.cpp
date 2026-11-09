#include <iostream>
int main(){
    /* 
        Variable : variables are Memory blocks to store data.

        Data Type : It is the Type of data who store in variable.

        Common Data types in C++ are - 
            int - integer (size is implementation-dependent; commonly 4 bytes)
            float - floating-point type (commonly 4 bytes)
            char - character type (exactly 1 byte)
            bool - boolean type (sizeof(bool) is commonly 1 byte)
            double - floating-point type (commonly 8 bytes)
            long long - integer type (at least 64 bits)
            std::string - string data type but actually it's a char-array.
            
        Data type modifier : use to change properties of data type
            long - to store large value (4-byte or 8-byte)
            short - to store small value (2-byte)
            signed - to store +ve as well as -ve values (int : -2^31 to 2^31-1)
            unsigned - to store only +ve values (int : 0 to 2^32-1)

        --- Char Data Type ---
        character -> execution-character-set value -> stored representation
        On ASCII-compatible systems, for example, 'A' has value 65.
    */

    unsigned short age = 21;
    std::cout << "Size of age variable is " << sizeof(age) << std::endl;

    char opcode = '+';
    std::cout << "Perform " << opcode << " operation\n";

    float price = 99.9;
    std::cout << "Price of Tshirt = " << price << std::endl;

    bool sign = true;
    std::cout << "Is your number is positive : " << sign << std::endl;

    long long thirteenDigit = 1000000000000LL;
    std::cout << thirteenDigit << std::endl;

    unsigned int num = -10; // Unsigned arithmetic wraps modulo 2^N; it does not store a negative value.
    std::cout << "Converting -10 to unsigned gives " << num << " on this platform.\n";

    std::cout << "int size = " << sizeof(int) << std::endl;
    std::cout << "long size = " << sizeof(long) << std::endl;
    std::cout << "long long size = " << sizeof(long long) << std::endl;
    std::cout << "short size = " << sizeof(short) << std::endl;
    std::cout << "float size = " << sizeof(float) << std::endl;
    std::cout << "double size = " << sizeof(double) << std::endl;
    std::cout << "signed size = " << sizeof(signed) << std::endl;
    std::cout << "unsigned size = " << sizeof(unsigned) << std::endl;
    std::cout << "char size = " << sizeof(char) << std::endl;
    std::cout << "bool size = " << sizeof(bool) << std::endl;

    return 0;
}