#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double mysqroot(double b, int n){
    if (n==0) return 1;
    else return (0.5*mysqroot(b,n-1)+(b/mysqroot(b,n-1)));
}

int main(){
    ofstream fout("sqrt.dat");
    double b=100.0;

    for(int n=1;n<=20;n++){
        fout<< n << " " << abs(mysqroot(b,n)-sqrt(b)) << endl;
    }

    return 0;
    
}