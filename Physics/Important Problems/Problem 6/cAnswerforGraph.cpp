#include<iostream>
#include<cmath>
#include<fstream>
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
    // int n;

    double vel = pow(-1,n-1)*2*factorial(2*n)/pow(2*M_PI,2*n);

    for(int p = 1; p<=20; p++){
        sum+=pow(p,-2*n);
    }

    double result = vel*sum;

    return result; 
}

double mytan(double x){

    double sum = 0.0;
    for(int n = 1; n<=20; n++){
    
    double sum+ = pow(-1,n-1)*pow(2,2*n)*(pow(2,2*n)-1)*bernoulli(n)*pow(x,(2*n)-1)/factorial(2*n);

    }

    return sum;
}

int main(){
    ofstream fout("tan.dat");
    for(double x = -M_PI/3;x<=M_PI/3;x+=M_PI/50){
        fout<< x << " " << (mytan()) << " " << tan(x) << endl;
    }
}
