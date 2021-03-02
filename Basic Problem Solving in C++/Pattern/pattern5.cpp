/*
Generate the following output using nested for loops.


        * * * * *
        *       *
        *       *
        *       *
        * * * * *


*/


#include<iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter the number of star in one arm : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == 1 || i == number || j == 1 || j == number)
            {
                cout << "*" ;
            }else
            {
                cout << " " ;
            }
        }
        
        cout <<"\n";
    }
    return 0;
}