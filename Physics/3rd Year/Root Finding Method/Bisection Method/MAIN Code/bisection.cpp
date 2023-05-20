// Problem: Write C++ Program for Implementing of Bisection Method by solving equation " x^3-x^2+2=0";

// Solution Code Bellow --

#include<iostream>
using namespace std;
#define EPSILON (0.01) // This 0.01 is basically the Tolerance of the Numerical Analysis

double func(double x)
{
    return x*x*x-x*x+2;
}

void bisection(double a, double b){
    if (func(a)*func(b) >= 0){
        cout<<"You have not assumed the right a and b"<<endl; 
        return; 
    }

    double c=a;  /*In the provided code, the line double c = a; initializes the variable c with the value of a. This is 
                    done to ensure that c has an initial value before entering the bisection loop.Inside the bisection 
                    loop, the variable c is updated as (a + b) / 2, which represents the midpoint of the interval [a, b]. 
                    Initially setting c to a ensures that it has a valid value in case the loop is not executed at all 
                    (for example, if func(a) == 0 initially).

                    The initial value of c is not critical and can be set to either a or b. It is just a starting point 
                    for the bisection algorithm. As the algorithm progresses, c will be updated with more accurate 
                    approximations of the root until the desired tolerance is achieved. */
    while((b-a)>= EPSILON){
        c=(a+b)/2; // Finding the middle point; 

        if(func(c) == 0.0) // Checking if middle point is the root 
        break; 

        else if(func(c)*func(a) < 0){
            b = c;
        }
            else a = c; 
        }

        cout<< "The value of root is: " << c << endl; 
    }

int main(){
    double a = -200; double b = 300; 
    bisection(a,b); 

    return 0; 
}