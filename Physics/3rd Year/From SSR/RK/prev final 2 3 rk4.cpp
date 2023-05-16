#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

double vel(double t, double v)
{
    return (9.8-(0.2*v));
}
double rk4 (double h, double t0, double v0)
{
    double k1=h*vel(t0,v0);
    double k2=h*vel(t0+(h/2.0),v0+(k1/2.0));
    double k3=h*vel(t0+(h/2.0),v0+(k2/2.0));
    double k4=h*vel(t0+h,v0+k3);
    return v0+((k1+2*k2+2*k3+k4)/6.0);
}
int main ()
{
    ofstream fout ("pr23rk4.dat");
    double dt=1.0;
    double v=1.0;
    for (double t=0; t<=100; t=t+dt)
    {
        fout<<t<<" "<<v<<" "<<endl;
        v=rk4(dt,t,v);
    }
    return 0;
}
