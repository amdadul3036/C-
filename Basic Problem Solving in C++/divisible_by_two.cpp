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

    cout << "Enter the number that you want to check: "; 
    cin >> number; 

    calculation_number = number ;  

    while (calculation_number%2==0)
    {
        count +=1; 
        calculation_number = calculation_number/2; 
    }

    cout << count;

    return 0;
}

// CANNOT SOLVE THIS PROBLEM. TRIED THREE DAYS MY GOSSSS