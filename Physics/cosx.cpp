// cos x = 1 - ((x^2)/2!) + ((x^4)/4!) - ((x^6)/6!) + ((x^8)/8!) - ...... 
/*
For algorithm please remember --

1! * 2 * 3 = 3!
2! * 3 * 4 = 4!
4! * 5 * 6 = 6!
6! * 7 * 8 = 8!

---------------
---------------
(n-2)! * (n-1) * n = n!

*/

#include <iostream>
#include <cmath>
#define PI 3.1416   //We are defining the value of PI because later we will need to use PI to convert the angle from radian to degree. N.B: By default x is in degree in cosx but in series we need x in radian unit.

using namespace std;

int main(){

    double x_in_degree;
    cout << "Enter your preffered value of x in degree : ";
    cin >> x_in_degree;

    double x_in_radian = x_in_degree * PI/180;

    float ans {1} ;
    float temp {1};

    int accuracy;
    cout << "How many terms do you want to calculate: ";
    cin >> accuracy;

    for (int i = 1; i <= (2 * accuracy) ; i+=2)
    {
        temp = temp * (-1) * x_in_radian * x_in_radian / (i * (i+1));
        ans = ans + temp ; 
    }
    
    cout << "Value of cosx: " << ans;
}