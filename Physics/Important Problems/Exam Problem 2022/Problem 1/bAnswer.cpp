#include<iostream>
#include<cmath>
using namespace std;

// vx = -0.6t + 7.2
// vy = 0.44t - 9.1 
void velocity(double vx0, double vy0){
    double vx, vy, t;

    vx = (-0.6*t) + 7.2;
    vy = (0.44*t) - 9.1;

    for (t=0; t<=20; t+=0.1){
        cout << t << " " << vx << " " << vy << endl; 
    }
}