/*
  INPUT: n = 4

  OUTPUT:

  4 3 2 1
  4 3 2
  4 3 
  4
*/


#include<iostream>
using namespace  std;

int main(){
    int n , row , column ;

    cout << "Enter n: ";
    cin >> n;

    for ( row = 1; row <= n; row++)
    {
        for ( column = n; column >= row ; column--)
        {
            cout << column << " ";
        }
        
        cout << endl;

    }
    
    return 0;
}