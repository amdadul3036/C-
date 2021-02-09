/*
Find the GCD of the given values
GCD is also known as HCF.

RULES:
1. Find all dividors
2. Find all common dividors
3. Find the largest common dividor

Example: 
12 =  1 , 2 , 3 , 4 , 6 , 12
16 =  1 , 2 , 4 , 16

So common is here {1,2,4}
And largest common dividor is 4.

So the GCD of 12 and 16 is 4.
*/


#include<iostream>
using namespace std;


int main(){
    int num1 , num2 , gcd;

    cout << "Enter first number : ";
    cin >> num1 ;

    cout << "Enter second number : ";
    cin >> num2 ;

    for (int i = 1 ; i < num1 && i< num2; i++) //Notice that we do not need to cross it because GCD will come in this range. Use the example above 12 and 16 to understand it clearly
    {
        if (num1%i == 0 && num2%i == 0)
        {
            gcd = i;
        }
        
    }

    cout << "GCD : " << gcd << endl;

    return 0;
    
}
