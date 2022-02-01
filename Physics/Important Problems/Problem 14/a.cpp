#include<iostream>
#include<cmath>
using namespace std;

double legend(double x, int n){
    if(n==0) return 1;
    else if(n==1) return x;

    else return (((((2*n) -  1)*x*legend(x, n-1)) - (((n-1)*legend(x, n-2))))/n);
}