#include<iostream>
#include<cmath>
using namespace std;


double factorial(int m){
    double product = 1;
    for(int i = m ; i>=1;i--){
        product*=i;
    }

    return product;
}

double bernoulli(int n){
    double sum = 0.0;

    double vel = pow(-1,n-1)*2*factorial(2*n);/pow(2*M_PI,2*n);

    for(int p = 1; p<=20; p++){
        sum+=pow(p,-2*n);
    }

    double result = vel*sum;

    return result; 
}