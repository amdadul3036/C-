#include<iostream>
#include<cmath>

#define f(x) (x*x)-(5*x)+2.0

using namespace std;

int main(){
    double lowerLimit, upperLimit, Integrations = 0.0, subintervalNumber, stepsize,k;

    cout<<"Enter the Lower Limit of the Integration: ";
    cin>> lowerLimit;

    cout<<"Enter the Upper Limit of the Integration: ";
    cin>> upperLimit;

    cout<<"Enter number of subintervals: ";
    cin>> subintervalNumber; 

    //Step Size Calculation 
    stepsize = (upperLimit-lowerLimit)/subintervalNumber;

    //Finding Integral Value

    Integrations = f(upperLimit)+f(lowerLimit);
    for (int i = 1; i < subintervalNumber - 1; i++)
    {
        k = lowerLimit + (i*stepsize);
        Integrations += (2*f(k));
    }
    
    Integrations = (stepsize/2)*Integrations;

    cout<<"Value of the integration is: "<<Integrations<<endl;

    return 0;
}