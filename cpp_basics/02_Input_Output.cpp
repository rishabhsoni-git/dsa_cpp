#include <iostream>

int main(){

    // To put output on standard device (display) we use 'cout' , a global variable.
    std::cout << "Hello, coders!\n";
    
    // 'std' is the standard namespace; here << inserts text into the output stream.
    // '\n' is used to enter a next line , instead we can use 'endl'
    std::cout << "This is another way to insert next line" << std::endl;

    /* The insertion operator sends content from the program to an output stream. */

    // To get input from user from standard device (keyboard) we use 'cin', a global variable.
    // first we create memory or variable in data will be store
    int space;
    std::cout << "Enter an integer: ";
    std::cin >> space;

    /* The extraction operator reads from the input stream into 'space'. */
    // We use single statement to display multiple input
    std::cout << "Outputs are " << space << '\t' << "999" << std::endl;

    // we not prefer single statement for taking input, it may take wrong input
    
    return 0;
}