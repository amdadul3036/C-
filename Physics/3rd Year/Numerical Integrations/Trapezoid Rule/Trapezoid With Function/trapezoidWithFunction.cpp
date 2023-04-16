#include<iostream>
#include<cmath>
using namespace std;

double func(double x) {
    return (1 - (2*x));
}

double trap(double (*func)(double), double a, double b, int n){
    double x, sum, del; 
    int i;

    if (n==1)
    {
        return 0.5*(b-a)*((*func)(a)+(*func)(b));
    }
    else if (n>1){
        del = (b-a)/n;
        sum=(*func)(a);
        x = a;
        for ( i = 1; i < n; i++)
        {
            x+=del;
            sum+=2*(*func)(x);
        }
        sum+=(*func)(b);
        return sum*0.5*del;  
    }
    else{
        cout << "INVALID" << endl;
    }
}

int main() {
    double a = 0;
    double b = 1;
    int n = 100;

    double result = trap(func, a, b, n);

    cout << "The approximate value of the definite integral of 1-x over the interval " << "["<<a<<","<< b<< "] is: " << result << endl;

    return 0;
}
