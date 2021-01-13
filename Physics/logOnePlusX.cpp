// log(1+x) = x - (x^2 / 2) + (x^3 /3) - (x^4 / 4) + .... 

#include <iostream>
using namespace std;

int main(){

    double x;
    cout << "Enter the value of x: ";
    cin >> x;

    int accuracy;
    cout << "Enter how many term do you want to calculate: ";
    cin >> accuracy;

    double ans , temp {x};
    for (int i = 1; i < accuracy ; i++)
    {
        temp = ( temp * (-1) * x ) / i ;
        ans = ans + temp;
    }

    cout << "Your Answer is : " << ans ;

    return 0;
    
}