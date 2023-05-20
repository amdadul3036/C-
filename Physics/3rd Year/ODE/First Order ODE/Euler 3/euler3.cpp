/*  dy/dt−y=−0.5e^(t/2)sin(5t)+5e^(t/2)cos(5t); y(0)=0   */

#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

ofstream fout("euler3.dat");
int N = 500;
double h = 0.01;

double f(double t,double y){
    return -.5*exp(t/2)*sin(5*t) + 5*exp(t/2)*cos(5*t) + y ;
}

void euler3(double h, double t0, double y0){
    double y = y0;
    for (double t = t0; t <= 5; t+=h)
    {
        fout << t << " " << y << " " << exp(.5*t)*sin(5*t) << endl; 
        y+=h*f(t0,y0);
    }
    
}

int main(){
    euler3(h,0.0,0.0);

    return 0;
}