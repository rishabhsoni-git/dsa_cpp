#include <iostream>
int main(){
    /* 
        Variable : Memory blocks to store data.
        Data Type : Type of data which store.
            int - integer(4 byte)
            float - decimal(4 byte)
            char - character(1 byte)
            bool - boolean (1 bit - true/false)
            double - decimal(8 byte)
            long long - integer(8 byte)
            *std::string - string data type but actually it's a char-array.
            
        Data type modifier : use to change properties of data type
            long - to store large value (4-byte or 8-byte)
            short - to store small value (2-byte)
            signed - to store +ve as well as -ve values (int : -2^31 to 2^31-1)
            unsigned - to store only +ve values (int : 0 to 2^32-1)

        --- Char Data Type ---
        character -> ASCII value -> Binary -> stored in memory
        for example, 'A' -> 65 -> 01000001;
    */

    int short unsigned age = 21;
    std::cout << "Size of age variable is " << sizeof(age) << std::endl;

    char opcode = '+';
    std::cout << "Perform " << opcode << " operation\n";

    float price = 99.9;
    std::cout << "Price of Tshirt = " << price << std::endl;

    bool sign = true;
    std::cout << "Is your number is positive : " << sign << std::endl;

    long long thirteenDigit = 1000000000000;
    std::cout << thirteenDigit << std::endl;

    unsigned int num = -10;
    std::cout << "Assigning -10 value to unsigned int 'num'.\nNow check its value in memory, num = " << num << std::endl;

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