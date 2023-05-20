#include<iostream>
#include<cmath>
#define EPSILON (0.01)
using namespace std;

double func(double x){
    return pow(x,3)-pow(x,2)+2;
}

void bisection(double a, double b){
    if (func(a)*func(b)>= 0)
    {
        cout << "You Provided an Invalid Limit"<<endl;
        return; 
    }

    double c = a;
    while ((b-a)>=EPSILON)
    {
        c = (a+b)/2;
        if (func(c)==0.0)
        {
            break; 
        }
        
        else if (func(a)*func(c)<0)
        {
            b=c;
        }
        else{
            a=c;
        }
        
    }
    
    cout << "The value of root is: "<<c<<endl; 
} 

int main(){
    double a = -200;
    double b = 300;
    
    bisection(a,b);

    return 0;
}