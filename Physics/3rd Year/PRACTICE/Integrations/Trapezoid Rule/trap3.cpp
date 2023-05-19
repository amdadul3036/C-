#include<iostream>
#include<cmath>
using namespace std;

double func(double x){
    return (1-(2*x));
}

double trap(double (*func)(double), double a, double b, int n){
    double del, sum, x;
    int i;

    if (n==1)
    {
        return .5*(b-a)*sum;
    }
    else if (n>1){
        del = (b-a)/n;
        x=a;
        sum =(*func)(a);

        for ( i = 1 ; i < n; i++)
        {
            x+=del;
            sum+=2*(func)(x);
        }

        sum = (*func)(b);
        return .5*del*sum; 
        
    }
    
}

int main(){
    double a = 0;
    double b = 1;
    double n = 100;

    double result = trap(func,a,b,n);

    cout << "The approximate value of the given integral between the interval ["<<a<<","<<b<<"] is: "<< result<< endl;

    return 0;
    }