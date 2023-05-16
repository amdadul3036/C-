#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

double h=0.1;

//declare funtion
double f(double t, double y)
{
    return y-((exp(t/2)*sin(5*t))/2)+((exp(t/2)*cos(5*t))/2);
}

//define method
void euler(double h, double t0, double y0)
{
//initial values are already substitued in t & y, thus this code is good & short
    double y1=y0;      						//extra line
    double y=0.0;      						//extra line
    ofstream fout("euler2wc.dat");
    for (double t=t0;t<=5.0; t+=h)
    {
        fout<<t<<" "<<y<<" "<<y1<<" "<<(exp(t/2)*sin(5*t))<<endl;
        y1+=h*f(t,y);  //line modified
        y+=h*(f(t,y)+f(t+1,y1))/2;          		//extra line
    }
}


int main()
{
    euler(0.1,0.0,0.0);
    return 0;
}
