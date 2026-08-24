
// This is single line comment
/* 
    This is 
    Multi line 
    Comment
*/

#include <iostream>
/*
    #       -> pre-processor directive, use to tell compiler to first perform this task before compilation.
    include -> use to include or connect libraries to our program.
    <...>   -> describe it is the inbuild library.
    iostream -> standard library has function like cin, cout and many more.

*/
using namespace std;
/*
    using   -> indicate we use this feature in our program
    namespace -> a type of file which help to make easy to write code.
    std     -> this is the file which required as prefix before using 'std' library function.
    
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
        This is main function which directly call by processor.
        Execution of program start from this function.
    */


    // To put/print output at Standard Device - Screen use 'std::cout' global object

    cout << "Hello, World!"; //string

    int x = 10; // variable
    cout << x ;

    cout << endl; // put output in next line

    cout << x + 5 << endl; // perform operation direct in cout.

    cout << 'A' << " String " << 3 << true << endl; // multi-type content.

    // To taking input from Standard Device - Keyboard use 'std::cin' global object

    //first create variable to put inputed value in it.
    int num;
    cin >> num; // You need to enter a number - no prompt arrear by default.

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