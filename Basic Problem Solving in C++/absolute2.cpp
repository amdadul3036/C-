/*
In this problem user will input a number and you have to print the absolute value of the
number.
Input Output
6       6
-7      7
0       0

Solve this using cmath
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number;

    cout << "Enter the number whose absolute value you want : " ;
    cin >> number ;

    cout << "The absolute value of " << number << " is " << abs(number) << endl;

    return 0;
    
}