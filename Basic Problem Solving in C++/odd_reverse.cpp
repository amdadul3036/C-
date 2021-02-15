/*
Write a program to print odd numbers between 1 and 50 in reverse order.
*/

#include <iostream>
using namespace std;

int main(){
    for (int i = 50 ; i >= 1; i--)
    {
        if (i%2 != 0)
        {
            cout << i << endl;
        }
        
    }
    
    return 0;
}