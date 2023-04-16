// Write a C++ code to generates an array of N_points values for a sine function f(x) = sin(x) and the derivative of f(x).


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
        angle[i] = i*d_angle; // In this code, angle[i] is calculated as i*d_angle, where d_angle is the angular spacing between adjacent points in the angle array. The purpose of this calculation is to ensure that the angle array contains N_points equally spaced values of the angle between 0 and 2π radians. By incrementing angle[i] by d_angle for each successive value of i, we ensure that the values of angle are spaced approximately uniformly between 0 and 2π radians. The sin function is then evaluated at each value of angle to generate the f array, which contains the corresponding values of sin(angle).
        f[i] = sin(angle[i]);
    }

    f1_3[0] = (f[1] - f[0])/d_angle; // As it's first point, we are using Forward Difference Formula. In the formula (f[i+1] - f[i-1]) / (2*d_angle), we are multiplying the step size d_angle by 2. However, for the first point i=0, we cannot use the above formula since i-1 is negative, and so we need to use a modified formula. One way to do this is to use the one-sided difference formula for the first derivative at the first point, which is given by (f[1] - f[0]) / d_angle. This formula only uses the forward difference (f[1] - f[0]) since there is no point available to compute the backward difference (f[0] - f[-1]). So, in the code, we are using (f[1] - f[0]) / d_angle to approximate the first derivative at the first point i=0, and then we are using the central difference formula (f[i+1] - f[i-1]) / (2*d_angle) for the remaining points.
    f1_3[N_points - 1] = (f[N_points - 1] + f[N_points - 2])/d_angle;  // For last point, we are using the Backward Difference Formula. To approximate the first derivative of the function f(x) at the last point x = angle[N_points-1], we need to use a modified formula since we do not have access to the point f[N_points] which would be required to use the central difference formula. One way to approximate the first derivative at the last point is to use the one-sided difference formula for the first derivative at the last point, which is given by (f[N_points-1] - f[N_points-2]) / d_angle. This formula only uses the backward difference (f[N_points-1] - f[N_points-2]) since there is no point available to compute the forward difference (f[N_points] - f[N_points-1]). However, since f[N_points] does not exist, we use the last available point f[N_points-1] instead. So in the code, we are using (f[N_points-1] - f[N_points-2]) / d_angle to approximate the first derivative at the last point x = angle[N_points-1].

    for ( i = 1; i < N_points - 1; i++)
    {
        f1_3[i] = (f[i+1] - f[i-1])/(2*d_angle); // For all middle points [ Except First & Last Point ] ; we use Central Difference Formula. This line is using the central difference formula to approximate the first derivative of the function f(x) at all interior points x = angle[i] except for the first and last points. The central difference formula is given by: f'(x) ≈ [f(x + h) - f(x - h)] / (2h) where h is the step size, which in this code is given by d_angle = 2*M_PI / (N_points - 1). In the code, we are using the central difference formula with h = d_angle to approximate the first derivative of the function f(x) at all interior points angle[i], except for the first and last points. The formula for f1_3[i] is: f1_3[i] = (f[i+1] - f[i-1]) / (2*d_angle) ; Here, f[i+1] and f[i-1] are the values of the function f(x) evaluated at the points x = angle[i+1] and x = angle[i-1], respectively. The value of f1_3[i] gives an approximation of the first derivative of f(x) at the point x = angle[i]. 
    }

    /* 
    So the Summary is, 
                        For FIRST Point ---- Forward Difference Formula
                        For LAST Point ---- Backward Difference Formula
                        For MIDDLE Points ---- Central Difference Formula
    */
    for ( i = 0; i < N_points; i++)
    {
        cout<< angle[i]<< "  " << f[i] << "  " << f1_3[i] << "  " << cos(angle[i])<< endl;
    }
}