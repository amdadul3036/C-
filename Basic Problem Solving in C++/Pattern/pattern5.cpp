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

    for (int row = 1; row <= number; row++)
    {
        for (int col = 1; col <= number; col++)
        {
            if (row == 1 || row == number || col == 1 || col == number)
            {
                cout << "* " << endl;
            }else
            {
                cout << " " << endl;
            }
        }
        
    }
    return 0;
}