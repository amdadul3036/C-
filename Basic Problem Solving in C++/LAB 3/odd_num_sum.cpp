/*
Write a program that uses a WHILE LOOP to calculate the sum of all the odd numbers entered by the user.
Assume the last value read is the sentinel -1.

EXAMPLE:

        Input                           Output
        1 2 3 4 5 6 7 8 9 10 -1           25
        2 4 7 9 12 4 4 7 -1               23
*/

#include<iostream>
using namespace std;

int main(){
    
    int number;
    int sum = 0;

    cout << "Enter your number: ";
    cin >> number;

    int i;
    while (number%2 != 0)
    {
        sum = sum + number;
        cout << sum << endl;
        i++;
    }
    
    return 0;
}