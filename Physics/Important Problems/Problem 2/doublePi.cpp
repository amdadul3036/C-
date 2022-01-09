#include <iostream>
#include <cmath>
using namespace std;

// (a) answer start 

double pi(int n){
    double sum = 0;

    for(int i = 1; i<=n; i++){
        sum = sum + (pow(-1,i)/((2*i)-1));
    }

    return sum*4;
}

// (a) answer End 
