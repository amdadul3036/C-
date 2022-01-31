#include<iostream>
#include<cmath>
using namespace std;

double mysin(double x, int n){
    double product = 1, result;
    int k; 

    for(k=1;k<=n;k++){
        product = product*(1-(pow(x,2)/(pow(k,2)*pow(M_PI,2))));
    }

    return product;

    result = x*product;
}