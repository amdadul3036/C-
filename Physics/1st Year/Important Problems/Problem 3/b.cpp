// (b) answer start 


#include<iostream>
#include<cmath>
using namespace std;

double vel(double t){
    int m = 60,b = 1,v0 = 15;
    double g = 9.8;

    double j = (m*g)/b;
    double k = (b*t)/m;

    double v = j + (v0 - j)*exp(-k);

    return v; 
}


int main(){
    cout<< "Velocity of the diver after 10 seconds: " << vel(10) << endl;
}

// (b) answer End 
