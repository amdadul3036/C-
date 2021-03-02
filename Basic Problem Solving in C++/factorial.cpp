/*
The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:

        n! = n · (n – 1) · (n – 2) · … · 1 (for values of n greater than 1)

and

        n! = 1 (for n = 0 or n = 1).

EXAMPLE:
 5! = 5 · 4 · 3 · 2 · 1, which is 120. 
 
Use while statements in each of the following:
                        Write a program that reads a nonnegative integer, and computes and prints its factorial.
*/

#include<iostream>
using namespace std;

int main(){
    int number , sum {1};

    cout << "Enter the number whose Factorial you want to calculate: ";
    cin >> number;

    if (number == 0 || number == 1)
    {
        cout << "Factorial of " << number << " is " << 1 << endl;
    }else
    {
        int i = 0 ;
        while (i < number)
        {
            sum = sum *( number - i ); 
            i++;
        }
    }
    
    cout << sum;
    
}