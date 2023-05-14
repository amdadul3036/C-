#include<iostream>
#include<cmath>  //We should use this library function to operate sin,cos,tan etc.
using namespace std;

// (a) number answer start 

double accl(double theta, double mu){
    double F= 12.0,m = 3.0,g= 9.8;

    double j = (F/m)*cos(theta);
    double k = (F/m)*sin(theta);

    double a = j - mu*(g-k);

    return a; 
}

// (a) number answer End


// (b) answer start

int main(){
    for (double theta = 0;theta<=M_PI/2; theta = theta + (M_PI/30))
    {
        cout <<theta<<" " << accl(theta,0.40) << endl; 
    }
    return 0; 
}

// (b) answer end
