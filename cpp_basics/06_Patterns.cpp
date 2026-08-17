#include <iostream>
using namespace std;
int main()
{
    // Patterns -

    int n;
    cout << "\nEnter number of rows: ";
    cin >> n;
//----------------------------------
    /* n = 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */
    std::cout << "\nPattern 1:\n";
    for(int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 4
     * * * *
     * * * *
     * * * *
     * * * *
     */
    std::cout << "\nPattern 2:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 3
    A B C
    A B C
    A B C
    */
    std::cout << "\nPattern 3:\n";
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << ' ';
            ch++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 3
    1 2 3 
    4 5 6 
    7 8 9 
    */
    std::cout << "\nPattern 4:\n";
    int num1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num1 << ' ';
            num1++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 3
    A B C 
    D E F 
    G H I  
    */
    std::cout << "\nPattern 5:\n";
    char ch1 = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch1 << ' ';
            ch1++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    *
    * *
    * * *
    * * * *
    * * * * * 
    */
    std::cout << "\nPattern 6:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    1
    22
    333
    4444
    55555
    */
    std::cout << "\nPattern 7:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << i+1;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    1
    12
    123
    1234
    12345 
    */
    std::cout << "\nPattern 8:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << j+1;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    A
    B B
    C C C
    D D D D
    E E E E E 
    */
    std::cout << "\nPattern 9:\n";
    char ch2 = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << ch2 << ' ';
        }
        ch2++;
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    A
    A B
    A B C
    A B C D
    A B C D E 
    */
    std::cout << "\nPattern 10:\n";
    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < i+1; j++){
            cout << ch << ' ';
            ch++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 5
    A
    B C
    D E F
    G H I J
    K L M N O 
    */
    std::cout << "\nPattern 11:\n";
    char ch3 = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << ch3 << ' ';
            ch3++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 4
    1
    2 1 
    3 2 1
    4 3 2 1
    */
    std::cout << "\nPattern 12:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << (i+1) - j << ' ';
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 3
    1
    2 3 
    4 5 6 
    */
    std::cout << "\nPattern 13:\n";
    int num2 = 1;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j > 0; j--){
            cout << num2 << ' ';
            num2++;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 4
    A 
    B A
    C B A
    D C B A
    */
    std::cout << "\nPattern 14:\n";
    for(int i=0; i<n; i++){
        int ch = 65;
        for(int j=0; j<i+1; j++){
            cout << char(ch+i) << ' ';
            ch--;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 4    Other method
    A 
    B A
    C B A
    D C B A
    */
    std::cout << "\nPattern 15:\n";
    for(int i=n; i>0; i--){
        int ch = 65;
        for(int j=0; j<=n-i; j++){
            cout << char(ch+(n-i)) << ' ';
            ch--;
        }
        cout << endl;
    }
//-----------------------------------
    /* n = 4    Another method
    A 
    B A
    C B A
    D C B A
    */
    std::cout << "\nPattern 16:\n";
    for(int i=n; i>0; i--){
        int ch = 65;
        for(int j=n-i; j>=0; j--){
            cout << char(ch + (n-i)) << ' ';
            ch--;
        }
        cout << endl;
    }
//-----------------------------------

std::cout << "\nAll patterns printed successfully!\n";
std::cout << "Thank you for using the pattern generator.\n";

// ************************************
    return 0;
}