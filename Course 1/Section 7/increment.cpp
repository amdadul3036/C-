#include<iostream>
using namespace std;

int main(){
    int element , value;

    cout << "Element" << "            Value" << endl;

    int i , j;

    for ( i = 0; i <= 10 ; i++)
    {
        cout << i ;
        for ( j = 0; j <= 20 ; j = 2 + 2*i)
        {
            cout << j << endl;
        }
         
    }
    
    return 0;
}