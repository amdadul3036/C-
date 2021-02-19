/*
You will take an integer number from the user. You have to find the summation of all the digits.

EXAMPLE:
    Input   Output
    1234      10
    678       21
*/

#include<iostream>
using namespace std;

int main(){
    int number , calculation_used_number;
    int sum {};

    cout << "Enter the number : ";
    cin >> number;   //Let the number is 135

    calculation_used_number = number ;
    while (calculation_used_number != 0)
    {
        int reminder = calculation_used_number % 10;  //135%10 = 5

        sum += reminder;  // 0 + 5 = 5

        calculation_used_number = calculation_used_number / 10; // 135 / 10 = 13 (Only integer)
    }

    cout << "Sum of all digit of " << number << " is " << sum ;

}