/*
Find the factorial of a given number. Terminate the program if user enters -1.
Sample Input/Output:
Input           Output
0                 1
1                 1
2                 2
5                120
-1
*/

#include <iostream>
using namespace std;

long int factorial(long int n)
{
    if(n == 1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    long int n, r;
    while(1)
    {
        cin >> n;
        if (n==-1)
        {
            break;
        }
        r = factorial(n);
        cout << r << "\n";  //It will create a new line 
    }
}
