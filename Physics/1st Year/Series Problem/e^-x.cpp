// e^-x = 1 - (x/1!) + ((x^2)/2!) - ((x^3)/3!) + ...... 


#include <iostream>
using namespace std;


int main(){

    double x;
    int accuracy;

    cout << "Enter the value of power x: ";
    cin >> x;

    cout << "How many term you want to calculate: ";
    cin >> accuracy;

    double ans {1};
    float temp {1};

    for (int i = 1; i <= accuracy ; i++)
    {
        temp = ( temp * (-1) * x ) / i ;
        ans = ans + temp;
    }

    cout << "Answer is: " << ans;

    return 0;
    
}
