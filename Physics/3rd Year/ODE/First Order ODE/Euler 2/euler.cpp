//PROBLEM: using the Euler method to solve the differential equation y′ = 2−e^(−4t)−2y with the initial condition y(0)=1. 


#include<iostream>
#include<fstream>
#include<cmath>
using namespace std; 

ofstream fout("euler2.dat");

double f(double t, double y){
    return 2-exp(-4*t)-(2*y);
}

void euler(double h, double t0, double y0){
    double y1=y0;
    double y=y0;
    for (double t = t0; t <= 5; t+=h)
    {
        fout<<t<<" "<<y<<" "<<" "<<1+(0.5*exp(-4*t))-(0.5*exp(-2*t))<<endl; 
        y+=h*f(t,y);
    }
    
}

int main(){
    euler(0.1,0,1);
    return 0;
}