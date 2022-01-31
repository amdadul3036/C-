#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double mysqroot(double b, int n){
    if(n==0) return 1;
    else{
        return 0.5*(mysqroot(b,n-1)+(b/mysqroot(b,n-1)));
    }
}

int main(){
    ofstream fout("sqrt.dat");
    for(int n=1;n<=20;n++){

        double b = 100.0;
        fout << n << " " << abs(mysqroot(b,n) - sqrt(b)) << endl;
    }

    return 0;
}