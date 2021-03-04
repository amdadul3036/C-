/*
Write a C++ program which takes two integer values X and Y as inputs and determines which quadrant the point
lies.
Sample Input/Output:
Input           Output
5  7        First Quadrant
-1 3        Second Quadrant
0  0            Origin
*/

#include<iostream>
using namespace std;

int main(){
    double x,y;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter y : ";
    cin >> y;

    if (x>0 & y>0)
    {
        cout << "First Quadrant";
    }else if (x<0 & y>0)
    {
        cout << "Second Quadrant";
    }else if (x<0 & y<0)
    {
        cout << "Third Quadrant";
    }else if (x>0 & y<0)
    {
        cout << "Forth Quadrant";
    }else
    {
        cout << "Origin";       
    }
    
    return 0;
}