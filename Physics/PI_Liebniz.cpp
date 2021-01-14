// PI Approximation using Liebniz Series


#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int i , n ;
    double PI , a {0} ;

    cout << " Enter how many terms do you want to calculate: ";
    cin >> n ;
    
    for ( i = 1 ; i <= n ; i++)
    {
        a =  a + pow (-1 , i+1) / ((2*i) - 1) ;
    }

    PI = 4 * a ;

    cout << "The value of PI is : " << PI << endl;

    return 0;
    
}