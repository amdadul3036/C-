#include <iostream>
using namespace std;

int main(){

    int a , b ;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    int max = a ;
    
    if (a>b)
    {
        max = max;
    }else
    {
        max = b;
    }

    cout << "Maximum number is : " << max ;

    return 0;
    
    
}