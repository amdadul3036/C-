// Write a code in c++ to find the Differentiation value of f(x) = 3x^2+5x ; find the value of f(3) with .1 interval.

#include<iostream>
#include<cmath>

using namespace std;

double f(double x) { 
    return 3*x*x + 5*x;}

double diff(double x, double h) { 
    double d = f(x+h) - f(x-h);

    return (d/(2*h));
}


int main(){
    cout << diff(3,.1)<<endl;  
}