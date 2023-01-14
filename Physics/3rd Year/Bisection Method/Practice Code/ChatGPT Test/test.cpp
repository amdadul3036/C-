#include <iostream>
#include <cmath>

// Function to evaluate the given equation at a given point x
double f(double x)
{
    return pow(x, 3) - pow(x, 2) + 2;
}

// Bisection method to find the root of the given equation
double bisection(double a, double b)
{
    // Set the maximum number of iterations and the tolerance
    const int MAX_ITER = 100;
    const double TOL = 1e-6;

    // Compute the function values at the endpoints
    double fa = f(a);
    double fb = f(b);

    // Check if the function has opposite signs at the endpoints
    if (fa * fb >= 0)
    {
        std::cerr << "Error: f(" << a << ") and f(" << b << ") have the same sign" << std::endl;
        return 0;
    }

    // Iterate the bisection method until the maximum number of iterations is reached or the tolerance is met
    for (int i = 0; i < MAX_ITER; ++i)
    {
        // Compute the midpoint of the interval and the function value at the midpoint
        double c = (a + b) / 2;
        double fc = f(c);

        // Check if the root is within the tolerance
        if (std::abs(fc) < TOL)
            return c;

        // Update the interval based on the sign of the function value at the midpoint
        if (fa * fc < 0)
            b = c;
        else
            a = c, fa = fc;
    }

    // If the maximum number of iterations is reached, return the midpoint of the final interval
    return (a + b) / 2;
}

int main()
{
    // Compute the root of the given equation using the bisection method
    double x = bisection(-1, 2);

    // Print the result
    std::cout << "x = " << x << std::endl;

    return 0;
}