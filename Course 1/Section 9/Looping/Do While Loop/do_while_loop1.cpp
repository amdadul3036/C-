#include <iostream>
using namespace std;

int main(){

    int number {};

    do{
        cout << "Enter a number between 2 and 10: ";
        cin >> number;
    } while (number < 2 || number > 10);

    if (number > 2 || number < 10)
    {
        cout << "Thank you!!";

    }
    
    
    return 0;
}