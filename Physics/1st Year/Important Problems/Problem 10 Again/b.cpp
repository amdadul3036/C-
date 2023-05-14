#include<iostream>
#include<cmath>
using namespace std;

double mysin(double x, int n){
    double product = 1;
    int k;

    for(k=1;k<=n;k++){
        product*= 1- (pow(x,2)/(pow(k,2)*pow(M_PI,2)));
    }

    return x*product;
}

int main(){
    for(int n=10;n<=100;n++){
        cout<< abs(sin(M_PI/4) - mysin(M_PI/4)) << " " << abs(sin(M_PI/2) - mysin(M_PI/2)) << " " << n << endl; 
    }

    return 0; 
}
