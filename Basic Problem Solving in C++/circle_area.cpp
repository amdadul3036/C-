// Write a code to find the area of Circle without using cmath header file

#include <iostream>
using namespace std;
#define PI = 3.1416;


int main(){
    double radius , area ;

    cout << "Enter the radius of your circle: " ;
    cin >> radius;

    area = radius * radius * 3.1416 ;
    cout << "Area of the circle: " << area << endl;

    return 0;

}