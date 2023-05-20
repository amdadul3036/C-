#include <iostream>
#include <cmath>
using namespace std; 

double f(double x){
    return sin(x);
}
double simp(double a, double b, int n){
    double d, I=0, j=0,A;
    int i;

    d = (b-a)/n;

    for ( i = 1; i < n; i+=2)
    {
        I = I+f(a+(i*d));
    }
    
    for ( i = 2; i < n; i+=2)
    {
        j = j+f(a+(i*d));
    }
    
    A = d/3 * (f(a)+(4*I)+(2*j)+f(b));
    return A;
}


int main(){
    double a = 2;
    double b = 5;
    int n = 126;

    double result = simp(a,b,n);

    cout<< "The integration value is: "<<result<<endl; 
}
