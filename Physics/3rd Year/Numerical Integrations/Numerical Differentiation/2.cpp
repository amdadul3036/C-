#include<iostream>
#include<cmath>
using namespace std;

#define N_points 300

int main(){
    int i;

    float angle[N_points], f[N_points], f1_3[N_points];
    float d_angle; 

    d_angle = 2*M_PI / (N_points - 1); 

    for ( i = 0; i < N_points; i++)
    {
        angle[i] = i*d_angle;
        f[i] = sin(angle[i]);
    }

    f1_3[0] = (f[1] - f[0])/d_angle;
    f1_3[N_points - 1] = (f[N_points - 1] + f[N_points - 2])/d_angle;

    for ( i = 1; i < N_points - 1; i++)
    {
        f1_3[i] = (f[i+1] - f[i-1])/(2*d_angle);
    }
    for ( i = 0; i < N_points; i++)
    {
        cout<< angle[i]<< "  " << f[i] << "  " << f1_3[i] << "  " << cos(angle[i])<< endl;
    }
}