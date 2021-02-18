/*
User will input a floating point number. You need to print the number without the integer
part.


        Input       Output
        5.546       0.546
        10.776      0.776
*/

#include<iostream>
using namespace std;

int main(){
    double number;

    cout << "Enter the number: ";
    cin >> number;

    int integer_part = (int) number;
    double float_part = number - integer_part ;

    cout << float_part << endl;

    return 0;
}