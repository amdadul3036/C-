#include <iostream>
using namespace std;

int quotient( int a, int b );
int remainder( int a, int b );

int main()
{
    int number, divisor = 10000;
    cout <<  "Enter an integer between 1 and 32767: " ;
    cin >> number;
    cout <<  "The digits in the number are:\n" ;
    while ( number >= 10 )
    {
        if ( number >= divisor )
        {
            cout <<  quotient( number, divisor ) ;
            number = remainder( number, divisor );
            divisor = quotient( divisor, 10 );
        }
        else
        {
            divisor = quotient( divisor, 10 );
        }
    }
    cout << number ;
 return 0;

 }
 int quotient( int a, int b )
 {
    return a / b;
 }
 int remainder( int a, int b )
 {
     return a % b;
 }
