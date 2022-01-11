#include<iostream>
#include<cmath>
#include<fstream>
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
    ofstream fout("dSin.dat");
    for(int n=10;n<=100;n++){
        fout << n << " " << abs(sin(M_PI/4) - mysin(M_PI/4,n)) << " " << abs(sin(M_PI/2) - mysin(M_PI/2,n)) << endl;
    }

    return 0;
}