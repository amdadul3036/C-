#include<iostream>
#include<cmath>
using namespace std;
#define E (0.01)

double func(double x){
    return pow(x,3) - pow(x,2) + 2;
}

double derivfunc(double x){
    return ((3*pow(x,2)) - (2*x));
}

void NR(double x){
    double h = func(x)/derivfunc(x);

    while(abs(h)>=E){
        h = func(x)/derivfunc(x);
        x = x-h;
        cout << "Result is: " << x << endl; 
    }
}


int main(){
    double x0 = 0.0; 
    NR(x0);

    return 0;
}