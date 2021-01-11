// Checking the number is prime or not

#include <iostream>
using namespace std;

int main(){

    int num {};

    cout << "Enter your number that you want to check if it prime or not: ";
    cin >> num;

    if (num%2==0)
    {
        cout << "It's Not Prime." << endl;
    }else
    {
        cout << "It's Prime.";
    }
    
    return 0;

}