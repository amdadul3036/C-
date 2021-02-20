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
    int number ,calculation_number, count {};

    cout << "Enter the number that you want to check: "; //8
    cin >> number; //8

    number = calculation_number;  //8

    for (int i = 1; i <= number/2; i++) //4
    {
        if (calculation_number%2==0) //8  4  2
        {
            count +=1;  //1 2 3
        }
        calculation_number = calculation_number/2;         //4  2  1
    }
    
    cout << count;

    return 0;
}


