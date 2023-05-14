#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

void position(double x0, double y0){
    double x,y,t;

    x = (-0.3*pow(t,2)) + (7.2*t) + 28;
    y = (0.22*pow(t,2)) - (9.1*t) + 30;

    for(t=0;t<=30;t=t+0.1){
        cout << t << " " << x << " " << y << endl;
    }

}

// vx = -0.6t + 7.2
// vy = 0.44t - 9.1 
void velocity(double vx0, double vy0){
    double vx, vy, t;

    vx = (-0.6*t) + 7.2;
    vy = (0.44*t) - 9.1;

    for (t=0; t<=20; t+=0.1){
        cout << t << " " << vx << " " << vy << endl; 
    }
}

int main(){

    ofstream fout("position.dat");
    ofstream fout("velocity.dat");

    fout<< position(x,y) << endl; 
    fout<< velocity(vx,vy) << endl; 


}


// Hoise kina sure na 