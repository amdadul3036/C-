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

int main(){
    for(int n=10;n<=100;n++){
        cout << n << " " << abs(sin(M_PI/4) - mysin(M_PI/4,n)) << " " << abs(sin(M_PI/2) - mysin(M_PI/2,n)) << endl;
    }

    return 0;
}