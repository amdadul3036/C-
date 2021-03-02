/*
Write a C program to calculate x^y where x is base (an integer) and y is exponent (an integer) as 
follows. The program should have a while repetition statement.
*/

#include<iostream>

using namespace std;

int main(){
    int x , y ;
    int sum = 1 ;
    
    cout << "Enter base as an Integer: ";
    cin >> x;

    cout << "Enter exponent as an Integer: ";
    cin >> y;

        int i {1};
        while (i <= y)
        {
            sum = sum * x ;
            i++;
        }
    
    cout << "Result of your exponent is : " << sum;
}