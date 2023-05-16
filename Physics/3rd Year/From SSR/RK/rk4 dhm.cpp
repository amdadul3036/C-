#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

    ofstream fout ("rk4dhm.dat");
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

double rk4 (double dt, double t0, double x0, double v0)
{
        for (double t=t0;t<=T;t=t+dt)
   {
    fout<<t0<<" "<<x0<<" "<<v0<<endl;
    cout<<t0<<" "<<x0<<" "<<v0<<endl;
    double k1=dt*f(t0,x0,v0);
    double l1=dt*g(t0,x0,v0);
    double k2=dt*f(t0+(dt/2.0),x0+(k1/2.0),v0+(l1/2.0));
    double l2=dt*g(t0+(dt/2.0),x0+(k1/2.0),v0+(l1/2.0));
    double k3=dt*f(t0+(dt/2.0),x0+(k2/2.0),v0+(l2/2.0));
    double l3=dt*g(t0+(dt/2.0),x0+(k2/2.0),v0+(l2/2.0));
    double k4=dt*f(t0+dt,x0+k3,v0+l3);
    double l4=dt*g(t0+dt,x0+k3,v0+l3);
    t0 = t0+dt;
    x0 = x0+((k1+2*k2+2*k3+k4)/6);
    v0 = v0+((l1+2*l2+2*l3+l4)/6);
   }
}

int main ()
{
    rk4(dt,t0,x0,v0);
}
