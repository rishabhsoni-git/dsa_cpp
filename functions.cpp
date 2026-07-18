#include <iostream>
using namespace std;
bool isPositive(int n);
int min(int a, int b);
int max(int a, int b);
int sumToN(int n);              // calculate sum of numbers from 1 to n.
int long long factorial(int n); // calculate n factorial.
int sumDigits(int n);           // calculate sum of all digits in a number.
int magicNum(int n);            // calculate sum of digits till only single digit number appear.
int nCr(int n, int r);          // claculate Binomial cofficient for n and r
void nCrN(int n);               // Print Binomial cofficient for n and for all (r<n).
//-------------------------------------
int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Magic num : " << magicNum(n);

    return 0;
}
//------------------------------------
bool isPositive(int n)
{
    if (n >= 0)
    {
        return true;
    }
    cout << "Negative Input\n";
    return false;
}
int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int sumToN(int n)
{
    if (isPositive(n))
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (i + 1);
        }
        return sum;
    }
    return 0;
}
int long long factorial(int n)
{
    if (isPositive(n))
    {
        int long long fact = 1;
        for (int i = 0; i < n; i++)
        {
            fact *= (i + 1);
        }
        return fact;
    }
    return 0;
}
int sumDigits(int n)
{
    int sum = 0, r = 0;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}
int magicNum(int n)
{
    int sum = 0, r = 0;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;

        if (n == 0 && sum > 9)
        {
            n = sum;
            sum = 0;
        }
    }
    return sum;
}
int nCr(int n, int r)
{
    /*
        nCr = n! / (n-r)! r!
    */
    if (r < 0 || r > n)
    {
        cout << "Wrong input\n";
        return 0;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}
void nCrN(int n)
{
    isPositive(n);
    {
        cout << "Binomial Cofficients : ";
        for (int i = 0; i < n; i++)
        {
            cout << nCr(n, i) << ", ";
        }
    }
}

