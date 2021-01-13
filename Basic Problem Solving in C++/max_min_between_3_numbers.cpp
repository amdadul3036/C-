// Determine the maximum and minimum numbers between three numbers

#include <iostream>
using namespace std;

int main(){

    double num1,num2,num3;

    cout << "Enter three numbers using space: ";
    cin >> num1 >> num2 >> num3;

    double max = num1;

    if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }else if (num3 > num1 && num3 > num2)
    {
        max = num3;
    }else
    {
        max = max;
    }

    cout << "Maximum number is: " << max << endl;


    double min = num1;

    if (num2 < num1 && num2 < num3)
    {
        min = num2;
    }else if (num3 < num1 && num3 < num2)
    {
        min = num3;
    }else
    {
        min = min;
    }

    cout << "Minium number is: " << min << endl;
    
    return 0;

}