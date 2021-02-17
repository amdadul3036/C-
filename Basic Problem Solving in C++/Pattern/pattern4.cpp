/*
Generate the following pattern using nested while loops.
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/


#include<iostream>
using namespace std;

int main(){
    int n , row , column , count = 1;


    cout << "Enter the number of row : ";
    cin >> row;

    for ( int i = 0 ; i < row ; i++)
    {
        for ( int j = 0; j <= i ; j++)
        {
            cout << count << " ";
            count ++ ;
        }
        
        cout << endl;
    }
    
    return 0;
}