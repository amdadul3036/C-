#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

ofstream fout("rk2.dat");
double k = 150, m = 7.2, l = 0.0, x = 0.5, h = 0.1;

double f(double t, double x, double v){
    return v;
}

double g(double t, double x, double v){
    return (-k*x)/m;
}

void RK(double h, double t0, double x0, double v0){
    double k1 = h*f(t0, x0, v0);
    double l1 = h*g(t0, x0, v0);
    double k2 = h*f(t0+(h/2), x0+(k1/2), v0+(l1/2));
    double l2 = h*g(t0+(h/2), x0+(k1/2), v0+(l1/2));
    double k3 = h*f(t0+(h/2), x0+(k2/2), v0+(l2/2));
    double l3 = h*g(t0+(h/2), x0+(k2/2), v0+(l2/2));
    double k4 = h*f(t0+h, x0+k3, v0+l3);
    double l4 = h*g(t0+h, x0+k3, v0+l3);

    t0 += h;
    x0 += (k1 + 2*k2 + 2*k3 + k4) / 6;
    v0 += (l1 + 2*l2 + 2*l3 + l4) / 6;
}

int main() {
    double t = 0.0, x = 0.5, v = 0.0;
    while(t < 5.0){
        fout << t << " " << x << " " << v << endl;
        RK(h, t, x, v);
    }
     
    return 0;
}
