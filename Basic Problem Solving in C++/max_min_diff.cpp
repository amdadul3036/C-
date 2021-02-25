/*
You will take several integer numbers as inputs until the user enters -1. Then calculate the
difference between the Highest and Lowest number.

    EXAMPLE: 

        Input               Output
        7 5 1 9 5 -1          8
        0 7 8 4 9 -1          9
*/

#include<iostream>

using namespace std;

int main(){
    int number , arr[50] ;

    for (int i = 0; i < 50; i++)
    {
        cout << "Enter the number : ";
        cin >> number;

        if (number != -1)
        {
            cin >> arr[i];
        }else if (number == -1)
        {
            cin >> arr[i];
        }
        
    }
    
    
    cout << arr ;
    
    
}