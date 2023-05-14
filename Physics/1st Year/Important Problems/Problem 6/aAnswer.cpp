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