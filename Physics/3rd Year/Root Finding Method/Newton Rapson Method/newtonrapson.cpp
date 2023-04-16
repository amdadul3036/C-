// Write a C++ code in implementing the Newton-Raphson method to find the roots of a given equation f(x) = sinx.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x = M_PI/4, f1_3, f1_5, f1_e;
    float d_angle = 5;

    for (int i = 1; i <= 10; i++) {
        d_angle = d_angle / 10;

        f1_3 = (sin(x+d_angle) - sin(x-d_angle)) / (2*d_angle);
        f1_5 = (-sin(x+2*d_angle) + 8*sin(x+d_angle) - 8*sin(x-d_angle) + sin(x-2*d_angle)) / (12*d_angle);
        f1_e = cos(x);

        cout << d_angle << "  " << f1_3 << "  " << f1_5 << "  " << f1_e << endl;
    }

    return 0;
}
