/*
User will input two points in XY coordinate system (X1, Y1) and (X2, Y2). Calculate the distance between two
points and level them ‘Near’ if the distance is less than or equal to 10 and ‘Far’ if the distance is greater than
10. Terminate the Program if user enters 0 for all the inputs.

    Distance between two points is calculated by the formula: d = root_over((x2-x1)^2 + (y2 - y1)^2)

    EXAMPLE:

                       Sample                  Input/Output:
                        Input                       Output
                    -4 -3 4 3                       Near
                    5 5 25 10                       Far
                    -10 13 -6 22                    Near
                    0 0 0 0
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x1,x2,y1,y2,distance;

    cout << "Enter first point using a space : ";
    cin >> x1 >> y1;

    cout << "Enter second point using a space : ";
    cin >> x2 >> y2;

    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    if (distance<= 10)
    {
        cout << "Near";
    }else{
        cout << "Far";
    }
    
    return 0;
}