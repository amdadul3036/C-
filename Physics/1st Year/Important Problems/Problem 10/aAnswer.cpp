#include<iostream>
#include<cmath>
using namespace std;

double mysin(double x, int n){
    double product = 1.0;
    for(int k=1;k<=n;k++){
        product*= 1-pow(x,2)/(pow(k,2)*pow(M_PI,2));
    }

    double result = x*product;
    return result; 
}