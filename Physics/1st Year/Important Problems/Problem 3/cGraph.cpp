// (c) start for graph 

#include<iostream>
#include<cmath>
#include<fstream>
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
    ofstream fout("velocity.dat");
    double t; 
    for(t=0;t<=100;t+=0.01){
        fout << t << " " << vel(t) << endl;
    }

    return 0;
}


// (c) end with graph