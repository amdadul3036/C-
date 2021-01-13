// e^x Series
// e^x = 1 + (x/1!) + ((x^2)/2!) + ((x^3)/3!) + ...... 


// For Algorithm remember ---

// 1! * 2 = 2!
// 2! * 3 = 3!
// 3! * 4 = 4!
// 4! * 5 = 5!
// ...........
// (n-1)!*n = n!


#include <iostream>
using namespace std;

int main(){

    float x;
    cout << "Enter the power of e: ";
    cin >> x;

    int accuracy;
    cout << "Enter the amount of term you want to calculate in the series: ";
    cin >> accuracy;

    float ans = 1; //This 1 is the first term of the e^x series.So by default the answer will be 1.
    float fact_number_under_devide_sign = 1; //This is the number what we have as factorial under the devide sign


    // Now the according to the series first term is 1. But after that look carefully all terms are multiplying by "x/i" with its before term

    for (int i = 1; i <= accuracy; i++) //Here we are calculating i from the second term of the series
    {   
        fact_number_under_devide_sign = (( fact_number_under_devide_sign * x ) /i);
        ans = ans + fact_number_under_devide_sign ;
    }
    
    cout << ans;

}