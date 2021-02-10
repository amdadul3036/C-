// Write a code to find the area of a circle 

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double radius , area;

    cout << "Enter the radius: ";
    cin >> radius;

    area = pow(radius,2) * 3.1416;

    cout << "Area is : " << area;
    return 0;
}

