#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

double h=0.1;

//declare funtion
double f(double t, double y)
{
    return 2-exp(-4*t)-2*y;
}

//define method
void euler(double h, double t0, double y0)
{
//initial values are already substitued in t & y, thus this code is good & short
    double y=y0;
    ofstream fout("euler.dat");
    for (double t=t0;t<=5.0; t+=h)
    {
        fout<<t<<" "<<y<<" "<<1+(exp(-4*t)/2)-(exp(-2*t)/2)<<endl;
        y+=h*f(t,y);
    }
}


int main()
{
    euler(0.1,0.0,1.0);
    return 0;
}
