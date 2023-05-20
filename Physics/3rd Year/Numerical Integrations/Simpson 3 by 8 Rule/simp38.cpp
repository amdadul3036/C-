#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
    return sin(x) * cos(x);
}

double simp(double a, double b, int n){
    double d, I = 0, J = 0, K = 0, A;
    int i;

    d = (b-a)/n; 

    for ( i = 1; i < n; i+=3)
    {
        I = I + f(a+(i*d));
    }
    
    for ( i = 2; i < n; i+= 3)
    {
        J = J + f(a+(i*d));
    }
    
    for ( i = 3; i < n; i+= 3)
    {
        K = K + f(a+(i*d));
    }
    
    A = (3.0/8.0)*d*(3*(I+J) + (2*K));
    return A; 
}


int main(){
    double a = 1;
    double b = 5;
    int n = 99;

    double result = simp(a,b,n);
    cout << "Result is: "<<result<<endl;

}