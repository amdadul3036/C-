#include<iostream>
#include<cmath>
using namespace std;

double vel(double t){
    int m,b,v0;
    double g = 9.8;

    double j = (m*g)/b;
    double k = (b*t)/m;

    double v = j + (v0 - j)*exp(-k);

    return v; 
}