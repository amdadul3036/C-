#include <iostream>
using namespace std;

int number {};

int main(){

    cout << "Enter a number that you want to check if it is prime or not : " ;
    cin >> number;

    int half = number/2;
    for (int i = 2; i <= half ; i++)
    {
        if (number%i == 0)
        {
                cout <<  number << " is a prime number." << endl;
        }else
            {
                cout << number << " is not a prime number." << endl;
            }

        return 0;  
    }
    
}


