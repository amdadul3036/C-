/*
In this problem, you will develop a program that can find how many times an integer number can
be divided by Two (2).

EXAMPLE: 

    Input       Output
    32            5
    61            0
*/

#include<iostream>
using namespace std;


int main(){
    int number , calculation_number , count {};

    cout << "Enter the number that you want to check: "; //16
    cin >> number; //16

    calculation_number = number ;  //16

    for (int i = 1; i <= number/2; i++) //8
    {
        if (calculation_number%2==0) //16 8
        {
            count +=1;  //1 2 3 4
        }
        calculation_number = calculation_number/2; // 8  4  2
    }
    
    cout << count;

    return 0;
}

