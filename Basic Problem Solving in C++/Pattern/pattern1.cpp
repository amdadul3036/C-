#include<iostream>
using namespace std;

int main(){
    int n,row, column ;

    cout << "Enter how many * do you want : ";
    cin >> n;

    for (row = 1 ; row <= n; row++)
    {
        for (column = 1; column <= n; column++)
        {
            cout << "* " ;
        }

        cout << endl;
        
    }
    
    return 0;
    
}