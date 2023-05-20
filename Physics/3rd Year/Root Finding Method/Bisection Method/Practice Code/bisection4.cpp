#include<iostream>
#include<cmath>
using namespace std;
#define EPSILON (0.01)


double func(double x){
    return pow(x,3) - pow(x,2) + pow(x,1) + 2;
}

void bisections(double a, double b){
    if (func(a)*func(b) > 0)
    {
        cout<<"You have given an Invalid range."<<endl;
        return; 
    }

    double c = a; 

    while ((b-a) > EPSILON)
    {
        c = (a+b)/2;
        if (func(c) == 0.0)
        {
            break;
        }
        
        else if (func(a)*func(c)<=0)
        {
            b = c; 
        }
        else{
            a = c; 
        }
    }
    
    cout<<"The root of the given equation is: "<<c<<endl; 
}

int main(){
    double a = -345;
    double b = 321;

    bisections(a,b);

    return 0; 
}