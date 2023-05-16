#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

    ofstream fout ("rk2dhm.dat");
    double dt=0.1, t0=0.0, x0=0.5, v0=4.0, T=5.0;

double f(double t, double x, double v)
{
    return v;
}

double g(double t, double x, double v)
{
    double k=150.0, m=7.2, gam=0.5;
    return -((k*x)/m+(gam*v));
}

double rk2 (double dt, double t0, double x0, double v0)
{
        for (double t=t0;t<=T;t=t+dt)
   {
    fout<<t0<<" "<<x0<<" "<<v0<<endl;
    cout<<t0<<" "<<x0<<" "<<v0<<endl;
    double k1=dt*f(t0,x0,v0);
    double l1=dt*g(t0,x0,v0);
    double k2=dt*f(t0+dt,x0+k1,v0+l1);
    double l2=dt*g(t0+dt,x0+k1,v0+l1);
    t0 = t0+dt;
    x0 = x0+((k1+k2)/2);
    v0 = v0+((l1+l2)/2);
   }
}

int main ()
{
    rk2(dt,t0,x0,v0);
}
