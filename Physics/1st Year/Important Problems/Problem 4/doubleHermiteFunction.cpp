// (a) answer start

#include<iostream>
#include<cmath>
using namespace std;

double hermite(double x, int n){
    if n == 0 return 1;
    else if n == 1 return 2*x; 

    else return ((2*x*hermite(x, n-1)) - (2*(n-1)*hermite(x, n-2)));
}

// (a) answer end 