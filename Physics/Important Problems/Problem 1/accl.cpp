#include<iostream>
#include<cmath>  //We should use this library function to operate sin,cos,tan etc.
using namespace std;

// (a) number answer start 

double accl(double theta, double mu){
    double F,m,g=9.8;

    double j = (F/m)*cos(theta);
    double k = (F/m)*sin(theta);

    double a = j - mu*(g-k);

    return a; 
}

// (a) number answer End