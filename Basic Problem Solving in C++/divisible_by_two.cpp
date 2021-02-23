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

    int n,number=0;

    cout << "Enter a number to check \nhow many times it can be divided by 2: ";
    cin >> n;

     while(n%2==0)
         {
            n=n/2;
            number++;
         }

        cout << "can be divided: "<< number << " times";

    return 0;
}


