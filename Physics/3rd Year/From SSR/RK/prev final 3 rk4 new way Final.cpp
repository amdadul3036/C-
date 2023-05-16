#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

    ofstream fout ("rk4pr3new.dat");
    ofstream fout2 ("rk4pr3new2.dat");
    double eps=0.0, theta=1.0, tprime=0.0;

double f(double eps, double theta, double tprime)
{
    return tprime;
}

double g(double eps, double theta, double tprime)
{
    return -(pow(theta, 1)+(2*tprime/eps));
}

double j(double eps, double theta, double tprime)
{
    return -(pow(theta, 5)+(2*tprime/eps));
}

double rk4 (double h, double eps0, double theta0, double tprime0)
{
    for (double eps0=0.1; eps0<=5;eps0=eps0+0.01)
    {
    double k1=h*f(eps0,theta0,tprime0);
    double l1=h*g(eps0,theta0,tprime0);
    double k2=h*f(eps0+(h/2.0),theta0+(k1/2.0),tprime0+(l1/2.0));
    double l2=h*g(eps0+(h/2.0),theta0+(k1/2.0),tprime0+(l1/2.0));
    double k3=h*f(eps0+(h/2.0),theta0+(k2/2.0),tprime0+(l2/2.0));
    double l3=h*g(eps0+(h/2.0),theta0+(k2/2.0),tprime0+(l2/2.0));
    double k4=h*f(eps0+h,theta0+k3,tprime0+l3);
    double l4=h*g(eps0+h,theta0+k3,tprime0+l3);
    eps0 = eps0+h;
    theta0 = theta0+((k1+2*k2+2*k3+k4)/6);
    tprime0 = tprime0+((l1+2*l2+2*l3+l4)/6);
    fout<<eps0<<" "<<theta0<<" "<<tprime0<<" "<<sin(eps0)/eps0<<endl;
    cout<<eps0<<" "<<theta0<<" "<<tprime0<<" "<<sin(eps0)/eps0<<endl;
    }
}

double rk42 (double h, double eps0, double theta0, double tprime0)
{
    for (double eps0=0.1; eps0<=5;eps0=eps0+0.01)
    {
    double k1=h*f(eps0,theta0,tprime0);
    double l1=h*j(eps0,theta0,tprime0);
    double k2=h*f(eps0+(h/2.0),theta0+(k1/2.0),tprime0+(l1/2.0));
    double l2=h*j(eps0+(h/2.0),theta0+(k1/2.0),tprime0+(l1/2.0));
    double k3=h*f(eps0+(h/2.0),theta0+(k2/2.0),tprime0+(l2/2.0));
    double l3=h*j(eps0+(h/2.0),theta0+(k2/2.0),tprime0+(l2/2.0));
    double k4=h*f(eps0+h,theta0+k3,tprime0+l3);
    double l4=h*j(eps0+h,theta0+k3,tprime0+l3);
    eps0 = eps0+h;
    theta0 = theta0+((k1+2*k2+2*k3+k4)/6);
    tprime0 = tprime0+((l1+2*l2+2*l3+l4)/6);
    fout2<<eps0<<" "<<theta0<<" "<<tprime0<<" "<<1/sqrt(1+(eps0*eps0/3))<<endl;
    cout<<eps0<<" "<<theta0<<" "<<tprime0<<" "<<1/sqrt(1+(eps0*eps0/3))<<endl;
    }
}

int main ()
{

            //fout<<eps<<" "<<theta<<" "<<tprime<<endl;
            rk4(0.01, eps, theta, tprime);
            rk42(0.01, eps, theta, tprime);

}
