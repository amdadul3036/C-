#include<iostream>
#include<cmath>
using namespace std;

double func(double x){
    return pow(x,2)-(5*x)+2;
}

double trap(double (*func)(double), double a, double b, int n){
    double del, sum, x;
    int i;

    if (n==1)
    {
        return .5*(b-a)*((*func)(a) + (*func)(b));
    }

    else if (n>1)
    {
        del = (b-a)/n;
        x = a;
        sum = (*func)(a);


        for ( i = 1; i < n; i++)
        {
            x+=del;
            sum+=2*(*func)(x);
        }

        sum = (*func)(b);
        return .5*del*sum;
        
    }
    else{
        cout << "INVALID"<<endl;
    }
}

int main(){
    double a = 1;
    double b = 5;
    int n = 100;

    double result = trap(func, a , b , n);

    cout<< "Your result is: " << result << endl; 
}