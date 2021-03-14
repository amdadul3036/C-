/*
Draw the following shape having the number of rows input by the user (Following shape is for input 5):


        * * * * *
          * * * *
            * * *
              * *
                *
*/

#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of row : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i ; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}