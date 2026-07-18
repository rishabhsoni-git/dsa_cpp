#include <iostream>
using namespace std;
int main()
{
    // Patterns -

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
//----------------------------------
    /* n = 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */
    // for(int i=0; i<n; i++){
    //     for( int j=0; j<n; j++){
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 4
     * * * *
     * * * *
     * * * *
     * * * *
     */
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 3
    A B C
    A B C
    A B C
    */
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << ' ';
    //         ch++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 3
    1 2 3 
    4 5 6 
    7 8 9 
    */
    // int num1 = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num1 << ' ';
    //         num1++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 3
    A B C 
    D E F 
    G H I  
    */
    // char ch1 = 65;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch1 << ' ';
    //         ch1++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    *
    * *
    * * *
    * * * *
    * * * * * 
    */
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    1
    22
    333
    4444
    55555
    */
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    1
    12
    123
    1234
    12345 
    */
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << j+1;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    A
    B B
    C C C
    D D D D
    E E E E E 
    */
    // char ch2 = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << ch2 << ' ';
    //     }
    //     ch2++;
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    A
    A B
    A B C
    A B C D
    A B C D E 
    */
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < i+1; j++){
    //         cout << ch << ' ';
    //         ch++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 5
    A
    B C
    D E F
    G H I J
    K L M N O 
    */
    // char ch3 = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << ch3 << ' ';
    //         ch3++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 4
    1
    2 1 
    3 2 1
    4 3 2 1
    */
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << (i+1) - j << ' ';
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 3
    1
    2 3 
    4 5 6 
    */
    // int num2 = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = i+1; j > 0; j--){
    //         cout << num2 << ' ';
    //         num2++;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 4
    A 
    B A
    C B A
    D C B A
    */
    // for(int i=0; i<n; i++){
    //     int ch = 65;
    //     for(int j=0; j<i+1; j++){
    //         cout << char(ch+i) << ' ';
    //         ch--;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 4    Other method
    A 
    B A
    C B A
    D C B A
    */
    // for(int i=n; i>0; i--){
    //     int ch = 65;
    //     for(int j=0; j<=n-i; j++){
    //         cout << char(ch+(n-i)) << ' ';
    //         ch--;
    //     }
    //     cout << endl;
    // }
//-----------------------------------
    /* n = 4    Another method
    A 
    B A
    C B A
    D C B A
    */
    // for(int i=n; i>0; i--){
    //     int ch = 65;
    //     for(int j=n-i; j>=0; j--){
    //         cout << char(ch + (n-i)) << ' ';
    //         ch--;
    //     }
    //     cout << endl;
    // }
//-----------------------------------



// ************************************
    return 0;
}