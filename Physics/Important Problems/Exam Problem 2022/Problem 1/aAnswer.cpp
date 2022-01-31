#include<iostream>
#include<cmath>
using namespace std;

void position(double x0, double y0){
    double x,y,t;

    x = (-0.3*pow(t,2)) + (7.2*t) + 28;
    y = (0.22*pow(t,2)) - (9.1*t) + 30;

    for(t=0;t<=30;t=t+0.1){
        cout << t << " " << x << " " << y << endl;
    }

}