#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
const double g = 9.80;
const double L = 1;
double t;
double theta;
double omega;

void EulerStep( double t, double theta, double omega, double dt)
{
double omegaOld;
ofstream fout("eulershm.dat");
for(int i=0;i<=100;i++)
{
omegaOld=omega;                   //only different line between these two methods
omega -= (g/L) * theta * dt;
theta += omegaOld * dt;
t += dt;
fout<< t <<" " << theta <<" " << omega<<endl;
}
}
void EulerCromerStep( double t, double theta, double omega,double dt){
ofstream fout("cromershm.dat");
for(int i=0;i <=100;i++)
{
omega -= (g/L) * theta * dt;
theta += omega * dt;
t += dt;
fout<< t <<" " << theta <<" " << omega<<endl;
}
}
int main()
{
t = 0;
theta = 0;
omega = 1;
double dt=0.1;
EulerCromerStep(t, theta, omega,dt);
EulerStep(t, theta, omega,dt);
return 0;
}
