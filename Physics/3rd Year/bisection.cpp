// Problem: Write C++ Program for Implementing of Bisection Method by solving equation " x^3-x^2+2=0";

// Solution Code Bellow --

#include<iostream>
using namespace std;
#define EPSILON 0.01; // This 0.01 is basically the Tollarance of the Numerical Analysis

double func(double x)
{
    return x*x*x-x*x+2;
}

void bisection(double a, double b){
    if (func(a)*func(b)>=0){
        cout<<"You have not assumed the right a and b"<<endl; 
        return; 
    }

    double c=a; 
    while(b-a)>= EPSILON{
        c=(a+b)/2; // Finding the middle point; 

        if(func(c) == 0.0 // Checking if middle point is the root 
        break; 

        else if(func(c)*func(a) < 0){
            b = c;

            else a = c; 
        }

        cout<< "The value of root is: " << c << endl; 
    }
}

int main(){
    double a = -200; b = 300; 
    bisection(a,b); 

    return 0; 
}