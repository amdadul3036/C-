/*
Write a code to print a pattern like -- 


INPUT: 
n = 3

OUTPUT: 

1 2 3
1 2 3
1 2 3

*/

#include<iostream>
using namespace std;

int main(){
    int n, row , column ;

    cout << "Enter the number of row you want: " ;
    cin >> n;

    for ( row = 1; row <= n; row++)
    {
        for ( column =1; column <= n; column++)
        {
            cout << column << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}