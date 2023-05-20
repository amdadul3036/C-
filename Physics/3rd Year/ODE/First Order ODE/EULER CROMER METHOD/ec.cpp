#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

#define g 9.8
#define L 1

double theta, omega, dt;

void EulerStep(double t, double theta, double omega, double dt) {
    double omegaOld; 
    ofstream fout("eulerstep.dat");
    for ( int i = 0; i <= 100; i++)
    {
    omegaOld = omega;
    omega -= (g/L)*theta*dt; 
    theta += omega*dt;
    t += dt; 

    fout << t << " " << theta << " " << omega <<endl;
    }
     
}

void EulerCromerStep(double t, double theta, double omega, double dt) {
    ofstream fout("eulercromerstep.dat");
    for ( int i = 0; i <= 100; i++)
    {
    omega -= (g/L)*theta*dt; 
    theta += omega*dt;
    t += dt; 

    fout << t << " " << theta << " " << omega <<endl;
    }

}

int main(){
    double t = 0;
    theta = 0;
    omega = 1;
    dt = 0.01;

    EulerStep(t,theta,omega,dt);
    EulerCromerStep(t,theta,omega,dt);

    return 0;
}