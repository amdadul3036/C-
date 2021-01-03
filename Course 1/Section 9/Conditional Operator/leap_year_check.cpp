#include <iostream>
using namespace std;

int main(){

    int YEAR;
    cout << "Enter the YEAR you want to check: ";
    cin >> YEAR;

    cout << "Your YEAR " << YEAR << " is " << (( YEAR % 4 == 0 && YEAR % 100 != 0 || YEAR % 400 == 0) ? "Leap Year":"NOT Leap Year") << endl;
}