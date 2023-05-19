#include<iostream>
#include<cmath>
using namespace std;

double func(double x){
    return (1-(2*x));
}

double trap(double (*func)(double), double a, double b, int n){
    double sum, del, x;
    int i;

    if (n==1)           
    {
        return .5*(b-a)*((*func)(a)+(*func)(b));
    }
    else if (n>1)
    {
        del = (b-a)/n;
        x=a;
        sum=(*func)(a);

        for(i=1; i<n; i++){
            x+=del;
            sum+=2*(*func)(x);
        }
        sum+=(*func)(b);

        return .5*sum*del;
    }
    else{
        cout <<"INVALID"<<endl;
    }
    
}

int main(){
    double a = 0;
    double b = 1;
    double n = 100;

    double result = trap(func,a,b,n);

    cout << "The approximate value of the integration through the interval ["<<a<<","<<b<<"] is: "<< result<<endl;

    return 0;
}