/*
In this problem user will input a number and you have to print the absolute value of the
number.
Input Output
6       6
-7      7
0       0

Do not use any math header file
*/

#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter the number whose absolute value you want : " ;
    cin >> number ;

    if (number >= 0)
    {
        cout << "The absolute value of " << number << " is " << number << endl;
    }else{
        cout << "The absolute value of " << number << " is " << -number << endl;
    }

    return 0;
    
}