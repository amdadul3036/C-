//solve a differential equation using the Runge-Kutta method and generate numerical approximations of the solution. Given, dx/dt = t*sqrt(x); t0 = 0; x0 = 1; x(t) = ((t^2+4)^2)/16 


#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

ofstream fout("rk1.dat");
double f(double t, double x){
    return t*sqrt(x);
}

double RK(double h, double t0, double x0){
    double k1 = h*f(t0,x0);
    double k2 = h*f(t0+(h/2),x0+(k1/2));
    double k3 = h*f(t0+(h/2),x0+(k2/2));
    double k4 = h*f(t0+h,x0+k3);

    return x0 + ((k1+(2*k2)+(2*k3)+k4)/6);
}

int main(){
    ofstream fout("rk1.dat");
    double t = 0, x=1, h=0.1;

    for ( t = 0; t <= 10; t+=h)
    {
        fout<<t<<" "<<x<<" "<<(pow(pow(t,2),2))/16<<endl;
        x = RK(h,t,x);
    }

    return 0;
    
}