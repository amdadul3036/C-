// (c) answer start

#include<iostream>
#include<cmath> 
#include<fstream> // To plot graph, we should use the fstream library here
using namespace std;

double accl(double theta, double mu){
    double F= 12.0,m = 3.0,g= 9.8;

    double j = (F/m)*cos(theta);
    double k = (F/m)*sin(theta);

    double a = j - mu*(g-k);

    return a; 
}

int main(){
    ofstream fout("accl.dat"); //Here will be ofstream fout("DatFileName.dat")
    for (double theta = 0;theta<=M_PI/2; theta = theta + (M_PI/30))
    {
        fout <<theta<<" "<< accl(theta,0.40) << endl; // And To plot graph, we should use the fout here instead of cout 
    }
    return 0; 
}

// (c) answer end 