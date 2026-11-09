// Basic Structure of the program

// This is single line comment
/* 
    This is 
    Multi line 
    Comment
*/

// Comments are ignored by the compiler and help explain the program to readers.
#include <iostream>
#include <string>
/*
    #       -> starts a preprocessor directive handled before compilation.
    include -> requests declarations from a header.
    <...>   -> names a standard/system header.
    iostream -> declares standard input/output stream facilities such as cin and cout.

*/
using namespace std;
/*
    using   -> introduces a name or namespace into the current scope
    namespace -> a named scope that groups related identifiers and avoids name collisions.
    std     -> the namespace containing the C++ standard library names.
    
    Example - Take input using library function cin and print it on screen using cout
        ** Without "using namespace std;"
        std::cin >> variable_name;
        std::cout << variable_or_string << std::endl;

        ** With "using namespace std;"
        cin >> variable_name;
        cout << variable_or_string << endl;
*/

int main(){
    /* 
        This is the program entry point called by the C++ runtime.
        Execution of this program starts in main().
        Program we need to execute is written in this block.
    */


    // std::cout is the standard output stream (made available here without the std:: prefix).

    cout << "Hello, World!"; //string

    int x = 10; // variable
    cout << x ;

    cout << endl; // put output in next line

    cout << x + 5 << endl; // perform operation direct in cout.

    cout << 'A' << " String " << 3 << true << endl; // multi-type content.

    // std::cin is the standard input stream.

    // Create a variable to store the input value.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string name;
    char grade;
    float marks;

    cout << "Enter name, grade and marks - \n";
    // use seprate statement otherwise it give wrong output
    cin >> name;
    cin >> grade;
    cin >> marks;
    cout << "Hello " << name << "\nYour marks " << marks << " reflects your grade " << grade << endl;

    return 0;
    /*
        return 0; 
        -> Every function take some input, perform operation and give/return an output.
        -> The type or kind or output it generate know as 'return type' describe before function.
            Here 'int main(){}', 'int' is return type of main() function.
        -> The '0' zero, an integer, tell compiler to program executed successful.
        -> If any runtime error occure, they return different value and compiler detect error. 
    */
}