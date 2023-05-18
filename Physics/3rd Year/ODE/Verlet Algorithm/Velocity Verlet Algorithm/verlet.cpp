#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

void verlet(double t0, double theta, double omega, double dt) {
    const double g = 9.8; // acceleration due to gravity
    const double l = 1.0; // length of the pendulum

    double fold = (-g / l) * theta;
    for (double t = t0; t <= 5; t += dt) {
        cout << t << " " << theta << " " << 1 + (0.5 * exp(-4 * t)) - (0.5 * exp(-2 * t)) << endl;
        double theta_temp = theta; // temporary variable to store theta
        theta += (omega + (fold * (dt / 2))) * dt;
        omega += (fold + (-g / l) * theta_temp) * (dt / 2);
        fold = (-g / l) * theta; // update fold for the next iteration
    }
}

int main() {
    double t0 = 0.0; // initial time
    double theta0 = 0.1; // initial angle
    double omega0 = 0.0; // initial angular velocity
    double dt = 0.01; // time step

    verlet(t0, theta0, omega0, dt);

    return 0;
}
